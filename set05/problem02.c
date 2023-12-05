#include<stdio.h>
#include<math.h>
void input(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);
int main()
{
	float radius,height,length,weight;
	input(&radius,&height,&length);
	weight=find_weight(radius,height,length);
	output(radius,height,length,weight);
	return 0;
}
void input(float *radius, float *height, float *length)
{
	printf("Enter the Stomach Radius, Height and Length of the Camel\n");
	scanf("%f%f%f",radius,height,length);
}
float find_weight(float radius, float height, float length)
{
	float weight,pi=3.1415;
	weight=pi * pow(radius,3) * sqrt(height*length);
	return weight;
}
void output(float radius, float height, float length, float weight)
{
	printf("The Weight of the Camel with Stomach Radius %.2f, Height %.2f and Length %.2f is %.2f\n",radius,height,length,weight);
}
