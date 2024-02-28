#include <stdio.h>
#include <stdlib.h>
#include "types.h"
#include "enums.h"
#ifndef TOKENS_H
#define TOKENS_H
#endif


Token next_token(char **input){
    while (isspace(**input)){
        (*input)++;
    }
    if (**input == '\0') {
        return (Token){TOKEN_END, 0};
    }
    if (isdigit(**input)){
        return (Token){TOKEN_INT, strtol(*input, input, 10)};
    }

    switch(**input){
        case '+': (*input)++; return (Token){TOKEN_PLUS, 0};
        case '-': (*input)++; return (Token){TOKEN_MINUS, 0};
        case '*': (*input)++; return (Token){TOKEN_MULTIPLY, 0};
        case '/': (*input)++; return (Token){TOKEN_DIVIDE, 0};
        case '(': (*input)++; return (Token){TOKEN_LPAREN, 0};
        case ')': (*input)++; return (Token){TOKEN_RPAREN, 0};
        default: return (Token){TOKEN_ERROR, 0};
    }
}