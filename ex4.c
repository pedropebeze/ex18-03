
#include <stdio.h>

int main() {
	
	float raio,area,circ,diam;
	float pi = 3.14;

	printf("Digite o raio: ");
	scanf("%f", &raio);
	
	
	area = (raio * raio) * pi;	
	circ = (2 * pi) * raio;	
	diam = 2 * raio;
	
	printf("Area: %.2f\n",area);
	printf("Circunferencia: %.2f\n",circ);
	printf("Diametro: %.2f\n",diam);
	
 
    
  return 0;
}

