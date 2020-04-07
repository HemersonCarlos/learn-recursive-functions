#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int verificarNumero(char procurarNumero, char sequenciaNumeros[], int ultimaPosicao, int quantidadeDigitos) {
    if(procurarNumero == sequenciaNumeros[ultimaPosicao]) {
        quantidadeDigitos++;
    }

    if(ultimaPosicao == 0) {
        return quantidadeDigitos;
    } else {
        ultimaPosicao--;
        verificarNumero(procurarNumero, sequenciaNumeros, ultimaPosicao, quantidadeDigitos);
    }
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");

    char sequenciaNumeros[] = "2085215823941228982",  procurarNumero = '8';
    int ultimaPosicao = strlen(sequenciaNumeros) - 1,  quantidadeDigitos = 0;

    quantidadeDigitos = verificarNumero(procurarNumero, sequenciaNumeros, ultimaPosicao, quantidadeDigitos);
    printf("\nDo número %c existem %d números\n", procurarNumero, quantidadeDigitos);
}
