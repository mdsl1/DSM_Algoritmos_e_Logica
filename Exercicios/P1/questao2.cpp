#include <stdio.h>

main()
{
	//Separa a centena e a unidade de um n�mero e compara elas, se for igual � uma CAPICUA, sen�o n�o �.
	int num;
	
	printf("\nDigite um numero {max 999}: ");
		scanf("%d", &num);
	
	if(num/100 == num%10)
	{
		printf("\nEh uma Capicua!");
	}
	else
	{
		printf("\nNao eh uma Capicua...");
	}
	
	printf("\n--------------------------------");//Marcador, pra ficar bonito
	return main();
}
