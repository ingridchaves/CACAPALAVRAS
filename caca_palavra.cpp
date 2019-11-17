#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
char letras [15][15]={'Y', 'C', 'Y', 'G', 'W', 'R', 'P', 'K', 'H', 'O', 'A', 'B', 'U', 'V', 'H', 'S', 'C', 'I', 'R', 'F', 'Z', 'B', 'M', 'C', 'P', 'M', 'Y', 'C', 'F', 'P', 'U', 'A', 'F', 'R', 'X', 'T', 'W', 'L', 'O', 'T', 'A', 'S', 'M', 'X', 'C', 'E', 'J', 'R', 'A', 'G', 'S', 'A', 'V', 'H', 'G', 'L', 'R', 'X', 'G', 'F', 'K', 'X', 'Z', 'T', 'A', 'P', 'C', 'V', 'J', 'Q', 'M', 'J', 'Y', 'M', 'G', 'G', 'C', 'X', 'Q', 'E', 'W', 'S', 'I', 'A', 'L', 'A', 'E', 'O', 'I', 'V', 'I', 'F', 'Y', 'F', 'X', 'V', 'A', 'L', 'P', 'A', 'L', 'H', 'E', 'T', 'A', 'L', 'E', 'K', 'O', 'U', 'U', 'T', 'I', 'G', 'U', 'A', 'N', 'C', 'O', 'I', 'V', 'H', 'I', 'H', 'Z', 'U', 'A', 'I', 'F', 'R', 'D', 'B', 'A', 'L', 'U', 'A', 'R', 'Z', 'H', 'X', 'C', 'L', 'C', 'O', 'G', 'E', 'E', 'X', 'V', 'R', 'U', 'N', 'B', 'S', 'T', 'M', 'U', 'S', 'I', 'C', 'A', 'T', 'L', 'A', 'A', 'W', 'R', 'A', 'U', 'J', 'A', 'B', 'I', 'S', 'S', 'N', 'O', 'R', 'I', 'S', 'C', 'M', 'P', 'L', 'E', 'N', 'P', 'A', 'L', 'C', 'O', 'A', 'H', 'B', 'E', 'T', 'M', 'F', 'O', 'T', 'Z', 'M', 'P', 'T', 'R', 'E', 'S', 'J', 'R', 'L', 'F', 'S', 'I', 'K', 'U', 'F', 'P', 'E', 'Q', 'T', 'A', 'M', 'L', 'O', 'J'};
char asteriscoH [15][15]={'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'};
char asteriscoV [15][15]={'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'};
//procura as palavras na horizontal
 void pesquisaHorizontal(char *palavraDigitada,int tamPalavraDigitada){
    //char procura[]="ABU";
    int posicaoProcura=0, tam=0, retorno,d=0  ;
    tam = strlen(palavraDigitada);
    for(int l=0;l<15;l++)
	{
        for(int c=0;c<15;c++)
        {
            if(letras[l][c] == palavraDigitada[posicaoProcura])
            {    //achou primeira letra
                asteriscoH[l][c] = palavraDigitada[posicaoProcura];
                posicaoProcura++;

            }
            else {
                //Nos casos em que o posicaoProcuar sair com um valor diferente do tamanho da palavra digitada, se inicia o contador e apaga os valores salvos anteriormente
                if (posicaoProcura!=tam){
                d=c;
                    for(int y=posicaoProcura;y>=0;y--){
                        asteriscoH[l][d]='*';
                        d--;
                    }
                }
                posicaoProcura=0;
            }
		}
    }
    return;
}
void pesquisaVertical(char *palavraDigitada,int tamPalavraDigitada){
    //char procura[]="ABU";
    int posicaoProcura=0, tam=0, retorno,d=0  ;
    tam = strlen(palavraDigitada);
    for(int c=0;c<15;c++)
	{
        for(int l=0;l<15;l++)
        {
            if(letras[l][c] == palavraDigitada[posicaoProcura])
            {    //achou primeira letra
                asteriscoV[l][c] = palavraDigitada[posicaoProcura];
                posicaoProcura++;


            }
            else {
                //Nos casos em que o posicaoProcuar sair com um valor diferente do tamanho da palavra digitada, se inicia o contador e apaga os valores salvos anteriormente
                if(posicaoProcura==2 && l==14){
                    asteriscoH[l][c]='*';
                }
                if (posicaoProcura!=tam){
                d=l;
                    for(int y=posicaoProcura;y>=0;y--){
                        asteriscoV[d][c]='*';
                        d--;
                    }

                }

                posicaoProcura=0;
            }
		}
    }
    return;
}

int main(void)
{
	char procura[15];
	int op, tam;
	//void pesquisaHorizontal(void);
	do{
		system("clear");
		for(int l=0;l<15;l++)
		{
			for(int c=0;c<15;c++)
			{
				printf("%c ",letras[l][c]);
			}
			printf("\n");
		}

		printf("Entre com a palavra a ser procurada: ");
		scanf(" %s", &procura);
        tam= strlen(procura);
        pesquisaHorizontal(procura,tam);
        pesquisaVertical(procura,tam);
        system("clear");
        //Este metodo não  suportado no sistema operacional Linux
        //procura=strupr(procura);
        for(int l=0;l<15;l++)
        {
            for(int c=0;c<15;c++)
            {
                if(asteriscoH[l][c] != '*')
                {    //achou primeira letra
                    asteriscoV[l][c] = asteriscoH[l][c];

                }
            }

        }

        //Exibe o resultado
        for(int l=0;l<15;l++)
		{
			for(int c=0;c<15;c++)
			{
				printf("%c ",asteriscoV[l][c]);
			}
			printf("\n");
		}



        op=0;

	}while(op!=0);
}

