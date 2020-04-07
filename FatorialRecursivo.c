#include<stdio.h>

double fatorialComRecursividade(double numeroInformado) { 
	if (numeroInformado == 0) { // Condição para terminar a chamada recursiva
		return 1; 
	}
	else {
    	return numeroInformado * fatorialComRecursividade(numeroInformado - 1); // Chamada recursiva 
	}
}

main() {
	double primeiroNumero, segundoNumero;
	primeiroNumero = 10;
	segundoNumero = 15;
	printf("\nCalculando fatorial COM recursividade(%.0lf) = %.0lf\n", primeiroNumero, fatorialComRecursividade(primeiroNumero));
	printf("\nCalculando fatorial COM recursividade(%.0lf) = %.0lf\n", segundoNumero, fatorialComRecursividade(segundoNumero));
}
