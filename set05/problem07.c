#include<stdio.h>
void input(char *name);
int has_nice_name(char *name);
void output(int res);
int main()
{
	char name[100];
	input(name);
	int res=has_nice_name(name);
	output(res);
	return 0;
}
void input(char *name)
{
	printf("Enter the Name of the Camel\n");
	scanf("%s",name);
}
int has_nice_name(char *name)
{
	int vowel_count=0,cons_count=0;
	for (int i=0;name[i]!='\0';i++)
	{
		if ( (name[i]=='a') || (name[i]=='A') || (name[i]=='e') || (name[i]=='E') || (name[i]=='i') || (name[i]=='I') || (name[i]=='o') || (name[i]=='O') || (name[i]=='u') || (name[i]=='U') )
		{
			vowel_count = vowel_count + 1;
		}
		else
		{
			cons_count = cons_count + 1;
		}
	}
	if ( (vowel_count>=2) && (cons_count>=2) )
	{
		return 1;
	}
}
void output(int res)
{
	if (res==1)
	{
		printf("The Camel has a Nice Name\n");
	}
	else
	{
		printf("The Camel does not have a Nice Name\n");
	}
}
