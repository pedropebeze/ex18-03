#include <stdio.h>

int main() {
	
	int a, b, c;
    printf("Digite o 1 numero: ");
	scanf("%d", &a);
    
	while(a != -1)
	{
    printf("Digite o 2 numero: ");
    scanf("%d", &b);
    
    printf("Digite o 3 numero: ");
    scanf("%d", &c);

        if(a > b){
            if(a > c){
                // a maior
                if((c * c) + (b * b) == (a * a) )
            puts("\nEh um triangulo retangulo.\n");
        else
            puts("\nNao eh um triangulo retangulo.\n");
            }
        }else{
			if(b > c){
            	if(b > a){
            	// b maior
            	if((c * c) + (a * a) == (b * b) ){
            		puts("\nEh um triangulo retangulo.\n");
            	}
        		else{
            		puts("\nNao eh um triangulo retangulo.\n");
            		}
            	}
        	}else{
                // c maior
                if((b * b) + (a * a) == (c * c) )
            		puts("\nEh um triangulo retangulo.\n");
        		else
            		puts("\nNao eh um triangulo retangulo.\n");
            		
            	}
                
        }
	printf("Digite o 1 numero:");
	scanf("%d", &a);
    }
    
  return 0;
}
