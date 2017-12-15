# hmalloc
2 different implementations of malloc

Version 1 (hw07) is for homework 7 of Prof. Tuck's CS3650. It uses a singly linked list of free blocks for allocating memory and free memory.
Version 2 uses free lists of fixed-sized chunks of memory (18, 24, 32, 64, ...). It also uses thread-local arenas to optimize for multithreading. This version of malloc beats the system time (stdlib) for the test program (computing the collatz conjecture using dynamic array/singly linked list).

ATTRIBUTION:
The ivec and list programs are written by Prof. Tuck for the purpose of testing the speed of each version of malloc.
