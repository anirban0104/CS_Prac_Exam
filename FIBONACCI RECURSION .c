#include <stdio.h>
int Fibonacci(int);
void main()
{
    int num,i;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    for(i=0;i<num;i++)
    printf("%d ",Fibonacci(i));
    }
    int Fibonacci(int num)
    {
    if(num==0) 
    return 0;
    else 
    if(num==1)
    return 1;
    else 
    return(Fibonacci(num-1)+Fibonacci(num-2));
    }
    
    