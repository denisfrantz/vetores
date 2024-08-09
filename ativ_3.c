#include <stdio.h>
#include <stdlib.h>
int main()
{
	int vetor[10], i, soma, total_maior, total_menor, total_igual;
	float media;
	
	soma = 0;
	media = 0;
	total_maior = 0;
	total_menor = 0;
	total_igual = 0;
	i = 0;
	printf ("VETOR\n=====\n");
	
	while (i<10)
	{
		scanf ("%d", &vetor[i]);
		soma = soma + vetor[i];
		i++;
	}
	media = (soma/10);
	i = 0;

	while (i<10)
	{
		if (vetor[i] > media)
		{
			total_maior++;
		}
		else if (vetor[i] < media)
		{
			total_menor++;
		}
		else 
		{
			total_igual++;
		}
		i++;
	}
	printf ("\n\nMedia: %.1f", media);
	printf ("\nNumeros maiores que a media: %d", total_maior);
	printf ("\nNumeros menores que a media: %d", total_menor);
	printf ("\nNumeros iguais a media: %d", total_igual);
	
	printf ("\n\nFim do programa!");
	
	return 0;
}
