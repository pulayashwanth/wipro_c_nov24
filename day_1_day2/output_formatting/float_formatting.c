#include <stdio.h>
// Program to do formatting on float number.

int main()
{
    float num = 795.907;
    printf("%f\n", num);     // print num
    printf("%12f\n", num);   // print num, allocate 12 spaces and right allignment
    printf("%-14f\n", num);  // print num, allocate 14 spaces and left allignment
    printf("%014f\n", num);  // print num, allocate 14 spaces and right allignment and fill spaces with zeros
    printf("%.2f\n", num);   // print only 2 digits after decimal point
    printf("%08.1f\n", num); // print num, allocate 8 spaces, print 1 digit after decimal point and fill with zeros
    printf("%-8.1f\n", num); // print num with left allignment, alloctae 8 spaces and 1 digit of precision
    printf("%05.0f\n", num); // print num with no precision and right allignment
}