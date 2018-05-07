/*
 *
 * input.h
 *
 * Baltasar Dinis 89416
 * IAED project
 *
 * header file for input.c
 *
 * defines input functions, to parse commands
 *
 * all functions are booleans, returning fasle on incorrect input
 * all functions flush the input string to after the segment which was parsed
 */

#ifndef INPUT_H
#define INPUT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <limits.h>

/* get a unsigned long */
bool get_ulong(char **str, unsigned long *u);

/* get a list of unsigned longs:
 * returns the list, the number of elements and the allocd memory*/
bool get_ulong_list(char **str, unsigned long **list, size_t *n_elems);

/* get a line */
char *get_line();

/* get a string */
bool get_str(char **str, char **out_str);

/* get a string delimited by quotes*/
bool get_quoted_str(char **str, char **out_str);

/* check if a string is empty */
bool empty_str(char *str);
#endif /* !INPUT_H */