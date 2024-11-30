// I/o functions.

// I/O Functions:
// library: stdio.h
// .h file is header file
// All header files will have only function declarations (prototypes)
// Their respective .c files will have the definitions (implementations)
// Prototype of a function will have 3 things. Return type, function name and the argument list.

// C is a procedural programming language (PPL)
// Thus for everything and anything, we have to do/solve it in terms of functions.
// PPL follows Divide and Conquer Technique
// Given a big problem, we divide it into N number of sub problems which are Atomic in nature and we solve each of these sub problems using one function.
// Synonyms of for Function: methods, procedure, behaviour.

// C is also Modular language.
// That is, related code or functions are grouped
// For example, all string handling functions are put into string.h
// All mathematical functions are put into math.h
// All I/P functions are put into stdio.h and so on
// Like wise we too (programmers) group the related functions into a files.

// I/P Functions:

// Note:
// stdin refers to standard input device
// stdout refers to standard o/p device
// stderr refers to standard error device usually stdout itself

// getc(): used to read one character from stdin or from file
// int getc(FILE *stream); // Prototype
// char ch = getc(stdin);  // Example

// putc(): used to write one character to the stdout or to file
// int putc(char, FILE*);
// putc(ch, stdout);

// gets(): used to read a string (space is also part of the i/p)

// puts(): used to write a string
// printf(): used to write a formatted string
// scanf(): used to read formatted string
// sprintf(): used to read a string from memory format it and store it back in memory (some other variable or same variable)
// sscanf(): Similar to sprintf()
// fprintf(): Used to write formatted string to file
// fscanf(): used to read formatter string from file