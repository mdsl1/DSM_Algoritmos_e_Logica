#include <stdio.h>
main()
{
	//Insira 10 n�meros e em seguida verifique se o valor digitado existe
	int num[10] = {9,15,32,45,51,63,78,86,99,999}, i, src, exst=0;
	
	//Digitar o valor que deseja encontrar e verificar se existe no banco de dados. Se for, declarar que ele existe e encerrar o algoritmo, sen�o continuar procurando
	printf("Valor procurado: ");
		scanf("%d", &src);
	
	//Verifica se existe
	for (i=0; i<10; i++)
	{
		if(src==num[i])
		{
			exst = 1;
			break;
		}
	}
	//Retorna ao usu�rio se existe ou n�o
	if(!exst)
	{
		printf("\nValor nao encontrado...");
	}
	else
	{
		printf("\nValor encontrado!");
	}
	
}
