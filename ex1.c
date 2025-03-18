#include <stdio.h>

int main (){
	
	
	int n;
	float nota;
	int cont = 0;
	float notaf;
	puts("Digite o numero de notas: ");
	scanf("%d", &n);
	while(cont < n){
		printf("Digite a nota %d:", cont);
		scanf("%f", &nota);
		notaf += nota;
		cont++; 
	}
	
	printf("Nota Final: %.2f", notaf/cont);
	return 0;
}
