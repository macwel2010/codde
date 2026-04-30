#include<stdio.h>
void main()
{
    double long  n=0,sum=0,i;
    printf("Enter the number to sum n : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("The sum of first %d numbers is : %d.",n,sum);


}
