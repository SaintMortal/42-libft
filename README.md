# 42 - Libft

<p align="center">
  <img src="https://img.shields.io/badge/Status-Finished-success?style=for-the-badge&logo=none" alt="Status">
  <img src="https://img.shields.io/badge/Grade-100%2F100-brightgreen?style=for-the-badge&logo=42" alt="Grade">
  <img src="https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c" alt="Language">
</p>

<p align="center">
  <b>The very first project at 42: rewriting a foundational subset of the standard C library, along with additional helpful utilities.</b>
</p>

---

## 📖 About

**Libft** is an individual project at 42 that challenges students to recreate standard C library functions (`<string.h>`, `<stdlib.h>`, etc.) from scratch, alongside a collection of other useful functions that can be used as a solid foundation for future 42 C projects. 

This project teaches you how the C standard library works under the hood, how to manage memory efficiently, and how to structure and document your own reusable C library (`.a` static library).

---

## 🛠️ Functions Included

### 1. Libc Functions
*Reimplementations of standard C library functions:*
* **Memory:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memccpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`, `ft_strdup`
* **Strings:** `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strlcpy`, `ft_strlcat`, `ft_strnstr`
* **Conversions:** `ft_atoi`, `ft_itoa`
* **Character Checks:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`

### 2. Additional Functions
*Custom utility functions added for 42 projects:*
* `ft_substr` — Extracts a substring from a string.
* `ft_strjoin` — Concatenates two strings into a new string.
* `ft_strtrim` — Trims the specified characters from the beginning and end of a string.
* `ft_split` — Splits a string using a character as a delimiter into an array of strings.
* `ft_strmi` / `ft_strmapi` — Applies a function to each character of a string.
* `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` — Output functions to a given file descriptor.

### 3. Bonus Functions (Linked Lists)
*Data structure utilities for singly linked lists:*
* `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`
* `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

---

## 🚀 Getting Started

### Prerequisites
You need a C compiler (`gcc` or `clang`) and `make` installed on your system.

### Installation

1. **Clone the repository:**
   ```bash
   git clone [https://github.com/SaintMortal/42-libft.git](https://github.com/SaintMortal/42-libft.git)
   cd 42-libft
