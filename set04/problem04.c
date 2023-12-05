#include<stdio.h>
#include<math.h>
int input_degree();
float input_x();
void input_coefficients(int n, float a[n]);
float evaluate(int n, float x, float a[n]);
void output(int n, float a[n], float x, float result);
int main()
{
    int highest_degree;
    highest_degree=input_degree();
    float coeff[highest_degree+1],x,result;
    x=input_x();
    input_coefficients(highest_degree,coeff);
    result=evaluate(highest_degree,x,coeff);
    output(highest_degree,coeff,x,result);
}
int input_degree()
{
    int n;
    printf("Enter the Highest Degree of the Polynomial\n");
    scanf("%d",&n);
    return n;
}
float input_x()
{
    float n;
    printf("Enter the Value of 'x' \n");
    scanf("%f",&n);
    return n;
}
void input_coefficients(int n, float a[n])
{
    for (int i=0;i<=n;i++)
    {
        printf("Enter Coefficient of (x)^%d\n",i);
        scanf("%f",&a[i]);
    }
}
float evaluate(int n, float x, float a[n])
{
    float sum=0;
    for (int i=0;i<=n;i++)
    {
            sum = sum + (a[i]*(pow(x,i)));
    }
    return sum;
}
void output(int n, float a[n], float x, float result)
{
    int i=0;
    while (i<=n-1)
    {
        printf("%.2f*(%.2f)^%d + ",a[i],x,i);
        i++;
    }
    printf("%.2f*(%.2f)^%d = %.2f ",a[i],x,i,result);
}

    