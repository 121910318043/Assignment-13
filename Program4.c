#include<stdio.h>
//recursive function to calculate sum of squares of first n natural numbers.
int sumsquares(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d",sumsquares(n));
    return 0;
}
int sumsquares(int s)
{
    int k;
    if(s==0)
        return 0;
    k=s*s+sumsquares(s-1);
    return k;
}
