#include <stdio.h>
main()
{
	//Gere os 20 primeiros n�meros da s�rie fibonacci
	int fib[20]={1,1}, i;
	
	for(i=2;i<20;i++)
	{
		fib[i] = fib[i-1]+fib[i-2];
	}
	
	printf("\nValores: ");
	for(i=0;i<20;i++)
	{
		printf("%d, ", fib[i]);
	}
	
}
