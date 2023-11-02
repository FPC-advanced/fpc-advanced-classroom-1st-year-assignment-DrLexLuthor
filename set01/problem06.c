#include<stdio.h>
int input(int *a, int *b, int *c);
void compare(int a, int b, int c,int *g, int *largest);
void output(int g,int largest);
int input(int *a,int *b ,int *c){
   
    printf("enter a number\n");
    scanf("%d%d%d",a,b,c);
   
}

void compare(int a, int b, int c,int *g, int *largest){

 
 if(a>b&&a>c)
    {*largest=a;*g=0;}
   else if(b>a&&b>c){
        *largest=b;*g=0;
    }
  else if(c>a&&c>b){
        *largest=c;*g=0;
    }
    else{
   *g=1;
       }
    }

void output(int g,int largest){
    if(g!=1){
        printf("the largest number %d",largest);
    }else{
        printf("they are equal");
    }
}

int main(){
    int a,b,c,largest,g;
    printf("enter 3 numbers");
  input(&a,&b,&c);
 compare(a,b,c,&g,&largest);
 output(largest,g);
    return 0;
    }
