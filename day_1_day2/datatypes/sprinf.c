// so we can use sprintf() to convert int, float s to string 


#include <stdio.h>

int main(){

 char string[]={};

  printf(" print f statement : Hello  %d %.2f\n", 2, 10.5); // printf generally prints the values correponding to the format specifer in the output .

  sprintf(string,"Hello %d %f",2,10.5); // sprint f will read and add it t0 the string.


  // if we look at closely here string that is 2 and float 10.5 has been converted in to string 


 

  printf("%s",string);

}


// persuppose if you need to convert int to string 

// sprintf(string,"%d",int);

// sprintf(string,"%f",float);

// sprintf(string,"%lf",double );