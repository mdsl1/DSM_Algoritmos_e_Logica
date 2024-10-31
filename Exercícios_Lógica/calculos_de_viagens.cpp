#include <stdio.h>
#include<math.h>
 main()
 {
 	//Calcular a qtde de combustivel gasto com base no tempo e km/hr fornecidos
 	float km_h, t, dist, km_l, lit_total, t_total;
 	int op;
 	
 	printf("------------------------------------------------------------");
 	printf("\nCalculos: \n1- Km/h e tempo para descobrir distancia \n2- Distancia e tempo para descobrir km/h \n3- Distancia e km/h para descobrir tempo");
 	printf("\n\nDigite o numero do calculo desejado: ");
 		scanf("%d", &op);
 		
 	if(op == 1)
 	{
	 	printf("\nQuantos km o carro anda por litro de combustivel? ");
		 	scanf("%f", &km_l);
		printf("Qual a Velocidade Media durante a viagem? ");
	 		scanf("%f", &km_h);
	 	printf("Qual o Tempo em horas gasto na viagem? ");
	 		scanf("%f", &t);
	 	
	 	printf("----------------------------------------");
	 	//Multiplica km/hr com tempo, depois divide distancia por km/l
	 	dist = km_h*t;
	 	lit_total = dist/km_l;
	 	printf("\nDistancia percorrida: %.2fkm\n", dist);
	 	printf("Total combustivel usado: %.2fL\n", lit_total);
	}
	if(op == 2)
	{	
	 	printf("\nQuantos km o carro anda por litro de combustivel? ");
		 	scanf("%f", &km_l);
		printf("Qual a Distancia percorrida? ");
	 		scanf("%f", &dist);
	 	printf("Qual o Tempo em horas gasto na viagem? ");
	 		scanf("%f", &t);
	 		
	 	//Divide distancia por tempo, depois divide distancia por km/l
	 	km_h = dist/t;
	 	lit_total = dist/km_l;
	 	
	 	printf("\nVelocidade media: %.2f km/h\n", km_h);
	 	printf("Total combustivel usado: %.2fL\n", lit_total);
	}
	if(op == 3)
	{
		printf("\nQuantos km o carro anda por litro de combustivel? ");
		 	scanf("%f", &km_l);
		printf("Qual a Distancia percorrida? ");
	 		scanf("%f", &dist);
	 	printf("Qual a Velocidade Media durante a viagem? ");
	 		scanf("%f", &km_h);
	 		
	 	//Divide distancia por km/h, depois divide distancia por km/l
	 	t = dist/km_h;
	 	lit_total = dist/km_l;
	 	
	 	printf("\nTempo gasto: %.2f hrs\n", t);
	 	printf("Total combustivel usado: %.2fL\n", lit_total);
	}
 	return main();
 }
