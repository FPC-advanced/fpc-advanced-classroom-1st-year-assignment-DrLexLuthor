#include<stdio.h>
typedef struct fract
{
      int num,den;
} Fraction;
Fraction input_fraction();
int find_gcd(int a, int b);
Fraction add_fractions(Fraction a, Fraction b);
void output(Fraction a, Fraction b, Fraction sum);
int main()
{
      Fraction f1,f2,sum;
        f1=input_fraction();
          f2=input_fraction();
            sum=add_fractions(f1,f2);
              output(f1,f2,sum);
                return 0;
}
Fraction input_fraction()
{
      Fraction f;
        printf("Enter Numerator and Denominator of the Fraction\n");
          scanf("%d%d",&f.num,&f.den);
            return f;
}
int find_gcd(int a, int b)
{
      int gcd=1;
        for (int i=2;(i<=a||i<=b);i++)
            {
               if ((a%i==0)&&(b%i==0))
                    {
                       gcd=i;
                          }
            }
              return gcd;
}
Fraction add_fractions(Fraction a, Fraction b)
{
    int hcf;
     hcf=find_gcd(a.den,b.den);
          Fraction res;
            res.den=(a.den*b.den)/hcf;
              res.num=a.num*(res.den/a.den) + b.num*(res.den/b.den);
                return res;
}
void output(Fraction a, Fraction b, Fraction sum)
{
      int factor;
        factor=find_gcd(sum.num,sum.den);
          printf("%d/%d + %d/%d = %d/%d = %d/%d\n",a.num,a.den,b.num,b.den,sum.num,sum.den,sum.num/factor,sum.den/factor);
}
