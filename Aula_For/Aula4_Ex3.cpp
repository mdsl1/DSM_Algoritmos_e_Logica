#include <stdio.h>

main()
{
	//Ler um n�mero, se ele o resto de divis�o for igual a 0, ele � divisivel, sen�o ele n�o �
	int num, n;
	
	printf("\nValor: ");
		scanf("%d", &num);
		
	printf("Divisivel por: ");	
	
	for(n=1;n<=num; n++)
	{
		if(num % n == 0)
		{
			printf("%d, ", n);
		}
	}
}
