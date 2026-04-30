#include<stdio.h>
#include "hello.c"
int factorial(int n);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("\n printing from main %d! = %d ",n,factorial(n));
    hello();
    return 0;

}
int factorial(int n)
{
int fact;
    if (n==1)
    {
        printf("\n");
        printf("1! = 1");
        return(1);
    }
    else
    {
        printf("\n n = %d",n);
        fact=n*factorial(n-1);
        printf("\n fact = %d",fact);
        return(fact);
    }
}
