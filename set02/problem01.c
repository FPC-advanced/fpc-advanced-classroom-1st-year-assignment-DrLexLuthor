#include <stdio.h>

void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float area);

void input(float *base, float *height){

printf("type the base of the triangal \n");
scanf("%f",base);

printf("enter the height of the triangal\n");
scanf("%f",height);

}

void find_area(float base , float height, float *area){

*area=0.5*base*height;

}
void output(float area){

printf("area=%.2f\n",area);

}

int main(){

float base, height, area;


input(&base,&height);

find_area(base,height,&area);

output(area);





    return 0;
}
