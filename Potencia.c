#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calculandoPotencia( int primeiroNumeroInformado, int segundoNumeroInformado );

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int primeiroNumero, segundoNumero, resultadoCalculo;
	
	printf("Digite o PRIMEIRO o número qualquer: ");
	scanf("%d", &primeiroNumero);
	
	printf("\nDigite o SEGUNDO número (potência): ");
	scanf("%d", &segundoNumero);
	
	resultadoCalculo = calculandoPotencia( primeiroNumero, segundoNumero );
	
	printf("\nO calculo do numero %d com a potência de %d é -> %d\n", primeiroNumero, segundoNumero, resultadoCalculo);
	
	return 0;	
}

int calculandoPotencia( int primeiroNumeroInformado, int segundoNumeroInformado ){
	
	if( segundoNumeroInformado == 1 ){
		return primeiroNumeroInformado; // Condição de saida (Calda)..
	} else{
		return primeiroNumeroInformado * calculandoPotencia( primeiroNumeroInformado, ( segundoNumeroInformado - 1 ) ); // Chamada recursiva..
	}
	
}
