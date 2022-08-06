#include<stdio.h>
//recursive function to calculate sum of first N odd natural numbers.
int oddsum(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d",oddsum(n));
    return 0;
}
int oddsum(int n)
{
    int k;
    if(n==1)
        return 1;
    k=(2*n)-1+oddsum(n-1);
    return k;
}
