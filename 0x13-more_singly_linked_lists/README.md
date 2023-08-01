# 0x13. C - More Singly Linked Lists

In this project, we will work with singly linked lists in C and implement various functions to manipulate them.

## Learning Objectives

By the end of this project, you should be able to:

- Understand how to use linked lists
- Learn to look for the right source of information without too much help
- Implement various operations on singly linked lists

## Requirements

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free, and exit. Any use of functions like printf, puts, calloc, realloc, etc. is forbidden
- You are allowed to use _putchar
- Your header file should be include guarded

## Tasks

### 0. Print list
Write a function that prints all the elements of a `listint_t` list.

```c
size_t print_listint(const listint_t *h);
```

### 1. List length
Write a function that returns the number of elements in a `listint_t` list.

```c
size_t listint_len(const listint_t *h);
```

### 2. Add node
Write a function that adds a new node at the beginning of a `listint_t` list.

```c
listint_t *add_nodeint(listint_t **head, const int n);
```

### 3. Add node at the end
Write a function that adds a new node at the end of a `listint_t` list.

```c
listint_t *add_nodeint_end(listint_t **head, const int n);
```

### 4. Free list
Write a function that frees a `listint_t` list.

```c
void free_listint(listint_t *head);
```

### 5. Free
Write a function that frees a `listint_t` list.

```c
void free_listint2(listint_t **head);
```

### 6. Pop
Write a function that deletes the head node of a `listint_t` linked list and returns the head node's data (n).

```c
int pop_listint(listint_t **head);
```

### 7. Get node at index
Write a function that returns the nth node of a `listint_t` linked list.

```c
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
```

### 8. Sum list
Write a function that returns the sum of all the data (n) of a `listint_t` linked list.

```c
int sum_listint(listint_t *head);
```

### 9. Insert
Write a function that inserts a new node at a given position.

```c
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
```

### 10. Delete at index
Write a function that deletes the node at index index of a `listint_t` linked list.

```c
int delete_nodeint_at_index(listint_t **head, unsigned int index);
```

## General Information

- Author: Julien Barbier
- Language: C
- Compilation: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- Checker: `./checker`
- Autocorrect: `./autocorrect`

Please note that this is just a brief overview of the project and its tasks. Each task may have additional requirements and specifications that are provided in the task description itself. For further details, please refer to the individual task files.
