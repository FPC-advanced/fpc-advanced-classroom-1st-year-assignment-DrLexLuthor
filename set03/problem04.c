#include<stdio.h>
int input();
int find_fibo(int n);
void output(int n, int fibo);

int input()
{
    int n;
    printf("Enter  'n' for Fibo(n)\n");
    scanf("%d",&n);
    return n;
}
int find_fibo(int n)
{
    int fib[n];
    fib[0]=0,fib[1]=1,fib[2]=1;
    for (int i=3;i<n+1;i++)
    {
            fib[i]=fib[i-1]+fib[i-2];
    }
    return fib[n];
}
void output(int n, int fibo)
{
    printf("Fibo(%d) = %d\n",n,fibo);
}
int main()
{
    int number,answer;
    number=input();
    answer=find_fibo(number);
    output(number,answer);
    return 0;
}
