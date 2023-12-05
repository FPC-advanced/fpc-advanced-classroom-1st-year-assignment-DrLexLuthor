#include<stdio.h>
#include<math.h>
void input_triangle(float *x1, float *x2, float *x3, float *y1, float *y2, float *y3);
int is_triangle(float x1, float x2, float x3, float y1, float y2, float y3);
void output(float x1, float x2, float x3, float y1, float y2, float y3, int result);
int main()
{
    float x1,x2,x3,y1,y2,y3;
    int result;
    input_triangle(&x1,&x2,&x3,&y1,&y2,&y3);
    result=is_triangle(x1,x2,x3,y1,y2,y3);
    output(x1,x2,x3,y1,y2,y3,result);
    return 0;
}
void input_triangle(float *x1, float *x2, float *x3, float *y1, float *y2, float *y3)
{
    printf("Enter (x1,y1) Co-Ordinates\n");
     scanf("%f%f",x1,y1);
     printf("Enter (x2,y2) Co-Ordinates\n");
      scanf("%f%f",x2,y2);
      printf("Enter (x3,y3) Co-Ordinates\n");
       scanf("%f%f",x3,y3);
}
int is_triangle(float x1, float x2, float x3, float y1, float y2, float y3)
{
float area = 0.5 * fabs( x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2) );
if (area==0)
{
    return 1;
}
else{
     return 0;
}
}
void output(float x1, float x2, float x3, float y1, float y2, float y3, int result)
{
 printf("The Points (%.2f,%.2f), (%.2f,%.2f) and (%.2f,%.2f) ",x1,y1,x2,y2,x3,y3);
  if (result==1)
  {
    printf("do not form a Triangle\n"); 
  }
  else{
    printf("form a Triangle\n");
  }
}

