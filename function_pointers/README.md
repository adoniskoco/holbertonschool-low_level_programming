### 0. Print Name
**Filename:** `0-print_name.c`

- **Description:** This file contains a function that prints a name. The function takes a string as a parameter and outputs it to the console.

### 1. Array Iterator
**Filename:** `1-array_iterator.c`

- **Description:** This file contains a function that executes a provided function on each element of an array. It takes an array and a function pointer as input and applies the function to every element of the array.

### 2. Integer Search
**Filename:** `2-int_index.c`

- **Description:** This file contains a function that searches for an integer in an array. The function returns the index of the first element that matches the specified integer, or `-1` if no match is found.

### 3. Main File
**Filename:** `3-main.c`

- **Description:** This file contains only the main function for the program. It is responsible for orchestrating the execution flow of the program, such as calling other functions and handling user input.

### 4. Operation Functions
**Filename:** `3-op_functions.c`

- **Description:** This file contains exactly five functions that define various mathematical operations (addition, subtraction, multiplication, division, and modulus). These functions are used to perform operations on two integers and return the result.

### 5. Operation Selector
**Filename:** `3-get_op_func.c`

- **Description:** This file contains a function that selects the appropriate operation function based on the operator provided by the user. The function returns a pointer to the correct function from `3-op_functions.c` based on user input.

### 6. Header File
**Filename:** `3-calc.h`

- **Description:** This header file contains all the function prototypes and necessary data structures used by the program. It defines the function prototypes for operations in `3-op_functions.c` and the function that selects the operation in `3-get_op_func.c`.

## Summary of Files

- **0-print_name.c**: Function to print a name.
- **1-array_iterator.c**: Function to apply a function to each element of an array.
- **2-int_index.c**: Function to search for an integer in an array.
- **3-main.c**: Contains the `main()` function to drive the program.
- **3-op_functions.c**: Functions that define the operations (add, sub, mul, div, mod).
- **3-get_op_func.c**: Selects the appropriate operation function based on the operator.
- **3-calc.h**: Header file with function prototypes and data structures.