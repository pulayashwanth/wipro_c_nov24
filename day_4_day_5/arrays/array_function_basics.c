// When we pass an array to a function:
// main() {
// 	int arr[] = {1, 2, 5, 8, 10};
// 	my_function(arr);
// }

// my_function(int* ptr) { }   // ptr holds address of an int
// my_function(int ptr[]) { }  // ptr holds address of an int array
// my_function(int ptr[5]) { }// ptr holds address of an int array of size 5
// --------------------------------------
// When we pass a 2D array to a function:
// main() {
// 	int arr[][] = { {4, 7, 9}, {1, 2, 5} };
// 	my_function(arr);
// }

// my_function(int** ptr) { }   // ptr here is pointer to a pointer of type int*
// my_function(int* ptr[]) { }  // ptr is a pointer to an array of int pointers
// my_function(int* ptr[5]) { }// ptr is a pointer to an array of size 5, each of which are int pointers
// my_function(int* ptr[2][11]) { }// ptr is a pointer to a 2D array of 2 rows and 11 columns