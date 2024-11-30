// Function Call Stack:

// WE all know that the computer has CPU. The CPU has processor. The Processor has ALU, Signal unit and Registers.
// Registers are memory units within the processor.
// There are 2 types of registers
// General purpose and Special purpose
// The general purpose registers can be used to store anything.

// However, the Special purpose registers can be used only for specific purpose. Following are the special	purpose registers:

// Accumalator: It is used to store intermediate results
// For example, in x+y+z the values of x and y are brought from memory and are stored in registers.
// The x+y value is then store in accumalator which will be later added to z.

// IR: Instruction register
// It stores address of the current instruction that is getting executed.

// PC: program counter
// It holds address of next instruction to be executed

// FP: Frame pointer
// It holds address of the frame of the function which is currently running

// SP: It holds address of the top frame in the Stack.

// Other than these, we have MAR and MDR also.

// Frame: A frame roughly is the memory allocated to a function. Contents of a frame are:
// local variables (if any)
// function arguments (if any)
// addresses of the called functions (callee) (if any)
// return address (if any)