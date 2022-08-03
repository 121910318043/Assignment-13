#include <stdio.h>
//program in C to count the digits of a given number using recursion.
int cnt(int);
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d",cnt(n));
    return 0;
}
int cnt(int n)
{
    int c;
    if(n%10==0)
    return 0;
    c = 1 + cnt(n/10);
    return c;
}