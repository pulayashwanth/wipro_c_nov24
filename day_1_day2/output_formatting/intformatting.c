#include <stdio.h>

int main() {
    int num = 7955;
    printf("%d\n", num);     // print num
    printf("%6d\n", num);    // Allocate 6 character spaces and print num with right allignment
    printf("%-6d\n", num);   // Allocate 6 character spaces and print num with left allignment
    printf("%-6d**\n", num); // Allocate 6 character spaces and print num with left allignment and after that print 2 stars
    printf("%07d\n", num);   // Allocate 6 character spaces and print num with right allignment and in empty spaces fill it with zeroes
    printf("%3d\n", num);    // Allocate 3 character spaces and print num with right allignment [Here formatting is ignored and data is given priority]
}