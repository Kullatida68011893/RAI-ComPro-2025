#include <stdio.h>

int main () {
    float radius, pi, area, length, resistivity, R_value ;
    pi = 22/7;
   
    printf ("Enter Radius of Resister(m) : ");
    scanf ("%f",&radius);

    printf ("Enter Length of Resistor(m) : ");
    scanf ("%f",&length);

    printf ("%s", "Enter Resistivity of Resistor(m) : ");
    scanf ("%e",&resistivity);
    
    area = pi *radius *radius;
    R_value = resistivity*length/area;
    
    printf ("The value off this Resistor = %0.2f", R_value);

    return 0;

}