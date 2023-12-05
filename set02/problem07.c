#include<stdio.h>
typedef struct _triangle
{
        float base,height,area;
} Triangle;
Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);
int main()
{
        Triangle t;
            t=input_triangle();
                find_area(&t);
                    output(t);
                        return 0;
}
Triangle input_triangle()
{
        Triangle t;
            printf("Enter the Base and Height of the Triangle\n");
                scanf("%f%f",&t.base,&t.height);
                    return t;
}
void find_area(Triangle *t)
{
        t->area = 0.5 * t->base * t->height;
}
void output(Triangle t)
{
    printf("The Area of the Triangle with Base %.2f and Height %.2f is %.2f\n",t.base,t.height,t.area);
}

