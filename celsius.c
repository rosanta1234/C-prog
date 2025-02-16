#include<stdio.h>

float fahreheit(float f)
{
    return ((f-32.0) * 5.0 / 9.0);
}
int main()
{
    float f = 50;

    printf("Enter the temp in celcius - %0.2f",fahreheit(f));

    return 0;

}