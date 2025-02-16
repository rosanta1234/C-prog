#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    
    if (n == 0)
    {
        printf("Zero\n");
    }
    else if (n < 0)
    {
        printf("Negative\n");
    }
    else
    {
        printf("Positive\n");
    }
    
    return 0;
}