#include <stdio.h>

int main() {

  float nota=0;
  int cont = 0;
  float total=0;
  int on = 1;
  while(on == 1) {
    
    printf("Digite uma nota: ");
    scanf("%f", &nota);
    if(nota != -5){
    	total += nota;
    	cont += 1;
	}else{
		on = 0;
	}
  }
  

  printf("Media Final: %.2f", total/cont);
 

  return 0;
}
