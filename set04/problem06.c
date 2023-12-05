#include<stdio.h>
#include<string.h>
void input_string(char *str);
int count_words(char *str);
void output(char *str, int count);
int main()
{
    int count;
    char string[100];
    input_string(string);
    count=count_words(string);
    output(string,count);
    return 0;
}
void input_string(char *str)
{
    printf("Enter the String\n");
    scanf("%[^\n]s",str);
}
int count_words(char *str)
{
    char copy_str[100];
    int i,count=0;
    for (i=0;str[i]!='\0';i++)
    {
        copy_str[i]=str[i];
    }
    copy_str[i]='\0';
    char *token;
    token=strtok(copy_str," ");
    while (token!=NULL)
    {
        count=count+1;
        token=strtok(NULL," ");
    }
    return count;
}
void output(char *str, int count)
{
    char *tok;
    tok=strtok(str," ");
    printf("The Number of Words Present in ");
    while (tok!=NULL)
    {
        printf("%s ",tok);
        tok=strtok(NULL," ");
    }
    printf("is %d\n",count);
}

