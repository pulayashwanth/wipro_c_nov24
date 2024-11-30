// if we want the value of the paticular arguments in the  program to be changed we will use call by referance


# include <stdio.h>


void swapv(int* a , int* b){ // here we are taking the address as an input 

  int t ; 
 printf("before  swaping the numbers a = %d , b=%d  \n s",*a,*b );
  t=*a;
  *a=*b;
  *b= t;

  printf("after swaping the numbers a = %d , b=%d \n",*a,*b );


}

int main(){

    int x=20 , y= 10 ;  
    swapv(&x,&y);   
    printf("x=%d,y=%d", x,y); 
    }


// output: 

// before  swaping the numbers a = 20 , b=10
//  safter swaping the numbers a = 10 , b=20
// x=10,y=20