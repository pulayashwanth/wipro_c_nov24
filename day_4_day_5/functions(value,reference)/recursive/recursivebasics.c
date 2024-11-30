// RECURSIVE FUNCTION:
// A function that calls itself
// A function which is both the calling function and the called function

// A function when it calls itself, it repeats.
// For every function call, we know, there is a frame created in the runtime.
// Thus, call to any function in runtime creates/uses extra memory.
// Thus, a recursive call utilizes memory for the frame.

// Aslo, we know that the PC content should be stored in the frame as RA and then the frame is pushed on the Stack and SP is incremented, etc.
// Thus recursive call or a function call need time to do the things implicitly.
// Hence function calls should be avoided.

// Now, w.r.t. recursive functions, there must be some exit to the recursive calls by happening.
// Otherwise, the Call-Stack keeps growing and it will Overflow at some point of time.
// Hence a condition is always necessary in a recursive function to stop the recursive call at some point of time.

// When ever we can solve a problem easily using loop, it is ignorance to use recursion.