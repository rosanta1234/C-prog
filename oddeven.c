#include<stdio.h>

void check(int n)
{
    int r = n%2;
    if (r == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}
int main()
{
    int n=102;
    printf("Enter the number: ");
    scanf("%d",&n);
    check(n);

    return 0;
}