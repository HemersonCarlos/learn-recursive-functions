#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void torreHanoi(int numeroDigitado , char origemDisco, char destinoDisco, char auxiliar){

	if(numeroDigitado == 1){
		printf("\n-----------------------------------\n"); 
		printf("Mova o disco 1 DA base %c PARA a base %c", origemDisco, destinoDisco);
		return;
	}
	
	torreHanoi(numeroDigitado - 1, origemDisco, auxiliar, destinoDisco);

	printf("\n-----------------------------------\n"); 
	printf("Mova o disco %d DA base %c PARA a base %c", numeroDigitado, origemDisco, destinoDisco);
	torreHanoi(numeroDigitado - 1, auxiliar, destinoDisco, origemDisco);
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numeroDigitado;
	
	printf("\t\t--TORRE DE HANOI--\n");
	
	printf("\nDigite o número de discos que deseja organizar: ");
	scanf("%d", &numeroDigitado);
	
	system("@cls||clear");
	
	torreHanoi(numeroDigitado, 'A', 'C', 'B');
	
	printf("\n\n");
	
	return 0;
}
