# # C - Singly linked lists

This project explores simple linked lists in C, a dynamic data structure for storing and manipulating elements sequentially using pointers. Unlike arrays, linked lists provide efficient memory management and make it easier to add or remove elements.


# Command compilation

```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_node.c 0-print_list.c -o c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-list_len.c -o b
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_node_end.c 0-print_list.c -o d
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o e
```

# Requirements

-   All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
-   All your files should end with a new line
-   A `README.md` file, at the root of the folder of the project is mandatory
-   Your code should use the `Betty` style.
-   You are not allowed to use global variables
-   No more than 5 functions per file
-   The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
-   You are allowed to use [_putchar](https://github.com/hs-hq/_putchar.c/blob/master/_putchar.c "_putchar")
-   You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
-   In the following examples, the `main.c` files are shown as examples. 
-   The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `lists.h`
-   Don’t forget to push your header file
-   All your header files should be include guarded


# Testing
Check the memory leaks i used valgrind
to see the output I use ./ and the character of the file that I compiled





# Authors

Cratere Esteban 
Github: https://github.com/Callacos
