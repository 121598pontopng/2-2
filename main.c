#include<stdio.h>
#include <stdlib.h>

int main(){
	//int
	int input;
	int horas,minutos,segundos;
	int sobra;

	//prog
	printf("Introduza os segundos : ");
	scanf("%d",&input);
	horas = (input/3600);
	sobra = input - (horas * 3600);
	minutos = sobra/60;
	sobra = sobra - (minutos*60);
	segundos = sobra;
	printf("%d horas, %d minutos e %d segundos",horas,minutos,segundos);
    printf("\n");

    //int2
    int input2;
    int horas2,minutos2,segundos2;
    int sobra2;

    //prog2
    printf("Introduza os segundos segundos '_' : ");
    scanf("%d",&input2);
    horas2 = (input2/3600);
    sobra2 = input2 - (horas2 * 3600);
    minutos2 = sobra2/60;
    sobra2 = sobra2 - (minutos2*60);
    segundos2 = sobra2;
    printf("%d horas, %d minutos e %d segundos",horas2,minutos2,segundos2);
    printf("\n");

    //3rd act
    int diferenca = abs(input - input2);
    int horas3,minutos3,segundos3;
    int sobra3;
    horas3 = (diferenca/3600);
    sobra3 = diferenca - (horas3 * 3600);
    minutos3 = sobra3/60;
    sobra3 = sobra3 -(minutos3 * 60);
    segundos3 = sobra3;
    printf("A diferenca entre os dois numeros e: %d horas, %d minutos e %d segundos",horas3,minutos3,segundos3);

}
