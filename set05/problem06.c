#include<stdio.h>
int input_n();
void input_array(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float average);
int main()
{
	int size=input_n();
	int array[size];
	input_array(size,array);
	float result=odd_average(size,array);
	output(result);
	return 0;
}
int input_n()
{
	int n;
	printf("Enter the Number of Elements in the Array\n");
	scanf("%d",&n);
	return n;
}
void input_array(int n, int a[n])
{
	for (int i=0;i<n;i++)
	{
		printf("Enter the Number %d of the Array\n",i+1);
		scanf("%d",&a[i]);
	}
}
float odd_average(int n, int a[n])
{
	float sum=0,count=0;
	for (int i=0;i<n;i++)
	{
		if (a[i]%2!=0)
		{
			sum = sum + a[i];
			count = count + 1;
		}
	}
	return sum/count;
}
void output(float average)
{
	printf("The Average of the Odd Elements in the Array is %.2f\n",average);
}
