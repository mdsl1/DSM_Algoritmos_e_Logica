#include <stdio.h>

main()
{
	
	int a[5][5],l,c;
	//Diagonal principal � quando os valores da linha e da coluna s�o iguais. Ex: a[1][1]
	for(l=0;l<5;l++)
		for(c=0;c<5;c++)
			a[l][c] = 0;
	//Adiciona os valores 1 na matriz
	for(l=0;l<5;l++)
		a[l][l] = 1;//Ele roda o c�digo s� 5 veze, ao inves de 25 igual normalmente seria
	//Printa na tela	
	for(l=0;l<5;l++)
	{
		for(c=0;c<5;c++)
			printf("%3d",a[l][c]); //O 3 na frente do d d� um espa�o de 3 caracteres para o valor, ou seja, vai sair "--n"
		printf("\n");
	}
	
	printf("\n\n");
	//Diagonal secund�ria � quando os valores da linha e da coluna somados s�o iguais a 4. Ex: a[1][3], a[0][4], a[2][2]
	for(l=0;l<5;l++)
		for(c=0;c<5;c++)
			a[l][c] = 0;
	//Adiciona os valores 1 na matriz
	for(l=0, c=4; l<5 ;l++, c--) //Outro jeito de fazer: a[l][4-l] = 1;
		a[l][c] = 1;//Ele roda o c�digo s� 5 veze, ao inves de 25 igual normalmente seria
	
	//Printa na tela	
	for(l=0;l<5;l++)
	{
		for(c=0;c<5;c++)
			printf("%3d",a[l][c]); //O 3 na frente do d d� um espa�o de 3 caracteres para o valor, ou seja, vai sair "--n"
		printf("\n");
	}
}
