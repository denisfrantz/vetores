#include <stdio.h>
#include <stdlib.h>
int main()
{
	int vetor[5], i;
	
	i = 0;
	printf ("VETOR\n=====\n");
	
	while (i<5)
	{
		scanf ("%d", &vetor[i]);
		i++;
	}
	system("cls");
	i = 0;
	printf ("VETOR LIDO\n==========");
	
	while (i<5)
	{
		printf ("\n%d", vetor[i]);
		if (vetor[i] == 5)
		{
			vetor[i] = 1;
		}
		i++;
	}
	i = 0;
	printf ("\n\nVETOR MODIFICADO\n================");
	
	while (i<5)
	{
		printf ("\n%d", vetor[i]);
		i++;
	}
	printf ("\n\nFim do programa!");
	
	return 0;
}
