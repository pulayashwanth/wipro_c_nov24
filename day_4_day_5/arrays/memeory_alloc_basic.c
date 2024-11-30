
// memory allocation 


// in some conditions we need to allocate the memory dynamically  so we have 

// malloc()

// calloc()

//free()

// realloc()


// malloc : 

//  The “malloc” or “memory allocation” method in C is used to dynamically allocate a single large block of memory with the specified size.

// It returns a pointer of type void which can be cast into a pointer of any form. It doesn’t Initialize memory at execution time so that it has initialized each block with the default garbage value initially. 


// ptr = (cast-type*) malloc(byte-size)

// ptr = int* mallaoc(number * sizeof(int))

// (data type)* ptr; this hold the abs address of the block created .

// ptr holds the address of the first element 


// calloc : is same as the malloc but it creats the blocks of space not the continus space 

// ptr = (cast-type)calloc(number,Sizeof(datatype))


// free(ptr1); // to free up the space that are created by the malloc and calloc 



// realloc : 

// when we acclocte the memoryusing m alloc or c alloac if tat is njot suffocent we will use the realloc to increase the memory with new size with previous values been not changed,


// ptr = realloc(ptr, newSize);



