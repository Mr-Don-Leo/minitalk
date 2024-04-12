<br/>
<p align="center">
  <a href="https://github.com/Mr-Don-Leo/42-libft">
    <img src="https://gitlab.com/uploads/-/system/project/avatar/10815567/libft.png" alt="Logo" width="80" height="80">
  </a>

  <p align="center">
    At School 42, Libft is a project where we craft our personalized library of handy C functions.
    <br/>
    <br/>
  </p>
</p>

## Table Of Contents

* [About the Project](#about-the-project)
* [Getting Started](#getting-started)
  * [Installation](#installation)
  * [Usage](#usage)
* [Functions](#little-overview-of-some-functions-and-what-they-do)

## About The Project

This project is all about diving into the world of C programming! We're creating essential functions that act as building blocks for School 42 assignments. These functions mimic standard C functions, giving us a solid foundation. As we move forward, the skills learned here will help us confidently tackle more challenges.

## Getting Started

Here I will explain how to clone the repository and how to use it.

### Installation

1. Clone the repo

```sh
git clone https://github.com/Mr-Don-Leo/42-libft.git
```

### Usage

Firstly, you change the directory into the libft file you closed. Then you run make: 
```sh
cd 42-libft
make
```
Running this command will compile the libft library, generating a libft.a file. After that, you can link this library to your C project files during compilation using gcc or cc.

## Little overview of some functions and what they do

### ft_split 

ft_split takes a string and a character as its parameter, the character being used as a separator. It then separates the string takes whatever is between each character/separator, and stores each new string/word in an array of strings. 

### ft_itoa

ft_itoa converts an integer datatype value to ASCII character datatype. (string)

### ft_atoi

ft_atoi converts ASCII character (digits: 48 -> 57 DEC) to integer datatype values.

### ft_lstnew

ft_lstnew creates a new list element of type t_list, which is declared in libft.h.

### ft_isprint

ft_isprint checks if the character is a printable character, returns true or false. (1 || 0)

### ft_strchr

ft_strchr takes a string as a parameter, as well as a character. Then it finds the first occurrence of the character within the string. 

### ft_strdup

ft_strdup duplicates a string by first allocating sufficient memory for it then copying the string into the allocated memory.
