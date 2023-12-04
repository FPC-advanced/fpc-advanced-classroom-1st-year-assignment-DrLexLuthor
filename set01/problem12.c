#include<stdio.h>
typedef struct complex
{
	float real,img;
} Complex;
int input_array_size();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add_complex(Complex c1, Complex c2);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex sum);
int main()
{
	int size;
	size=input_array_size();
	Complex array[size];
	input_n_complex(size,array);
	Complex sum;
	sum=add_n_complex(size,array);
	output(size,array,sum);
	return 0;
}
int input_array_size()
{
	int n;
	printf("How many Complex Numbers you want to Add?\n");
	scanf("%d",&n);
	return n;
}
Complex input_complex()
{
	Complex c;
	printf("Enter the Real and Imaginary Parts of the Complex Number\n");
	scanf("%f%f",&c.real,&c.img);
	return c;
}
void input_n_complex(int n, Complex c[n])
{
	for (int i=0;i<n;i++)
	{
		c[i]=input_complex();
	}
}

Complex add(Complex c1, Complex c2)
{
	Complex sum={0,0};
	sum.real=c1.real+c2.real;
	sum.img=c1.img+c2.img;
	return sum;
}
Complex add_n_complex(int n, Complex c[n])
{
	Complex total={0,0};
	for (int i=0;i<n;i++)
	{
		total=add(total,c[i]);
	}
	return total;
}
void output(int n, Complex c[n], Complex sum)
{
	int i=0;
	while (i<n-1)
	{
		printf("%.2f+%.2f(i) + ",c[i].real,c[i].img);
		i++;
	}
	printf("%.2f+%.2f(i) = %.2f+%.2f(i)\n",c[i].real,c[i].img,sum.real,sum.img);
}
