#!/bin/bash
gcc -c *.c
ar rcs liball.a *.o
/* could decide to add - Wall -Wesxtra -Werroe -pedantic as errors
*/
