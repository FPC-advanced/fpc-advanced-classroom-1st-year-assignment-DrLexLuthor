#include<stdio.h>
#include<math.h>
typedef struct point
{
    float x,y;
} Point;
typedef struct side
{
    Point P;
    float length;
} Side;
typedef struct polygon
{
    int n;
    Side array[100];
    float perimeter;
} Polygon;
int input_n();
Point input_point();
void initialize_polygon(Polygon *p);
float find_distance(Point a, Point b);
void find_perimeter(Polygon *p);
void output(Polygon p);
int main()
{
    Polygon p;
    p.n=input_n();
    initialize_polygon(&p);
    find_perimeter(&p);
    output(p);
    return 0;
}
int input_n()
{
    int n;
    printf("Enter the Number of Sides of the Polygon\n");
    scanf("%d",&n);
    return n;
}
Point input_point()
{
    Point p;
    printf("Enter the (x,y) Co-Ordinate\n");
    scanf("%f%f",&p.x,&p.y);
    return p;
}
void initialize_polygon(Polygon *p)
{
    printf("A %d Sided Polygon has %d Points/Vertices\n",p->n,p->n);
    for (int i=0;i<p->n;i++)
    {
            printf("For Point-%d, ",i+1);
                p->array[i].P=input_point();
    }
}
float find_distance(Point a, Point b)
{
      float distance;
      distance=sqrt( (pow((b.y-a.y),2)) + (pow((b.x-a.x),2)));
        return distance;
}
void find_perimeter(Polygon *p)
{
    p->perimeter=0;
    int i=0;
    while (i<(p->n)-1)
    {
        p->perimeter=p->perimeter+find_distance(p->array[i].P,p->array[i+1].P);
        i++;
    }
    p->perimeter=p->perimeter+find_distance(p->array[i].P,p->array[0].P);
}
void output(Polygon p)
{
    printf("The Perimeter of the Polygon is %.2f\n",p.perimeter);
}
