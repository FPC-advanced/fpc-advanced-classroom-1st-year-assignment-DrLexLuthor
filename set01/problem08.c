#include<Stdio.h>
int input_array_size();
void input_array(int size, int a[size]);
int sum_n_array(int add, int a[add]);
void output(int sum);

int input_array_size(){

int size;

printf("type the siz of the array\n");

scanf("%d",&size);

return size;

}

void input_array(int size, int a[size]){

    printf("enter the numbers u want to be in the arrat\n (max number of elemts is %d)\n",size);

    for(int i=0; i<size;i++){

    scanf("%d",&a[i]);
    }

   
}
int sum_n_array(int add, int a[add]){

    int sum=0;

    for (int i=0; i<add;i++){


        sum +=a[add];
    }

return sum;
     
}

void output(int sum){

printf("the sum of the numbers are %d\n",sum);

}
int main() {
    int n, sum;

    n = input_array_size();

    int array[n];

    input_array(n, array);

    sum = sum_n_array(n, array);

    output(sum);

    return 0;
}




