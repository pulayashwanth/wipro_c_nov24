// float fArray[] = {2.2f, 4.4f, 1.5f, 9.1f, 6.75f};

// print these:

// fArray, fArray+1, fArray-1, fArray+2

// *fArray, *fArray+1, *fArray + *fArray

// &fArray, &fArray+1, &fArray-1, &fArray+2


#include <stdio.h>

int main(){

float fArray[] = {2.2f, 4.4f, 1.5f, 9.1f, 6.75f};// so it has size of 20( 5elem *4 )

printf("fArray:%u fArray+1:%u  fArray+1:%u  fArray-1:%u  fArray+2:%u\n", fArray, fArray+1, fArray-1, fArray+2); // so if we use %u to only name it will give the address of the first element 


printf("*fArray:%.2f   *fArray+1:%.2f  *fArray + *fArray: %.2f\n", *fArray, *fArray+1, *fArray + *fArray);


printf("&fArray: %u   &fArray+1:%u  &fArray-1:%u  &fArray+2:%u\n", &fArray, &fArray+1, &fArray-1, &fArray+2); // so here we use &farray means it will consider the whole array adress so &&fArray+1 will have 20 difference

}