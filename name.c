#include "cs50.h"
#include <stdio.h>

int main(void)
{
    string name = get_string("What's your name? ");
    printf("hello, %s\n", name);
}
// precisa indicar pra variável que tipo de dado ela quer, por isso colocamos string ali ao lado de name

// o %s é pq é um valor de string, se fosse um numero inteiro seria um %i

// \n é uma quebra de linha 