#include <stdio.h>

main()
{
	//com base nas medidas dos 3 lados, calcula se e um triangulo e retorna o tipo de triangulo
	int a, b, c;
	
	printf("\nLado A: ");
		scanf("%d", &a);
	printf("Lado B: ");
		scanf("%d", &b);
	printf("Lado C: ");
		scanf("%d", &c);
		
	//� triangulo? 
	if( a<(b+c) && b<(a+c) && c<(b+a))//Se um lado for menor que a soma dos outros dois lados, � um tri�ngulo
	{
		printf("E um triangulo!");
		//Qual triangulo?
	if(a==b && a==c)
	{
		printf("\nTriangulo equilatero\n");//tr�s lados iguais
	}
	else if (a==b || a==c || b==c)
	{
		printf("\nTriangulo isosceles\n");//dois lados iguais
	}
	else
	{
		printf("\nTriangulo Escaleno\n");//tr�s lados diferentes
	}
	}
	else
	{
		printf("Nao e um triangulo...\n");
	}
	return main();
}
