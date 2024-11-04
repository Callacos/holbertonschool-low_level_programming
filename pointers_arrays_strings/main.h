#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>

char *_memcpy(char *dest, char *src, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
char *leet(char *);
char *cap_string(char *);
char *string_toupper(char *);
void reverse_array(int *a, int n);
int _strcmp(char *s1, char *s2);
void reset_to_98(int *n);
char *_strncpy(char *dest, char *src, int n);
char *_strncat(char *dest, char *src, int n);
int _atoi(char *s);
char *_strcpy(char *dest, char *src);
void print_array(int *a, int n);
void puts_half(char *str);
void puts2(char *str);
void rev_string(char *s);
void print_rev(char *s);
int _putchar(char c);
void _puts(char *str);
int _strlen(char *s);
void reset_to_98(int *n);
void swap_int(int *a, int *b);

#endif
