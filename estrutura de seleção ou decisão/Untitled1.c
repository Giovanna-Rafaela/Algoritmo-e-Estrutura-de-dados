#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, media;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	media = (nota1+nota2);
	
	printf("Media do aluno = %.1f", media);
	
	if(media >= 6) {
		printf(" - Aprovado!");
	}
	else
	    printf(" - Reprovado!");
	    
	    return 0;
}
