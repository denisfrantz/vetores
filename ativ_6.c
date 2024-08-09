#include <stdio.h>
#include <stdlib.h>
int main()
{
	char vetor[10]; 
	int i, cont, aux, y;
	
	i = 0;
	
	printf ("VETOR\n=====\n");
	
	while (i < 10)
	{
		fflush (stdin);
		scanf ("%c", &vetor[i]);
		i++;
	}
	i = 0;
	printf ("\nVETOR LIDO\n==========\n");
	
	while (i < 10)
	{
		printf ("%c ", vetor[i]);
		cont = 0;
		for (y = vetor[1]; y <= vetor[i], y++;);
		{
			if (vetor[i] == vetor[i])
			{
				cont++;
			}
		}
		i++;
	}
	
	return 0;
}
