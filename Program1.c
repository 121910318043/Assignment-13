#include<stdio.h>
//recursive function to calculate sum of first N natural numbers.
int SumNnumbers(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d",SumNnumbers(n));
    return 0;
}
int SumNnumbers(int n)
{
    int k;
    if(n==0)
        return 0;
    k=n+SumNnumbers(n-1);
    return k;
}
