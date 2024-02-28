#include "enums.h"
#include <stdio.h> 
#ifndef TYPES_H
#define TYPES_H
#endif

typedef struct {
    TokenType type;
    int value;
} Token;