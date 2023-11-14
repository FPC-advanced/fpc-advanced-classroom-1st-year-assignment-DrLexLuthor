#include<stdio.h>
#include<math.h>
float input();
float square_root(float sqr);
void output(float n, float sqroot);

float input(){

    float sqr;
    printf("type the nuber u want to find the sqrt for\n");
scanf("%f",&sqr);


return sqr;


}


float square_root(float sqr){


return sqrt(sqr);

}

void output(float sqr, float sqroot){

printf("the sqr of %f is %.2f",sqr,sqroot);


}

int main(){


float num,res;

num=input();

res=square_root(num);

output(num,res);


    return 0;
}