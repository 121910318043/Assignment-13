#include<stdio.h>
//calculate the power of any number using recursion.
int power(int n,int p);
int main()
{
    int n,p;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter power: ");
    scanf("%d",&p);
    printf("%d",power(n,p));
}
int power(int n,int p)
{
    if(p==0)
        return 1;
    return n*power(n,p-1);
}
