#include<stdio.h>
int main()
{
	float peso,altura,imc,x;//variaveis
	for(x=0;x<15;x++)//ciclo de repeticoes 
	{
    printf("\nDados do Cliente",x+1);//Toda vez que repetir o ciclo aumenta o numero 
	printf("\nColeque seu peso:");
	scanf("%f",&peso);
	printf("\nColoque sua altura:");
	scanf("%f",&altura);
	imc=peso/altura*altura;
    printf("seu imc foi:,%f",imc); 
        	
	if (imc <17)//Função 
	{
		printf("\nAbaixo de 17 muito abaixo do peso ");
	}
	else if (imc>=17 && imc <= 18.49)//Função
	{
		printf("\nEntre 17 e 18.49 abaixo do peso ");
	}
	else if (imc >=18.5 && imc <= 24.99)//Função
	{
	    printf("\nEntre 18.5 e 24.99 peso normal");	
	}
	else if(imc>=25 && imc <=29.99)//Função
	{
		printf("\nEntre 25 e 29.99 acima do peso ");
	}
	else if(imc>=30 && imc <=34.99)//Função
	{
	    printf("\nEntre 30 e 34.99 obecidade 1");	
	}
	else if (imc>=30 && imc<=39.99)//Função
	{
		printf("\nEntre 35 e 39.99 obecidade 2 severa");
	}
	else if (imc>40)//Função
	{
		printf("\nAcima de 40 obesidade 3 morbida ");
	}
	}

}
