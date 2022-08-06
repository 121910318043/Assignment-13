#include<stdio.h>
//recursive function to calculate HCF of two numbers.
int HCF(int,int);
int main()
{
    int a,b,n;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    if(a>b)
    {a=a+b;
     b=a-b;
     a=a-b;}
    printf("%d",HCF(a,b));
    return 0;
}
int HCF(int a,int b)
{
    if(a==0)
        return b;
    HCF(b%a,a);
}
