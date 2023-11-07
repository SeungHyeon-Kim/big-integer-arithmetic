#ifndef ARRAY_H
#define ARRAY_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
// #include "config.h"

typedef unsigned int word;
typedef unsigned char byte;
#define WORD_BITS (sizeof(word)*8)
#define WORD_BYTES (sizeof(word))

void array_init(word *a, const size_t wordlen);
void array_copy(word *dst, const word *src, const size_t wordlen);
void array_show_hex(const word *a, const size_t wordlen);
void array_rand(word *dst, const size_t wordlen);
void array_new_rand(word **const a, const size_t wordlen);

#endif