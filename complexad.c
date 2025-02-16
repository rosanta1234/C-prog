#include<stdio.h>

struct complex{
    float real;
    float img;
};

struct complex addcomplex(struct complex c1, struct complex c2) {
    struct complex result;
    result.real = c1.real + c2.real;
    result.img =  c1.img + c2.img;
    return result;
}
int main()
{
    struct complex n1, n2, sum;
    printf("Enter real and imaginary part of first complex number: ");
    scanf("%f %f", &n1.real, &n1.img);

    
    printf("Enter real and imaginary part of second complex number: ");
    scanf("%f %f", &n2.real, &n2.img);

    sum = addcomplex(n1, n2);

    printf("sum = %.2f + %.2fi\n", sum.real, sum.img);

    return 0;
}