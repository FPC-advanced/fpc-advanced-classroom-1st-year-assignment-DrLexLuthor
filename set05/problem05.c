#include<stdio.h>
int input_x();
float borga_x(int x);
void output(int x, float res);
int main()
{
	int x=input_x();
	float result=borga_x(x);
	output(x,result);
	return 0;
}
int input_x()
{
	int n;
	printf("Enter 'x' for Borga(x)\n");
	scanf("%d",&n);
	return n;
}
float borga_x(int x)
{
	int i=1,j=1;
  float num=1,sum=1;
	while (i>0)
	{
		num = num * x;
		float den=1;
		for (j=1;(j<=(2*i)+1);j++)
		{
			den = den * j;
		}
		if ((num/den)<0.000001)
		{
			break;
		}
		else
		{
			sum = sum + (num/den);
			i = i + 1;
		}
	}
	return sum;
}
void output(int x, float res)
{
	printf("Borga(%d) = %f\n",x,res);
}
