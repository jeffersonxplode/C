#include <string.h>
#include <stdio.h>
#include <stdlib.h>


struct ListaDuplaNo {

    int x;
    struct ListaDuplaNo *proximo,*anterior;

};



struct ListaDupla {

    struct ListaDuplaNo *inicio,*fim;

};

 

void inserirMeio(struct ListaDupla * lista, int n){ /*ARRUMADO!!! */
	
	struct ListaDuplaNo *aux;  /* Criando uma Auxiliar*/
	aux = lista->inicio; /* Apontando a aux para o inicio para percorrer*/
	int cont = 0; 
	int x = 0;
	
	while (aux != NULL){
		
		aux = aux->proximo;
		cont++; /* Contando quantos elementos tem */
		
		}
	
	if (cont % 2 == 0){  /* Checando a metade da lista*/
		
		cont = cont/2 - 1;
		
		}
	else {
		
		cont = (cont + 2)/2 - 1;
		
		}

	free(aux); /*Liberando Aux ja que não vai mais usar*/
	
	struct ListaDuplaNo * aux2; /* Criando outra auxiliar para fazer outra busca*/
	aux2 = lista->inicio;
	
	while (x != cont){ /*Vai parar exatamente na metade*/
		
		x++;
		aux2 = aux2->proximo; 
		
		
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


void Inserir (struct ListaDupla * lista, int n){ /*Funcionando */
	
	struct ListaDuplaNo *novo;
	novo = (struct ListaDuplaNo*)malloc(sizeof(struct ListaDuplaNo));
	novo->x = n;
	
	if(lista->inicio == NULL){ /*NÃO SEI PQ ESSA CONDIÇÃO NÃO FUNCIONA */
		

		novo->x = n;
		novo->anterior = NULL;
		lista->inicio = novo;
		lista->fim = novo;
		lista->fim->proximo = NULL;
		
	}
	else{
		novo = (struct ListaDuplaNo*)malloc(sizeof(struct ListaDuplaNo));
		novo->x = n;
		novo->anterior = lista->fim;
		lista->fim->proximo = novo;
		lista->fim = novo;
		lista->fim->proximo = NULL;	
	}
}

/*CRIEI POIS FUNÇÃO INSERIR NAO ENTRA NO IF INICIAL */

void CriarLista (struct ListaDupla * lista, int n){ /*Funcionando */
	
	struct ListaDuplaNo *novo;
	novo = (struct ListaDuplaNo*)malloc(sizeof(struct ListaDuplaNo));
	novo->x = n;
	novo->anterior = NULL;
	lista->inicio = novo;
	lista->fim = novo;
	lista->fim->proximo = NULL;
}

void ListarElementos (struct ListaDupla * lista){ /*Funcionando */
	
	struct ListaDuplaNo *aux;
	aux = lista->inicio;
	
	while(aux != NULL){
		
		printf("NUMERO: %d \n",aux->x);
		aux = aux->proximo;
		
		
		}
}


void inserirOrdenado(struct ListaDupla * lista, int n) { /*FUNCIONANDO*/
	
	
	if(lista->inicio == NULL){
		
		CriarLista(lista,n);
		
		}
	
	else{
	
		struct ListaDuplaNo *aux;
		aux = lista->inicio;
		struct ListaDuplaNo *novo;
		novo = (struct ListaDuplaNo*)malloc(sizeof(struct ListaDuplaNo));
		
		if (n > lista->fim->x){
			novo->x = n;
			novo->proximo = NULL;
			novo->anterior = lista->fim;
			lista->fim->proximo = novo;	
		}
		else {
		
			while (aux != NULL) {
				
					if (n < lista->inicio->x ){
							novo->x = n;
							novo->proximo = lista->inicio;
							novo-> anterior = NULL;
							lista->inicio->anterior = novo;
							lista->inicio = novo;
							break;			
						}
					
					else if(n > aux->anterior->x && n < aux->proximo->x){
							novo->x = n;
							novo->proximo = aux->proximo;
							novo->anterior = aux;
							aux->proximo->anterior = novo;
							aux->proximo = novo;
							break;
						}	
					aux = aux->proximo;			
			}
		}
	}
}


void inverter(struct ListaDupla * lista){
	
		struct ListaDupla *listan;
		listan = (struct ListaDupla*)malloc(sizeof(struct ListaDupla));
		struct ListaDuplaNo *aux;
		aux = lista->fim;
		int x = 0;
		
		
		while(aux!=NULL){

			
			if(x==0){
			
				CriarLista (listan, aux->x);
				aux = aux->anterior;
				x++;
			}
			
			
			else {
				
				Inserir(listan, aux->x);
				aux = aux->anterior;	
				
			}
			
			
		}

		*lista = *listan;
		free(listan);
}


void removerDuplicados(struct ListaDupla * lista) { /* NÃO FUNCIONA */
	
		struct ListaDuplaNo *aux, *aux2, *aux3;
		aux = lista->inicio;
		
		while(aux != NULL){
			
			aux2 = aux->proximo;
			
			
			while(aux2!=NULL){
				
				if (aux->x == aux2->x){
					
					aux3 = aux2;
					aux2 = aux2->proximo;
					aux3->proximo->anterior = aux3->anterior;
					aux3->anterior = aux3->proximo;
					free(aux3);
					aux3 = NULL;

				}
				
				else if (aux->x == aux2->x && aux2 == lista->fim){					
					aux3 = aux2;
					aux2 = aux2->proximo;
					aux3->anterior->proximo = NULL;					
					free(aux3);
					aux3 = NULL;
				}
				
				else {
					aux2 = aux2->proximo;
				}
		}
			aux = aux->proximo;
			
	}
		
}


struct ListaDupla * moverNumerosMaioresQueN(struct ListaDupla * original, int n){
	
	struct ListaDupla *listan;
	listan = (struct ListaDupla*)malloc(sizeof(struct ListaDupla));
	struct ListaDuplaNo *aux;
	aux = original->inicio;
	int x = 0;
	
	while (aux!=NULL){
		
		if (aux->x > n && x == 0){
			
			CriarLista (listan, aux->x);
			aux = aux->proximo;
			x++;
		}	
			
		else if (aux->x > n && x!= 0) {
			
			Inserir(listan, aux->x);
			aux = aux->proximo;
			
			}	
		
		else {
			
			aux = aux->proximo;
			
			}
		}
	
	return listan;
		
}



void ordenar(struct ListaDupla * lista){
	
	struct ListaDuplaNo *aux;
	struct ListaDupla *listan;
	listan = (struct ListaDupla*)malloc(sizeof(struct ListaDupla));
	aux = lista->inicio;
	listan->inicio = NULL;
	
	while(aux != NULL){
		inserirOrdenado(listan,aux->x);
		aux = aux->proximo;
		
		}
	*lista = *listan;
	free(listan);
	
}








int main(int argc, char **argv)
{
	
	struct ListaDupla *lista;
	lista = (struct ListaDupla*)malloc(sizeof(struct ListaDupla));
	lista->inicio = NULL; /*GAMBIARRA?!?!?! */
	int op = 1;
	int x;
		
		while(op != 0){
			
				
				printf("\n DIGITE 1 PARA CRIAR NOVA LISTA \n DIGITE 2 PARA INSERIR NOVO ELEMENTO NA LISTA \n DIGITE 3 PARA INSERIR NO MEIO DA LISTA \n DIGITE 4 PARA LISTAR OS ELEMENTOS \n DIGITE 5 PARA COLOCAR UM ELEMENTO ORDENADO NA LISTA \n DIGITE 6 PARA INVERTER A LISTA \n DIGITE 7 PARA REMOVER REPETIDOS \n DIGITE 8 PARA SEPARAR OS NUMERO MAIORES QUE N \n DIGITE 9 PARA ORDENAR A LISTA \n DIGITE 0 PARA SAIR \n");
				scanf("%d",&op);
				
				switch(op) {
					
					case 1: 
							printf("DIGITE O NUMERO DO PRIMEIRO ELEMENTO DA LISTA \n");
							scanf("%d",&x);
							CriarLista(lista,x); /*Funcionando */  /*DESCONSIDERAR*/
							break;
					case 2:
							printf("DIGITE O NUMERO A SER INSERIDO NA LISTA \n");
							scanf("%d",&x);
							Inserir(lista,x); /*Funcionando */
							break; 
					case 3: 
							printf("DIGITE O NUMERO A SER INSERIDO NO MEIO DA LISTA \n");
							scanf("%d",&x);
							inserirMeio(lista,x); /*ARRUMADO!!!*/
							break;
					case 4: 
							ListarElementos(lista); /*Funcionando */
							break;
					case 5:
							printf("DIGITE O NUMERO A SER INSERIDO NO MEIO DA LISTA NA ORDEM \n");
							scanf("%d",&x);
							inserirOrdenado(lista,x); /*ARRUMADO!!!*/
							break;	
					case 6:
							printf("INVERTENDO A LISTA \n"); /*FUNCIONANDO!*/
							inverter(lista);
							break;
					case 7:
							printf("TIRANDO OS REPETIDOS \n"); /*PROBLEMA*/
							removerDuplicados(lista);		
							break;
					case 8:
							printf("RETORNANDO UMA LISTA COM OS NUMERO MAIORES QUE N: DIGITE N \n"); /*FUNCIONANDO*/
							scanf("%d",&x);
							ListarElementos(moverNumerosMaioresQueN(lista,x));
							break;
					case 9:
							printf("ORDENANDO A LISTA \n");  /*NÃO FUNCIONA*/
							ordenar(lista);
							break;
				};
		}
	
	return 0;
}

