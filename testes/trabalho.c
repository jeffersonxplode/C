
#include <stdio.h>
#include <stdlib.h>


struct ListaDuplaNo {

    int x;
    struct ListaDuplaNo *proximo,*anterior;

};



struct ListaDupla {

    struct ListaDuplaNo *inicio,*fim;

};

 

void inserirMeio(struct ListaDupla * lista, int n){
	
	struct ListaDuplaNo *aux;  /* Criando uma Auxiliar*/
	aux = lista->inicio; /* Apontando a aux para o inicio para percorrer*/
	int cont = 0; 
	int x;
	
	while (aux != NULL){
		
		aux = aux->proximo;
		cont++; /* Contando quantos elementos tem */
		
		}
	
	if (cont % 2 == 0){  /* Checando a metade da lista*/
		
		cont = cont/2;
		
		}
	else {
		
		cont = (cont + 2) /2;
		
		}
	free(aux); /*Liberando Aux ja que não vai mais usar*/
	
	struct ListaDuplaNo * aux2; /* Criando outra auxiliar para fazer outra busca*/
	aux2 = lista->inicio;
	
	while (x != cont){ /*Vai parar exatamente na metade*/
		
		aux2 = aux2->proximo; 
		x++	;
		
	}	 
	
	/* Adicionando o novo elemento na metade da lista*/
	struct ListaDuplaNo *novo; 
	novo = (struct ListaDuplaNo*)malloc(sizeof(struct ListaDuplaNo));
	novo->x = n;
	novo->proximo = aux2->proximo; 
	novo->anterior = aux2;
	aux2->proximo->anterior = novo;
	aux2->proximo = novo;
		
}


void Inserir (struct ListaDupla * lista, int n){
	
	struct ListaDuplaNo *novo;
	novo = (struct ListaDuplaNo*)malloc(sizeof(struct ListaDuplaNo));
	novo->x = n;
	novo->proximo = NULL;
	novo->anterior = lista->fim;
	lista->fim->proximo = novo;
	lista->fim = novo;
		
}

void CriarLista (struct ListaDupla * lista, int n){
	
	struct ListaDuplaNo *novo;
	novo = (struct ListaDuplaNo*)malloc(sizeof(struct ListaDuplaNo));
	novo->x = n;
	novo->proximo = NULL;
	novo->anterior = NULL;
	lista->inicio = novo;
	lista->fim = novo;
	
}

void ListarElementos (struct ListaDupla * lista){
	
	struct ListaDuplaNo *aux;
	aux = lista->inicio;
	
	while(aux != NULL){
		
		printf("NUMERO: %d \n",aux->x);
		aux = aux->proximo;
		
		
		}
}



int main(int argc, char **argv)
{
	
	struct ListaDupla *lista;
	lista = (struct ListaDupla*)malloc(sizeof(struct ListaDupla));
	int op = 1;
	int x;
		
		while(op != 0){
			
				
				printf("\n DIGITE 1 PARA CRIAR NOVA LISTA \n DIGITE 2 PARA INSERIR NOVO ELEMENTO NA LISTA \n DIGITE 3 PARA INSERIR NO MEIO DA LISTA \n DIGITE 4 PARA LISTAR OS ELEMENTOS \n DIGITE 0 PARA SAIR \n");
				scanf("%d",&op);
				
				switch(op) {
					
					case 1: 
							printf("DIGITE O NUMERO DO PRIMEIRO ELEMENTO DA LISTA \n");
							scanf("%d",&x);
							CriarLista(lista,x);
							break;
					case 2:
							printf("DIGITE O NUMERO A SER INSERIDO NA LISTA \n");
							scanf("%d",&x);
							Inserir(lista,x);
							break;
					case 3: 
							printf("DIGITE O NUMERO A SER INSERIDO NO MEIO DA LISTA \n");
							scanf("%d",&x);
							inserirMeio(lista,x);
							break;
					case 4: 
							ListarElementos(lista);
							break;
					
			
				};
		}
	
	return 0;
}

