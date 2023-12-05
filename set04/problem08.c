#include<stdio.h>
typedef struct fract
{
    int num,den;
} Fraction;
int input_no();
Fraction input_fraction();
void input_n_fraction(int n, Fraction f[n]);
int find_gcd(int a, int b);
Fraction add_fraction(Fraction f1, Fraction f2);
Fraction add_n_fraction(int n, Fraction f[n]);
void output(int n, Fraction f[n], Fraction sum);
int main()
{
    int size=input_no();
    Fraction array[size];
    input_n_fraction(size,array);
    Fraction sum;
    sum=add_n_fraction(size,array);
    output(size,array,sum);
    return 0;
}
int input_no()
{
    int n;
    printf("Enter the Number of Fractions\n");
    scanf("%d",&n);
    return n;
}
Fraction input_fraction()
{
    Fraction f;
    printf("Enter the Numerator and Denominator for the Fraction\n");   
    scanf("%d%d",&f.num,&f.den);
    return f;
}
void input_n_fraction(int n, Fraction f[n])
{
    for (int i=0;i<n;i++)
    {
            f[i]=input_fraction();
    }
}
int find_gcd(int a, int b)
{
    int gcd=1;
    for (int i=2;(i<=a||i<=b);i++)
        {
            if ( (a%i==0) && (b%i==0))
                {
                            gcd=i;
                }
        }
        return gcd;
}
Fraction add_fraction(Fraction f1, Fraction f2)
{
    Fraction res;
    int hcf=find_gcd(f1.den,f2.den);
    res.den=(f1.den*f2.den)/hcf;
    res.num=f1.num*(res.den/f1.den) + f2.num*(res.den/f2.den);
    return res;
}
Fraction add_n_fraction(int n, Fraction f[n])
{
    Fraction sum={0,1};
    for (int i=0;i<n;i++)
    {
        sum=add_fraction(sum,f[i]);
    }
    return sum;
}
void output(int n, Fraction f[n], Fraction sum)
{
    int factor=find_gcd(sum.num,sum.den);
    int i=0;
    while (i<n-1)
        {   printf("%d/%d + ",f[i].num,f[i].den);
            i++;
        }
        printf("%d/%d = %d/%d = %d/%d\n",f[i].num,f[i].den,sum.num,sum.den,sum.num/factor,sum.den/factor);
}
