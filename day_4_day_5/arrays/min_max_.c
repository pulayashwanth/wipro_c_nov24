// Find the smallest and biggest elements of the array of size N which is given by user (array is of type double)

#include <stdio.h>
#include <stdlib.h>


void FindMINMax(double arr[],int number, double* min, double*max){


  *min =arr[0];
  *max=arr[0];

   for(int i=0; i<number; i++){


    if(arr[i]< *min)
      *min=arr[i];

   if(arr[i] > *max)
      *max = arr[i];

   
      } 

}


int main(){

double* array;
double min,max;
int number;

puts("enter the number of elements :");
scanf("%d",&number);

array = (double*)malloc(number*sizeof(double));

if(array== NULL){
    printf("memeory allocation failed ");
    exit(0);
}

for(int i=0;i<number;i++){  // entered the elements in  the array 
    
    printf("Enter %d number :",i+1);
    scanf("%lf",&array[i]);
}

FindMINMax(array,number,&min,&max);

printf("The minimum number is %lf\n", min);
printf("The maximum number is %lf\n", max);

free(array);
return 0 ;


  


}
