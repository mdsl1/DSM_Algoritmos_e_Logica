#include <stdio.h>

main()
{
	//Triangulo no canto inferior direito
	int a[5][5], l, c;
	
	for(l=0;l<5;l++)
		for(c=0;c<5;c++)
			a[l][c] = 0;
			
	for(l=1;l<5;l++)
		for(c=5-l;c<5;c++)
			a[l][c] = 1;
				
	for(l=0;l<5;l++)
	{
		for(c=0;c<5;c++)
			printf("%3d", a[l][c]);
			printf("\n");
	}
}