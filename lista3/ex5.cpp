
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numFat, contador, resultadoFat = 1;
	
	printf("Informe o n�mero que deseja calcular o fatorial: ");
	scanf("%d", &numFat);
	
	if(numFat > 0){
		contador = numFat;
		
		while(contador > 0){
			resultadoFat *= contador;
			contador--;
		}
	}
	
	printf("O valor do fatorial %d! � %d", numFat, resultadoFat);
	
	return 0;
}
