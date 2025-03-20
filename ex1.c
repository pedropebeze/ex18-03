#include <stdio.h>

int main (){
	
	int cont = 0;
	float nota;
	float total;
	
	while(cont <= 2){
		
		puts("Insira a nota: ");
  		scanf("%f",&nota);
  		total += nota;
  		cont +=1;
	
	}
 	printf("Media Final: %.2f",total/cont);	
 	
	return 0;
}
