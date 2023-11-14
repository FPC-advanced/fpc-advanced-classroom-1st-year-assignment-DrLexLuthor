#include <stdio.h>
#include<string.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);



void input_two_strings(char *string1, char *string2){

printf("enter the first string");
fgets(string1,100,stdin);

printf("enter the second string");
fgets(string2,100,stdin);


}

int stringcompare(char *string1, char *string2){

int i = 0;

    while (string1[i] != '\0' && string2[i] != '\0') {
        if (string1[i] != string2[i]) {
            
            return string1[i] - string2[i];
        }
        i++;
    }

    return strlen(string1) - strlen(string2);


}

void output(char *string1, char *string2, int result) {
    if (result == 0) {


        printf("the strings are equal:\n%s%s", string1, string2);

    } else if (result < 0) {

        printf("the first string is less than the second:\n%s%s", string1, string2);

    } else {



        printf("the first string is greater than the second:\n%s%s", string1, string2);
    }
}

int main() {
    char str1[100], str2[100];
    int result;

    input_two_strings(str1, str2);

    result = stringcompare(str1, str2);



    output(str1, str2, result);










    return 0;
}
