#include<stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int input_number(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    return n;
    
}
int is_composite(int n){

for (int i=2;i*i<=n;i++)
{
    if(n%i==0)
{
    return 1;
}
else
{
    return 0;
}

}
}

void output(int n, int result){
  printf("%d is ",n);
  if (result==1)

{
    printf("composit\n");

}

else{

    printf("not composit\n");


}
}
int main(){
    int n,res;
    n = input_number();

    res = is_composite(n);

    output(n,res);
    
    return 0;
}