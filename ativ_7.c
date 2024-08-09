#include <stdio.h>
#include <stdlib.h>
int main()
{
	int vetor[10], i, num;
	char valor_encontrado;
	
	i = 0;
	printf ("VETOR\n=====\n");
	
	while (i<10)
	{
		scanf ("%d", &vetor[i]);
		i++;
	}
	system("cls");
	printf ("Informe um novo valor: ");
	scanf ("%d", &num);
	i = 0;
	
	while (i < 10)
	{
		if (num == vetor[i])
		{
			valor_encontrado = 'S';
		}
		i++;
	}
	if (valor_encontrado == 'S')
	{
		printf ("\nO valor informado esta presente no vetor!");
	}
	else
	{
		printf ("\nO valor informado nao esta presente no vetor!");
	}	
	printf ("\n\nFim do programa!");
	
	return 0;
}
