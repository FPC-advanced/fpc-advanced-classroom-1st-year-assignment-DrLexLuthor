#include<stdio.h>
typedef struct fract
{
    int num,den;
} Fraction;
void input_fraction(Fraction *a, Fraction *b, Fraction *c);
Fraction smallest(Fraction a, Fraction b, Fraction c);
void output(Fraction a, Fraction b, Fraction c, Fraction smallest_fraction);
int main()
{
    Fraction f1,f2,f3,smallest_fraction;
    input_fraction(&f1,&f2,&f3);
    smallest_fraction=smallest(f1,f2,f3);
    output(f1,f2,f3,smallest_fraction);
    return 0;
}
void input_fraction(Fraction *a, Fraction *b, Fraction *c)
{
printf("Enter the Numerator and Denominator for Fraction-1\n");
scanf("%d%d",&a->num,&a->den);
  printf("Enter the Numerator and Denominator for Fraction-2\n");
  scanf("%d%d",&b->num,&b->den);
    printf("Enter the Numerator and Denominator for Fraction-3\n");
    scanf("%d%d",&c->num,&c->den);
}
Fraction smallest(Fraction a, Fraction b, Fraction c)
{
    float res1,res2,res3;
    res1=(a.num*1.0)/(a.den*1.0);
    res2=(b.num*1.0)/(b.den*1.0);
    res3=(c.num*1.0)/(c.den*1.0);
    Fraction smallest;
    if ( (res1<=res2) && (res1<=res3) )
    {
        smallest.num=a.num;
        smallest.den=a.den;
    }
    else if ( (res2<=res1) && (res2<=res3) )
    {
        smallest.num=b.num;
        smallest.den=b.den;
    }
    else{
        smallest.num=c.num;
        smallest.den=c.den;
    }
    return smallest;
}
void output(Fraction a, Fraction b, Fraction c, Fraction smallest_fraction)
{
    printf("The Smallest Fraction among %d/%d, %d/%d and %d/%d is %d/%d\n",a.num,a.den,b.num,b.den,c.num,c.den,smallest_fraction.num,smallest_fraction.den);
}
