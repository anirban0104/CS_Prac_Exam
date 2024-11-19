#include <stdio.h>
int main()
{
    int n1, n2,n3, i, gcd;
    printf("Enter three integers: \n");
    scanf("%d %d %d", &n1, &n2, &n3);
    for(i=1; i <= n1 && i <= n2 && i <= n3; ++i)
    {
        if(n1%i==0 && n2%i==0 && n3%i==0)
            gcd = i;
    }
    printf("G.C.D of %d , %d and %d is %d", n1, n2, n3, gcd);
    return 0;
}