#include<stdio.h>
//recursive function to calculate sum of digits of a given number.
int sumdignum(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d",sumdignum(n));
    return 0;
}
int sumdignum(int s)
{
    int k;
    if(s==0)
        return 0;
    k=s%10+sumdignum(s/10);
    return k;
}
