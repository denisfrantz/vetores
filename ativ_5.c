#include <stdio.h>
#include <stdlib.h>
int main()
{
	int aposta[6], resultado[6], i, acertos = 0;
	
	printf ("APOSTA\n======\n");
	
	while (i<6)
	{
		scanf ("%d", &aposta[i]);
		i++;
	}
	i = 0;
	system("cls");
	printf ("RESULTADO DA SENA\n=================\n");
	
	while (i<6)
	{
		scanf ("%d", &resultado[i]);
		if (resultado[i] == aposta[i])
		{
			acertos = acertos + 1;
		}
		i++;
	}
	i = 0;
	system("cls");
	printf ("APOSTA\n======\n");
	
	while (i<6)
	{
		printf ("%d   ", aposta[i]);
		i++;
	}
	i = 0;
	printf ("\n\nRESULTADO DA SENA\n=================\n");
	
	while (i<6)
	{
		printf ("%d   ", resultado[i]);
		i++;
	}
	printf ("\n\nO apostador acertou %d numero(s) da Sena!", acertos);
	printf ("\n\nFim do programa!");
	
	return 0;
}
