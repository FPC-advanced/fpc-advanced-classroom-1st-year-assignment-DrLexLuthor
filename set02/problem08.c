#include<stdio.h>
typedef struct _triangle
{
        float base,height,area;
} Triangle;
int input_array_size();
Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);
int main()
{
        int size;
            size=input_array_size();
                Triangle array[size];
                    input_n_triangles(size,array);
                        find_n_areas(size,array);
                            Triangle smallest;
                                smallest=find_smallest_triangle(size,array);
                                    output(size,array,smallest);
                                        return 0;
}
int input_array_size()
{
        int n;
            printf("Enter the Size of the Array\n");
                scanf("%d",&n);
                    return n;
}
Triangle input_triangle()
{
        Triangle t;
            printf("Enter the Base and Height of the Triangle\n");
                scanf("%f%f",&t.base,&t.height);
                    return t;
}
void input_n_triangles(int n, Triangle t[n])
{
        for (int i=0;i<n;i++)
            {
                        t[i]=input_triangle();
            }
}
void find_area(Triangle *t)
{
        t->area = 0.5 * t->base * t->height;
        }
        void find_n_areas(int n, Triangle t[n])
        {
                for (int i=0;i<n;i++)
                    {
                                find_area(&t[i]);
                    }
        }
        Triangle find_smallest_triangle(int n, Triangle t[n])
        {
                Triangle small;
                    small.base=t[0].base;
                        small.height=t[0].height;
                            small.area=t[0].area;
                                for (int i=1;i<n;i++)
                                    {
                                                if (t[i].area<small.area)
                                                        {
                                                                        small.area=t[i].area;
                                                                        small.base=t[i].base;
                                                                        small.height=t[i].height;
                                                        }
                                    }
                                        return small;
        }
        void output(int n, Triangle t[n], Triangle smallest)
        {
                int i=0;
                    printf("The Smallest of the Triangles with (Base,Height) - ");
                        while (i<n-1)
                            {
                              printf("(%.2f,%.2f), ",t[i].base,t[i].height);
                                    i++;
                            }
                            printf("(%.2f,%.2f) is the Triangle with Base %.2f and Height %.2f and Area %.2f\n",t[i].base,t[i].height,smallest.base,smallest.height,smallest.area);
        }

      