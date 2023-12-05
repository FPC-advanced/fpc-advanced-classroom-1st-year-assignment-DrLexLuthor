#include<stdio.h>
#include<math.h>
typedef struct point
{
    float x,y;
} Point;
Point input();
void distance(Point a, Point b, float *res);
void output(Point a, Point b, float res);
int main()
{
    Point a,b;
    float result;
    a=input();
    b=input();
    distance(a,b,&result);
    output(a,b,result);
    return 0;
}
Point input()
{
    Point p;
    printf("Enter (x,y) Coordinate\n");
    scanf("%f%f",&p.x,&p.y);
    return p;
}
void distance(Point a, Point b, float *res)
{
    *res = sqrt( (pow((b.y - a.y),2)) + (pow((b.x - a.x),2)) );
}
void output(Point a, Point b, float res)
{
    printf("The Distance between the Points (%.2f,%.2f) and (%.2f,%.2f) is %.2f\n",a.x,a.y,b.x,b.y,res);
}

