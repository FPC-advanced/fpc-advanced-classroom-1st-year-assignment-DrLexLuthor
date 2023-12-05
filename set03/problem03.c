
#include<stdio.h>
int input();
int is_prime(int n);
void output(int n, int result);

int input()
{
    int n;
    printf("Enter the Number\n");
    scanf("%d",&n);
    return n;
}
int is_prime(int n)
{
    int result=1;
    for (int i=2;i*i<=n;i++)
    {
        if (n%i==0)
        {
            result=0;
        }
    }
    return result;
    }
    void output(int n, int result)
    {
        printf("The Entered Number %d is ",n);
        if (result==1)
        {
            printf("Prime\n");
        }
        else{
            printf("Non-Prime\n");
        }
    }
int main()
{
    int number,result;
    number=input();
    result=is_prime(number);
    output(number,result);
    return 0;
}
  