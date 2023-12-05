#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int find_largest_index(int n, int a[n]);
void output(int result);
int main()
{
    int size,result;
    size=input_array_size();
    int array[size];
    input_array(size,array);
    result=find_largest_index(size,array);
    output(result);
    return 0;
}
int input_array_size()
{
    int n;
    printf("Enter Size of Array\n");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n])
{
    for (int i=0;i<n;i++)
    {
        printf("Enter Number-%d\n",i+1);
        scanf("%d",&a[i]);
    }
}
int find_largest_index(int n, int a[n])

{
    if (n <= 0)
    {
        return -1; 
    }
    int index=0,large=a[0];
    for (int i=1;i<n;i++)
    {
        if (a[i]>=large)
        {
               large=a[i];
                index=i;
        }
    }
    return index;
}
void output(int result)
{
    printf("The Index of the Largest Number in the Array is %d\n",result);
}

