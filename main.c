#include <conio.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float main(int argc, char *argv[]) {
	system("cls");
	setlocale (LC_ALL,"");
	float esc;
	printf("\n Esse programa � calculadora");
	printf("\n \n Escolha uma opera��o: \n Soma: 1 \n Subtra��o: 2 \n Multiplica��o: 3 \n Divis�o: 4  \n Sair: 0 \n  \nEscolha:");
	scanf("%f",&esc);
	
	while (esc != 0 )
		{
		float val1 = 0 , val2 = 0, val3 = 0; 
		if (esc == 1)
			{	
				printf("\n Digite o primeiro n�mero:");
				scanf("%f",&val1);
				printf("\n Digite o segundo n�mero:");
				scanf("%f",&val2);
				val3 = val1 + val2;
				
			} else if (esc == 2)
			{
				float val1 = 0 , val2 = 0, val3 = 0; 
				printf("\n Digite o primeiro n�mero:");
				scanf("%f",&val1);
				printf("\n Digite o segundo n�mero:");
				scanf("%f",&val2);
				val3 = val1 - val2;
				
			} else if (esc == 3)
			{
				float val1 = 0 , val2 = 0, val3 = 0; 
				printf("\n Digite o primeiro n�mero:");
				scanf("%f",&val1);
				printf("\n Digite o segundo n�mero:");
				scanf("%f",&val2);
				val3 = val1 * val2;
			} else if (esc == 4 )
			{
				float val1 = 0 , val2 = 0, val3 = 0; 
				printf("\n Digite o primeiro n�mero:");
				scanf("%f",&val1);
				printf("\n Digite o segundo n�mero:");
				scanf("%f",&val2);
				val3 = val1/val2;
				
			}
			 else 
			{
				printf("\n Valor inv�lido");
				break;
			}
	printf("\n O Resultado �: %.2f",val3);
	}
	printf("\n Encerrando");
	return 0;
}

