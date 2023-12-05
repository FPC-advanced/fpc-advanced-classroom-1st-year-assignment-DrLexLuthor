#include<stdio.h>
void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, int mood);
int main()
{
	float radius,height,length;
	input_camel_details(&radius,&height,&length);
	int mood=find_mood(radius,height,length);
	output(radius,height,length,mood);
	return 0;
}
void input_camel_details(float *radius, float *height, float *length)
{
	printf("Enter the Stomach Radius, Height and Length of the Camel\n");
	scanf("%f%f%f",radius,height,length);
}
int find_mood(float radius, float height, float length)
{
	if ( (radius<height) && (radius<length) )
	{
		return 1;
	}
	else if ( (height<radius) && (height<length) )
	{
		return 2;
	}
	else if ( (length<radius) && (length<height) )
	{
		return 3;
	}
}
void output(float radius, float height, float length, int mood)
{
	printf("The Camel with Stomach Radius %.2f, Height %.2f and Length %.2f is ",radius,height,length);
	if (mood==1)
	{
		printf("Sick\n");
	}
	else if (mood==2)
	{
		printf("Happy\n");
  }
  else if (mood==3)
  {
  	printf("Tense\n");
  }
}
