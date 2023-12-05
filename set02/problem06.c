#include<stdio.h>
void input_string(char *str);
void str_reverse(char *str, char *rev_str);
void output(char *str, char *rev_str);
int main()
{
        char string[100],reverse_string[100];
            input_string(string);
                str_reverse(string,reverse_string);
                    output(string,reverse_string);
                        return 0;
}
void input_string(char *str)
{
        printf("Enter the String\n");
            scanf("%s",str);
}
void str_reverse(char *str, char *rev_str)
{
        int i;
            for (i=0;str[i]!='\0';i++);
                for (int j=0;str[j]!='\0';j++)
                    {
                                rev_str[j]=str[i-1-j];
                    }
                        rev_str[i]='\0';
}
void output(char *str, char *rev_str)
{
        printf("Reverse String of %s is %s\n",str,rev_str);
}

