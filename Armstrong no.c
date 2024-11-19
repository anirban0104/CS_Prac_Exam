#include <stdio.h>
int main() {
    int n,original,r,arm=0;
    printf("Enter a number");
    scanf("%d", &n);
    original=n;
    while(n>0)
    {
    r=n%10;
    arm=(r*r*r)+arm;
    n=n/10;
    }
    if(original==arm)
    {
        printf("%d is armstrong number\n",arm);
        }
        else 
        {
        printf("%d is not armstrong number\n",arm);
    }
    return 0;
}