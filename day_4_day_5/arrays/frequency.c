// 2. Find the frequesvy of an element of user choice in an araay of size N which is also given user (array is of type int)

#include <stdio.h>
#include <stdlib.h>


int Frequency(int arr[],int number,int num_to_find){

    int count =0;
    for( int i=0;i<number ; i++){

        if(arr[i]== num_to_find){
            count = count+1;
            }
    
    }

    return count;
}


int main(){
    int* array;
    int number,number_to_find;
    int count = 0 ; 


    puts("enter the number of elements : ");
    scanf("%d",&number);



    array= (int*)calloc(number,sizeof(int)); // memory allocation using calloc
    
    if(array == NULL){

        printf("Memory allocation is failed");
         exit(0);
        }

    for(int i=0;i<number;i++){ //enter the values into the array 
        printf("enter %d number: ", i+1);
        scanf("%d",&array[i]);
    }


    puts("enter the number which you find the frequency : ");
    scanf("%d",&number_to_find);

    printf("The %d has come %d times in the array",number_to_find,Frequency(array,number,number_to_find));

    free(array);
    return 0;



}