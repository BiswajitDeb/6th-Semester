/*This series is a mixture of 2 series - all the odd terms form a Fibonacci series and all the even terms are the prime numbers in ascending order.
Write a program to find the Nth term in this series:*/
#include<stdio.h>
#define MAX 99999

int fibonacci(int n)
{
    int a = 0, b = 1, c;
    for (int i = 1; i<=n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return a;
}

int prime(int n)
{
    int flag=0;
    int count =0;
    for (int i=2; i<=MAX; i++)
    {
        flag = 0;
        for (int j=2; j<i; j++)
        {
            if(i%j == 0)
            {
                flag = 1;
                break;
            }
        }
        //is prime
        if (flag == 0)
        {
            if(++count == n)
            {
                return i;
                break;
            }
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);

    
    if(n%2 == 1) 
        printf("%d",fibonacci (n/2 + 1));
    else 
        printf("%d",prime(n/2));
    
    
    return 0;
}