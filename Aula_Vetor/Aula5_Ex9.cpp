#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int num[20], aux, cont;
	//Pega o clock da m�quina e multiplica com o n�mero random padr�o, ele deve vir sempre antes do rand
	srand(time(NULL));
	//Gera 20 numeros randoms pro vetor
	for(cont=0; cont<20;cont++)
	{
		num[cont] = rand()%100+1;//Esse mais 1 impede que gere o n�mero 0
	}
	printf("\nValores Gerados: ");
	for(cont=0; cont<20;cont++)
	{
		printf("%d, ",num[cont]);
	}
	//Pega o valor de num[0] e joga pra auxiliar -> Pega o valor de num[10] e Joga pra num[0] -> Joga o valor da auxiliar pra num[10]
	for(cont=0; cont<10;cont++)
	{
		aux = num[cont];
		num[cont] = num[cont+10];
		num[cont+10] = aux;
	}
	
	printf("\nValores Trocados: ");
	for(cont=0; cont<20;cont++)
	{
		printf("%d, ",num[cont]);
	}
}
