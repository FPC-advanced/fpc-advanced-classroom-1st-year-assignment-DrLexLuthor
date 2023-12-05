#include<stdio.h>
void input_n_r(int *n, int *r); 
int nCr(int n, int r);
void output(int n, int r, int result);
int main()
{
    int n,r,result;
    input_n_r(&n,&r);
    result=nCr(n,r);
    output(n,r,result);
}
void input_n_r(int *n, int *r)
{
    printf("Enter 'n' and 'r' for nCr\n");
    scanf("%d%d",n,r);
}
int nCr(int n, int r)
{
    int n_fact=1,r_fact=1,n_r_fact=1;
    for (int i=1;i<=n;i++)
    {
        if (i<=r)
        {
            r_fact=r_fact*i;
            n_r_fact=n_r_fact*i;
        }
        else if (i<=n-r)
            {
                    n_r_fact=n_r_fact*i;
            }
               n_fact=n_fact*i;
    }
    return n_fact/((r_fact)*(n_r_fact));
}
void output(int n, int r, int result)
{
    printf("%dC%d = %d\n",n,r,result);
}
