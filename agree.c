#include "cs50.h"
#include <stdio.h>

int main(void)
{  
     //Prompt user to agree
    char c = get_char("Do you agree? ");

    //Check whether agreed

    if (c == 'Y' || c == 'y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'N'|| c == 'n')
    {
        printf("Not agreed.\n");
    }
}

// O símbolo de igual é representado por == , quando se tem apenas = significa recebe, de atribuição 

// O símbolo || significa or (ou)