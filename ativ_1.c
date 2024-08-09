#include <stdio.h>
#include <stdlib.h>
int main()
{
	float vetor[20];
	int i, negativos;
	
	i = 0;
	negativos = 0;
	printf ("VETOR\n=====\n");
	
	while (i<20)
	{
		scanf ("%f", &vetor[i]);
		if (vetor[i] < 0)
		{
			negativos = negativos + 1;
		}
		i++;
	}
	system("cls");
	i = 0;
	printf ("VALORES LIDOS\n=============");
	
	while (i<20)
	{
		printf ("\n%f", vetor[i]);
		i++;
	}
	printf ("\n\nO vetor contem %d numero(s) negativo(s).", negativos);
	printf ("\n\nFim do programa!");
	
	return 0;
}
