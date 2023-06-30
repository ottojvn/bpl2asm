#include <stdio.h>

#include "tradutor.h"

int main(void) {
    char linha[100];

    while (scanf("%[^\n]%*c", linha) == 1) {
        traduzir(linha);
    }

    return 0;
}
