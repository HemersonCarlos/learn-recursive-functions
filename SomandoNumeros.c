#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int somandoNumero(int primeiroNumeroInformado, int segundoNumeroInformado);

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int primeiroNumero, segundoNumero, resultadoCalculo;
	
	printf("Digite o PRIMEIRO n�mero: ");
	scanf("%d", &primeiroNumero);
	
	printf("Digite o SEGUNDO n�mero correspondente a quantidade de vozes que quer somar o PRIMEIRO n�mero: ");
	scanf("%d", &segundoNumero);
	
	resultadoCalculo = somandoNumero(primeiroNumero, segundoNumero);
	
	printf("\nO resultado do calculo � -> %d\n", resultadoCalculo);
	
	return 0;
}

int somandoNumero(int primeiroNumeroInformado, int segundoNumeroInformado){
	
	if( segundoNumeroInformado == 1 ){
		return primeiroNumeroInformado;
	} else{
		return primeiroNumeroInformado += somandoNumero( primeiroNumeroInformado, ( segundoNumeroInformado - 1 ) );
	}
}
