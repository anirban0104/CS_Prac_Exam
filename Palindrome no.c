#include <stdio.h>
int main() {
    int n,original,r,sum=0;
    printf("Enter a number");
    scanf("%d", &n);
    original=n;
    while(n>0)
    {
    r=n%10;
    sum=r+(sum*10);
    n=n/10;
    }
    if(original==sum)
    {
        printf("%d is a palindrome number\n",sum);
        }
        else 
        {
        printf("%d is not a palindrome number\n",sum);
    }
    return 0;
}