#include<stdio.h>
//recursive function to print first N terms of Fibonacci series.
int fibonacci(int);
int main()
{
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    printf("%d",fibonacci(i));
    return 0;
}
int fibonacci(int n)
{
    if(n==0 || n==1)
        return n;
    return fibonacci(n-1)+fibonacci(n-2);
}
