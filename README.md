# Libft - Custom C Library Implementation



Libft is an independent implementation of essential C library functions, first project as a student at [Hive Helsinki Coding School](https://www.hive.fi/en/). This project recreates fundamental C functions from scratch, using only three allowed system calls: `malloc`, `free`, and `write`.

## Table of Contents
- [✨ Features](#features)
- [🚀 Getting Started](#getting-started)
- [💡 Usage Examples](#usage-examples)
- [🧪 Testing](#testing)

## ✨ Features

### Core Functionalities
<div style="display: flex; flex-wrap: wrap; gap: 10px; margin: 20px 0;">
  <div style="flex: 1; min-width: 200px; background: #f5f5f5; padding: 15px; border-radius: 8px;">
    <h3>📝 String Manipulation</h3>
    <p>Complete reimplementation of string.h functions (strlen, strdup, strjoin, etc.)</p>
  </div>
  <div style="flex: 1; min-width: 200px; background: #f5f5f5; padding: 15px; border-radius: 8px;">
    <h3>🧠 Memory Management</h3>
    <p>Custom memory functions (calloc, memmove, bzero, etc.)</p>
  </div>
  <div style="flex: 1; min-width: 200px; background: #f5f5f5; padding: 15px; border-radius: 8px;">
    <h3>🔗 Linked Lists</h3>
    <p>Complete linked list implementation (create, add, iterate, clear)</p>
  </div>
</div>

### Function Categories
| Category        | Key Functions                          |
|-----------------|----------------------------------------|
| **Characters**  | isalpha, isdigit, isascii, isprint, isalnum toupper, tolower    |
| **Strings**     | strlen, strlcpy, strnstr, split, strchr, strtrim      |
| **Memory**      | memset, memcmp, memchr, memmove, bzero, calloc       |
| **Lists**       | lstnew, lstadd_front, lstsize, lstmap |
| **File I/O**    | putchar_fd, putendl_fd, putnbr_fd, putstr_fd     |

## 🚀 Getting Started

### Prerequisites
- GCC compiler
- GNU Make
- (Optional) Norminette for 42 school standards

### Installation
```bash
# Clone the repository
git clone https://github.com/DariaLyt/libft.git
cd libft

# Build the library
make

# (Optional) Clean object files
make clean

# (Optional) Clean everything
make fclean
```
## 💡 Usage Examples

### Basic Example
```c
#include "libft.h"

int main(void) {
    char *str = ft_strjoin("Hello ", "World!");
    ft_putendl_fd(str, STDOUT_FILENO);
    free(str);
    return 0;
}
```

### Linked List Example
```c
#include "libft.h"

void print_content(void *content) {
    ft_putendl_fd((char *)content, STDOUT_FILENO);
}

int main(void) {
    t_list *list = NULL;
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("First")));
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("Second")));
    ft_lstiter(list, &print_content);
    ft_lstclear(&list, &free);
    return 0;
}
```

## 🧪 Testing
```bash
# Using Tripouille's tester
git clone https://github.com/Tripouille/libftTester.git
cd libftTester
make m  # Test mandatory part
make b  # Test bonus part
```
<p align="center"> Made with ❤️ at <a href="https://www.hive.fi/en/">Hive Helsinki</a> </p>
