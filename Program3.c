#include<stdio.h>
//recursive function to calculate sum of first N odd natural numbers.
int Evensum(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d",Evensum(n));
    return 0;
}
int Evensum(int n)
{
    int k;
    if(n==0)
        return 0;
    k=n*2+Evensum(n-1);
    return k;
}
