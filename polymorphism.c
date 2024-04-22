#include<stdio.h>
void add(int a,int b)
{
    printf("Sum is %d\n",a+b);
}
void sub(int a, int b)
{
    printf("Difference is %d\n", a-b);
}
void mul(int a, int b)
{
    printf("Product is %d\n", a*b);
}
void div(int a, int b)
{
    printf("Quotient is %d\n", a/b);
}

int main()
{
    void (*operation)(int, int);

    operation = add;
    operation(3, 4);

    operation = sub;
    operation(10, 3);

    operation = mul;
    operation(2, 3);
    
    operation = div;
    operation(10, 2);
    return 0;   
}