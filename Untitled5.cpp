#include<stdio.h>//aqui e a biblioteca
int main()//e a funcao principal
{
	float peso,altura,imc,x;//aqui declarei as variaveis
	for(x=0;x<15;x++)//aqui comeca o ciclo de repeticoes 
	{
    printf("\nDados do Cliente",x+1);//aqui eu coloquei os dados do cliente para que toda que se repetir o ciclo aumente o numero 
	printf("\nColeque seu peso:");//aqui eu coloquei oq o leitor vai ler
	scanf("%f",&peso);//aqui e o que vai executar
	printf("\nColoque sua altura:");
	scanf("%f",&altura);
	imc=peso/altura*altura;//aqui e a soma do peso vezes a altura
    printf("seu imc foi:,%f",imc);//aqui eu coloquei o que ele vai ver com a soma da operaçao de cima 
        	
	if (imc <17)//aqui e a funcao que tem que ser menor de 17
	{
		printf("\nAbaixo de 17 muito abaixo do peso ");
	}
	else if (imc>=17 && imc <= 18.49)//esse aqui tem que ser maior 17 ou igual a 18.49
	{
		printf("\nEntre 17 e 18.49 abaixo do peso ");
	}
	else if (imc >=18.5 && imc <= 24.99)
	{
	    printf("\nEntre 18.5 e 24.99 peso normal");	
	}
	else if(imc>=25 && imc <=29.99) 
	{
		printf("\nEntre 25 e 29.99 acima do peso ");
	}
	else if(imc>=30 && imc <=34.99) 
	{
	    printf("\nEntre 30 e 34.99 obecidade 1");	
	}
	else if (imc>=30 && imc<=39.99)
	{
		printf("\nEntre 35 e 39.99 obecidade 2 severa");
	}
	else if (imc>40)
	{
		printf("\nAcima de 40 obesidade 3 morbida ");
	}
	}

}
