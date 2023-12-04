#include <stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int isscalene);

#include<stdio.h>
int input_side(){
    int s;
    printf("enter a side\n");
    scanf("%d",&s);
    return s;
}
int check_scalene(int a, int b, int c){
  
if ( (a!=b ) && (b!=c)&& (c!=a) )

{
    return 1;
}
    else
{
    return 0;
}
}

void output(int isscalene){
   printf("the triangal with the given sides is ");

   if(isscalene==1)
   {
    printf("scalene\n");
   }
else if (isscalene==0){

    printf("not scalene");
}
}

int main(){
    int a,b,c,res;
    a = input_side();
     b = input_side();
      c = input_side();
   
res =check_scalene(a,b,c);

output(res);

return 0;

}