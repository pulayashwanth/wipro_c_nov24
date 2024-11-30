
// We know that Array is a DS where we biond data. And, the data must be of the same DT in the array.

// How ever in real life we must have work with data which are properties of the entity from the specific domain.

// For example, from the banking domain, the entity Account as following properties:
// acc_num
// acc_holder_name
// balance
// type
// phone_num

// Now, let us look aat the DT of these properties
// acc_num				unsigned int
// acc_holder_name		char[64]
// balance				float
// type				char[32]
// phone_num			unsigned long long int

// We observe that the DT of the properties are different or their sizes are different.
// But all these properties belong to the same object.
// Hence we must have to bind them (storing them together)

// But we cannot use an array to do this.

// Thus, we have a new feature of the language:
// structure

// In structure we can bind the data either of differnt types or different sizes.
// struct is the keyword to defined a structure.

// struct Account {
// 	unsigned int acc_num
// 	char acc_holder_name[32];
// 	float balance;
// 	char type[16];
// 	unsigned long long int phone_num;
// };

// The above statements together are called structure definition
// Note that, there is no memory allocation for the above definition.
// *** The definition is the information being passed by the programmer to the compiler.
// The compiler makes Book Keeping about the structure (Stores information about the structure)
// Thus structure definition is nothing but Meta Data of the structure.