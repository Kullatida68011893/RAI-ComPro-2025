#include <MPU6050_tockn.h>
#include <Servo.h>
#include <Wire.h>

MPU6050 mpu(Wire);
Servo servoLeft;
Servo servoRight;

#define MOTOR_B_EN 5
#define MOTOR_B_1 6
#define MOTOR_B_2 7

#define MOTOR_A_EN 10
#define MOTOR_A_1 9
#define MOTOR_A_2 8

#define TRIG 12
#define ECHO 13

float baseYaw = 0;
float kp = 3.0;
int baseSpeed = 160;


void motorControl(int leftSpeed, int rightSpeed) {
  leftSpeed = constrain(leftSpeed, -255, 255);
  rightSpeed = constrain(rightSpeed, -255, 255);

  digitalWrite(MOTOR_B_1, leftSpeed > 0);
  digitalWrite(MOTOR_B_2, leftSpeed <= 0);
  analogWrite(MOTOR_B_EN, abs(leftSpeed));

  digitalWrite(MOTOR_A_1, rightSpeed > 0);
  digitalWrite(MOTOR_A_2, rightSpeed <= 0);
  analogWrite(MOTOR_A_EN, abs(rightSpeed));
}

void stopMotors() {
  analogWrite(MOTOR_B_EN, 0);
  analogWrite(MOTOR_A_EN, 0);
}

void updateGyro() { mpu.update(); }

double readUltrasonic() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  long duration = pulseIn(ECHO, HIGH);

  constexpr double SPEED_OF_SOUND = 0.0343; 
  double distance_cm = duration * (SPEED_OF_SOUND / 2);

  return distance_cm;
}

void driveStraight() {
  updateGyro();
  float currentYaw = mpu.getAngleZ();
  float error = currentYaw - baseYaw;
  float correction = kp * error;
  int left = baseSpeed - correction;
  int right = baseSpeed + correction;
  motorControl(left, right);
}

void rotateTo(float targetAngle) {
  float currentYaw;
  do {
    updateGyro();
    currentYaw = mpu.getAngleZ();
    float error = targetAngle - currentYaw;
    int turnSpeed = constrain(kp * error, -120, 120);
    motorControl(-turnSpeed, turnSpeed);
  } while (abs(targetAngle - currentYaw) > 2);
  stopMotors();
  baseYaw = targetAngle;
}

unsigned long gateStartTime = 0;
bool gateOpening = false;

void openGate() {
  if (!gateOpening) {
    servoLeft.write(180);
    servoRight.write(0);
    gateStartTime = millis(); 
    gateOpening = true;
  }

  updateGyro();  


  if (millis() - gateStartTime >= 1500) {
    gateOpening = false; 
  }
}

unsigned long gateCloseStartTime = 0;
bool gateClosing = false;

void closeGate() {
  if (!gateClosing) {
    servoLeft.write(0);
    servoRight.write(180);
    gateCloseStartTime = millis(); 
    gateClosing = true;
  }


  updateGyro();


  if (millis() - gateCloseStartTime >= 1500) {
    gateClosing = false;  
}

void moveUntil(float targetCM) {
  while (true) {
    driveStraight(); 
    if (readUltrasonic() <= targetCM)
      break;
  }
  stopMotors();
}


void GoGetObject() {
  Serial.println("Mission 1: Go Get Object");

  moveUntil(5);
  rotateTo(-90);
  moveUntil(25);
  rotateTo(0);
  moveUntil(45);
  rotateTo(90);
  openGate();
  moveUntil(5);
  closeGate();
}

void GoDropObject() {
  Serial.println("Mission 2: Go Drop Object");

  rotateTo(270); 
  moveUntil(5);
  rotateTo(180);
  moveUntil(5);
  rotateTo(270);
  moveUntil(5);
  rotateTo(0);
  moveUntil(5);
  rotateTo(90);
  moveUntil(5);
  rotateTo(180);
  moveUntil(25);
  rotateTo(270);
  moveUntil(5);
  rotateTo(180);
  moveUntil(5);
  rotateTo(90);
  moveUntil(5);
  rotateTo(0);
  moveUntil(5);
  openGate();
 
  unsigned long start = millis();
  while (millis() - start < 2000)
    motorControl(-150, -150);
  stopMotors();
  closeGate();
}

void GoExit() {
  Serial.println("🔵 Mission 3: Go Exit");

  rotateTo(90);
  moveUntil(5);
  rotateTo(0);
  moveUntil(5);
  rotateTo(90);
  moveUntil(5);
  rotateTo(180);
  moveUntil(5);
  rotateTo(90);
  moveUntil(5);
  rotateTo(0);
  moveUntil(5);
  rotateTo(270);
  moveUntil(25);
  rotateTo(0);
  moveUntil(5);
  rotateTo(90);
  moveUntil(5);
  stopMotors();
  Serial.println("✅ TASK DONE!");
}