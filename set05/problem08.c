#include<stdio.h>
#include<math.h>
typedef struct camel
{
	float radius,height,length,weight;
} Camel;
int input_n();
void input_details(int n, Camel c[n], float *truck_weight);
void find_camel_weight(int n, Camel c[n]);
float compute_total_weight(int n, Camel c[n], float truck_weight);
void output(float total_weight);
int main()
{
	int size=input_n();
	float truck_weight,total_weight;
	Camel array[size];
	input_details(size,array,&truck_weight);
	find_camel_weight(size,array);
	total_weight=compute_total_weight(size,array,truck_weight);
	output(total_weight);
	return 0;
}
int input_n()
{
	int n;
	printf("Enter the Number of Camels\n");
	scanf("%d",&n);
	return n;
}
void input_details(int n, Camel c[n], float *truck_weight)
{
	for (int i=0;i<n;i++)
	{
		printf("For Camel %d, Enter the Stomach Radius, Height and Length\n",i+1);
		scanf("%f%f%f",&c[i].radius,&c[i].height,&c[i].length);
	}
	printf("Enter the Weight of the Truck carrying the Camels\n");
	scanf("%f",truck_weight);
}
void find_camel_weight(int n, Camel c[n])
{
	float pi=3.1415;
	for (int i=0;i<n;i++)
	{
		c[i].weight = pi * pow(c[i].radius,3) * sqrt(c[i].height * c[i].length);
	}
}
float compute_total_weight(int n, Camel c[n], float truck_weight)
{
	float camel_weight=0;
	for (int i=0;i<n;i++)
	{
		camel_weight = camel_weight + c[i].weight;
	}
	return (truck_weight+camel_weight);
}
void output(float total_weight)
{
	printf("The Total Weight of the Truck is %f\n",total_weight);
}
