#include<stdio.h>

int numero = 0;
int i = 1;
int main(char*argv[])
{
	printf("Ingrese Numero: ");
	scanf("%i", &numero);
	if(numero%4==0)
	{
		printf("Es divisible por 4 \n");
		printf("\n");
		for(i=1; i<=10; i++)
		{
			printf("%i * %i = %i \n", numero, i, (numero*i));
		}
	}
	else
	{
		printf("No es divisible por 4");
	}
}
