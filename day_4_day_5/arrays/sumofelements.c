#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum(int arr[],int length){ // to check the sum of elements 
    int sum= 0 ; 
    
    for(int i=0;i<length;i++){
        
        sum = arr[i]+sum;
        }
    return sum;
}


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int number;
    // puts("enter the number: ");
    scanf("%d",&number);
    
   int* array = (int*)malloc(number*sizeof(int)); // allocating the memory 
   
    if(array== NULL){ // checking the memory allocation 
        printf("Memory allocation is failed ");
        return 0;
        }
        
        
    for(int i=0;i<number;i++){ //scanning the values 
        // printf("enter %d element:",i+1);
        scanf("%d",&array[i]);
        }
        
        
        
        printf("%d",sum(array,number));
        
        
        free(array);
        
        
        
   
     
    return 0;
}