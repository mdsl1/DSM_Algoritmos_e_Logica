#include<stdio.h>

main()
{
	int A=1, B=5, C=2, D=5, E=4, F=4, G=2, H=2, I=2, cont, num[18]={6,6,0,8,9,5,8,2,5,9,8,5,5,4,2,7,8,5};
	//  1  2  3  4  5  6  7  8  9
	
	printf("6D6895825985542785\n\n");
	for(cont=0;cont<18;cont++)
	{
			switch (num[cont])
			{
			case 1:
				A++;
				B++;
				if(A>5)
					A=1;
				if(B>5)
					B=1;
				break;
			
			case 2:
				B++;
				E++;
				if(B>5)
					B=1;
				if(E>5)
					E=1;
				break;
			
			case 3:
				C++;
				E++;
				F++;
				if(C>5)
					C=1;
				if(E>5)
					E=1;
				if(F>5)
					F=1;
				break;
				
			case 4:
				D++;
				B++;
				H++;
				if(D>5)
					D=1;
				if(B>5)
					B=1;
				if(H>5)
					H=1;
				break;
				
			case 5:
				E++;
				A++;
				C++;
				G++;
				I++;
				if(E>5)
					E=1;
				if(A>5)
					A=1;
				if(C>5)
					C=1;
				if(G>5)
					G=1;
				if(I>5)
					I=1;
				break;
				
			case 6:
				F++;
				C++;
				E++;
				I++;
				if(F>5)
					F=1;
				if(C>5)
					C=1;
				if(E>5)
					E=1;
				if(I>5)
					I=1;
				break;
			
			case 7:
				G++;
				D++;
				E++;
				H++;
				if(G>5)
					G=1;
				if(D>5)
					D=1;
				if(E>5)
					E=1;
				if(H>5)
					H=1;
				break;
					
			case 8:
				H++;
				G++;
				I++;
				if(H>5)
					H=1;
				if(G>5)
					G=1;
				if(I>5)
					I=1;
				break;
					
			case 9:
				I++;
				E++;
				H++;
				if(I>5)
					I=1;
				if(E>5)
					E=1;
				if(H>5)
					H=1;
				break;
			case 0:
				break;
		}
	}
	printf("\n%d %d %d %d %d %d %d %d %d ", A,B,C,D,E,F,G,H,I);
}
