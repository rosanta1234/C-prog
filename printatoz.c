#include <stdio.h>
 
int main()
{
    int i;
    printf("Alphabets from (A-Z) are:\n");
 
    // ASCII value of A=65 and Z=90
    for (i = 65; i <= 90; i++) {

        printf("%c ", i);
    }
 
    printf("\nAlphabets from (a-z) are:\n");
 
    // ASCII value of a=97 and z=122
    for (i = 97; i <= 122; i++) {

        printf("%c ", i);
    }
 
    return 0;
}