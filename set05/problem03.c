#include<stdio.h>
#include<math.h>
typedef struct camel
{
	float radius,height,length,weight;
} Camel;
Camel input();
void find_weight(Camel *c);
void output(Camel c);
int main()
{
	Camel x;
	x=input();
	find_weight(&x);
	output(x);
	return 0;
}
Camel input()
{
	Camel c;
	printf("Enter the Stomach Radius, Height and Length of the Camel\n");
	scanf("%f%f%f",&c.radius,&c.height,&c.length);
	return c;
}
void find_weight(Camel *c)
{
	float pi=3.1415;
	c->weight = pi * pow(c->radius,3) * sqrt(c->height*c->length);
}
void output(Camel c)
{
	printf("The Weight of the Camel with Stomach Radius %.2f, Height %.2f and Length %.2f is %.2f\n",c.radius,c.height,c.length,c.weight);
}
