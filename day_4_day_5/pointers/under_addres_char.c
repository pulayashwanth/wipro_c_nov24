#include <stdio.h>
int main()
{
    double d = 2.22;
    char ch = 'A';
    printf("%u  %u  %u  %u \n", &d - 1, &d, &d + 1, &d + 2);
    printf("%u  %u  %u  %u \n", &ch - 1, &ch, &ch + 1, &ch + 2);
}

// here d is an double which has 8 bytes  

// so &d will return  the address of the d for example 6422304

// &d+1 should return next adress which is 8 bytes away so it should return 6422312 