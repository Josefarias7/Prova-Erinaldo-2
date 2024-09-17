#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
    int n, a;
	float nota, peso, media, somaN, somaP, media_final;
	
		for ( a = 1; a<=2; a++){
		 somaN = 0;
		 somaP = 0;
		
	   		for (n = 1; n <=3; n++){
	  
	    	printf("Informe a nota %d do aluno %d? ", n,a);
	     	scanf("%f",&nota);
	    	printf("Informe o peso da nota %d do aluno %d? ", n,a);
	     	scanf("%f",&peso);
	     
	    	somaN += nota * peso;
	    	somaP += peso;
		} 
		
	  	media = somaN / somaP;
	    printf("\nO valor da média ponderada do aluno %d é = %.2f\n\n", a, media);
	    
	    media_final += media;
}
   media_final /= 5;
   printf(" A Média final da turma é : %.2f\n\n", media_final)
	
	
	
	
	
	
	
	
	
	return 0;
	
}

