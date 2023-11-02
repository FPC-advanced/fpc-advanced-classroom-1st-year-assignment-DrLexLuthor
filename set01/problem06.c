#include<stdio.h>
int input(int *a, int *b, int *c);
void compare(int a, int b, int c,int g, int *largest);
void output(int a, int b, int c, int largest);
int input(int *a,int *b ,int *c){
   
    printf("enter a number\n");
    scanf("%d%d%d",a,b,c);
   
}

void compare(int a, int b, int c,int g, int *largest){

 
 if(a>b&&a>c)
    {*largest=a;g=0;}
   else if(b>a&&b>c){
        *largest =b;g=0;
    }
  else if(c>a&&c>b){
        *largest=c;g=0;
    }
    else{
   g=1;
       }
    }

void output(int ,int largest){
    if(r!=1){
        printf("the largest no %d",lg);
    }else{
        printf("thy are equal");
    }
}

int main(){
    int a,b,c,lg,r;
    printf("enter 3 numbers");
  inp(&a,&b,&c);
 check(a,b,c,&r,&lg);
 out(lg,r);
    return 0;
    }
