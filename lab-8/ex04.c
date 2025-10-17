#include <stdio.h>

int countVowels(char str[]) 
{
    int i, count = 0, c;
    c = str[i];

    for (i = 0; str[i] != '\0'; i++) 
    {  
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') 
        {
            count++;
        }
    }
    return (count);
}

int main() 
{
    char str[100];  
    int result;

    printf("Input: ");
    fgets(str, sizeof(str), stdin); 

    result = countVowels(str);

    printf("Output: Number of vowels: %d\n", result);

    return (0);
}

