### 0. `create_array.c`

- **Description**: This function creates an array of characters, initializing each element of the array with a specific character provided as a parameter.
- **Function Prototype**: `char *create_array(unsigned int size, char c);`

### 1. `strdup.c`

- **Description**: This function returns a pointer to a newly allocated space in memory, containing a copy of the string passed as a parameter.
- **Function Prototype**: `char *_strdup(const char *str);`

### 2. `str_concat.c`

- **Description**: This function concatenates two strings by allocating enough memory to hold both strings and their null-terminator.
- **Function Prototype**: `char *str_concat(char *s1, char *s2);`

### 3. `alloc_grid.c`

- **Description**: This function creates a 2-dimensional array of integers. It allocates memory for the array and initializes all elements to `0`.
- **Function Prototype**: `int **alloc_grid(int width, int height);`

### 4. `free_grid.c`

- **Description**: This function frees a 2-dimensional grid of integers previously created by the `alloc_grid` function.
- **Function Prototype**: `void free_grid(int **grid, int height);`