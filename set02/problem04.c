#include <stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);


int input_array_size(){


int n;
printf("enter the size of the array ");

scanf("\t%d",&n);

return n;

}

void input_array(int n, int a[n]){


    for (int i=0;i<n;i++){

        printf("enter elements for  for the array ",i+1);
        scanf("%d",&a[i]);
    }
}

int sum_composite_numbers(int n, int a[n]){
    int sum=0;
    for (int i=0; i<n; i++){
        int is_prime = 1;
       if (a[i] <= 1){
            is_prime = 0;
      }
     else{
        for(int j=2; j*j<=a[i]; j++){
                if (a[i]%j==0){
               is_prime = 0;
                    break;
               }
         }
        }
        if (!is_prime){
           sum += a[i];
        }
    }
    return sum;
}
void output(int sum){


    printf("the sum of the composit number is the array is %d\n",sum);
}


int main(){


int size, sum ;


size=input_array_size();


int array[size];

input_array(size,array);
sum=sum_composite_numbers(size,array);

output(sum);




    return 0;
}


