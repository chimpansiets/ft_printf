# FT_PRINTF

My own implementation of the libc printf function.

## Getting Started

Run my makefile by typing 'make' in a terminal in this directory. My makefile compiles a static library
called libftprintf.a

## Features

following conversions : % (cspdiouxXf)
following flags       : '#' '0' '-' '+' ' ' 'hh' 'h' 'll' 'l' 'L'

## Authors

* **Sietse Voort** - *Initial work* - [chimpansiets](https://github.com/chimpansiets)

## Bugs

* Trying to use positional arguments with the '$' specifier will get you stuck in an infinite loop :(

## Acknowledgments

* http://www.cplusplus.com/reference/cstdio/printf/
* https://en.wikipedia.org/wiki/Floating-point_arithmetic
