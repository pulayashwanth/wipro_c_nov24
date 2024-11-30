

// if we use the call by value we will not change the actual value we will look on example using a swap of the two numbers 



# include <stdio.h>


void swapv(int a , int b){

  int t ; 
 printf("before  swaping the numbers a = %d , b=%d  \n s",a,b );
  t=a;
  a=b;
  b=t;

  printf("after swaping the numbers a = %d , b=%d \n",a,b );


}

int main(){

    int x=20 , y= 10 ; // here are the actual values we are taken or the arguments which we have given to the function 
    swapv(x,y);  // this function call we have given the arguments x and y to swap this swap will not have any effect on x and y 
    printf("x=%d,y=%d", x,y); // irrespective of the swap the values will not change it will print same x =20 and y = 10 
    }


    // output : 

//     before  swaping the numbers a = 20 , b=10
//  safter swaping the numbers a = 10 , b=20
// x=20,y=10