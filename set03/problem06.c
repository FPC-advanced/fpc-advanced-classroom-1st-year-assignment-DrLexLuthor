#include<stdio.h>
void input_string(char *str, char *sub_str);
int sub_str_index(char *str, char *sub_str);
void output(char *str, char *sub_str, int index);
int main()
{
    char string[100],sub_string[100];
    input_string(string,sub_string);
    int index;
    index=sub_str_index(string,sub_string);
    output(string,sub_string,index);
    return 0;
}
void input_string(char *str, char *sub_str)
{
    printf("Enter the Main String\n");  
    scanf("%s",str);
    printf("Enter the Sub-String\n");
    scanf("%s",sub_str);
}
int sub_str_index(char *str, char *sub_str)
{
        int index=-1;
        for (int i=0;str[i]!='\0';i++)
        {
            if (str[i]==sub_str[0])
                {   
                    index=i;
                    for (int j=i;sub_str[j]!='\0';j++)
                    {
                        if (str[j]!=sub_str[j-i])       {
                            index=-1;
                        }
                    }
                     if (index!=-1)
                      {
                        break;
                      }
                }
        }
        return index;
}
void output(char *str, char *sub_str, int index)
{
    if (index==-1)
    {
            printf("The Entered Sub-String not found in the Main String\n");
    }
    else{
            printf("The Index of %s in %s is %d\n",sub_str,str,index);
    }
}