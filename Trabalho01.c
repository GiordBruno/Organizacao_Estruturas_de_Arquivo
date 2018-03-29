#include <stdio.h>
#include <stdlib.h>
typedef struct _Endereco Endereco;

struct _Endereco
{
	char logradouro[72];
	char bairro[72];
	char cidade[72];
	char uf[72];
	char sigla[2];
	char cep[8];
	char lixo[2];
};
int main(){
	/*******************************************/
    FILE *arq;
	Endereco e;
	int qt;
	long posicao, primeiro, ultimo, meio;

	
	
	
	/*******************************************/
	
   
    
    
    /* Variável que ira conter o valor temporario da posicao do vetor */
    int valor;
    
    /* Variável que ira conter o elemento a ser pesquisado no vetor */
    int pesquisa;
    
    /* Variável de controle de pesquisa, identifica se o elemento foi encontrado */
    int controle_pesquisa = 1;
    
    /* Variáveis de controle do vetor durante a pesquisa binaria */
    int inicio, meio, fim;
    
    
    
    
    
    /* Verifica se houve erro na alocacao de memoria */
    if((arq = fopen("cep.dat","r+b")) == NULL){
		printf("Houve um erro ao abrir o arquivo. O programa sera fechado.\n");
		system("pause");
		exit(1);
	}
    else
    {
	
			f = fopen("cep_ordenado.dat","r");
			fseek(f,0,SEEK_END);
			posicao = ftell(f);
			rewind(f);
			
    		/* Define o inicio e o fim do arquivo. (Fim do arquivo: seu_tamanho - 1 */
			inicio = 0;
			fim = (posicao/sizeof(Endereco))-1;
			
			printf("Posicao do ultimo elemento do vetor: %d", fim);
			
			printf("Tamanho do Arquivo: %ld\n", posicao);
			printf("Tamanho do Registro: %ld\n", sizeof(Endereco));
			printf("Tamanho do Arquivo em Registros: %ld\n", posicao/sizeof(Endereco));	
			
        
        /* Recebe o valor a ser pesquisado no vetor */
        printf("Digite o elemento que deseja pesquisa no vetor: ");
        scanf("%d", &pesquisa);
        
        
        /* Loop que ira realizar a pesquisa binaria */
        while (inicio <= fim)
        {
              
              /* Obtem o meio do vetor */
              meio = (inicio + fim) / 2;
              fseek meio
              /* Verifica se o elemento foi encontrado */
              if (pesquisa == v[meio])
              {
                 controle_pesquisa = 0;
                 break;
              }
              
              /**
              * Se a pesquisa for menor que o meio do vetor, 
              * entao o fim do vetor sera o meio atual -1
              */
              else if (pesquisa < v[meio])
              {
                 fim = meio - 1;
                 continue;
              }
              
              /**
              * Se a pesquisa for maior que o meio do vetor, entao a pesquisa
              * comecara a partir do meio atual atual do vetor 
              */
              else if(pesquisa > v[meio])
              {
                 inicio = meio + 1;
                 continue;
              }
              
              /**
              * Caso nada seja encontrado, define o controle_pesquisa = 1
              */
              else
              {
                 controle_pesquisa = 1;
                 break;
              }
              
        }
        printf("Posicao do elemento que esta no meio do vetor: ", meio);
        /**
        * Verifica a variavel que indica se o elemento foi encontrado ou nao.
        * Se for 0, o elemento foi encontrado, caso contrario, o elemento nao foi
        * encontrado. Basta entao exibir as mensagens.
        */
        if (controle_pesquisa == 0){
           printf("Elemento %d encontrado! Posicao: %d - Valor: %d", pesquisa, meio, v[meio]);                      
        } else {
           printf("Elemento %d nao encontrado!", pesquisa);
        }

        return (0);
        
    }projeto1
    
}
