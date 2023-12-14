/*
#include <stdio.h>
#include <stdio.h>
int main(void)
{
    printf("meow\n");
    printf("meow\n");
    printf("meow\n");
}


// Uma melhor maneira de construir este código seria através de loops


int main(void)
{
    int i = 0; // O inteiro começa com 0
    while (i < 3) // O loop se reperte até alcançar 3
    {
        printf("meow\n");
        i++;
    }
}

// Aqui o i é um número que vai crescendo de 1 em 1 
// i ++ é a forma mais simplificada de escrever const = const + 1 ou const +=
// A forma mais correta é começar com 0 e ir crescendo 

A forma inversa seria começar com 3 e regredir até 0

int main(void)
{
    int i = 3;
    while (i > 0)
    {
        printf("meow\n);
        i--;
    }
}

*/

// A forma ainda mais sofisticada de criar este programa seria incluir todas as condições numa mesma linha 

#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        printf("meow\n");
    }
}

/* PARA FAZER UM LOOP INFINITO

int main(void) 
{ 
    while (true) 
    {
        printf("meow\n");
    }

}
 
No lugar de true poderia ser qualquer número diferente de 0, que para o pc significa verdadeiro

No caso de rodar um programa infinito ou der algum problema, apretar control-C (para cancelar)
*/

