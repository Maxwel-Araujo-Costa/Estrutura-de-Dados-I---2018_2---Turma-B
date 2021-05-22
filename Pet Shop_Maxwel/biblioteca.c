#include <stdio.h>
#include <string.h>
#include "biblioteca.h"

void iniciaLista (LISTA *lista) {
	lista->numero_elementos = 0;
}

int getNumeroElementosLista (LISTA lista){
	return lista.numero_elementos;
}

void imprimeLista (LISTA lista) {
	int i;
	for (i=0; i<lista.numero_elementos; i++) {
		printf("Posicao %d\n", i);
		printf("Nome: %s\n", lista.listinha[i].nome);
		printf("Sexo: %c\n", lista.listinha[i].sexo);
		printf("Tipo: %s\n", lista.listinha[i].tipo);
		printf("Idade: %d\n\n", lista.listinha[i].idade);
	}
	printf("Total de elementos: %d\n", lista.numero_elementos);
}

int buscaPrimeiraOcorrenciadeNome(LISTA lista, char nome[40]) {
	int i;
	for (i=0; i<lista.numero_elementos; i++) {
		if(strcmp(lista.listinha[i].nome, nome)==0)
			return i;
	}
	return -1;
}

int buscaPrimeiraOcorrenciadeTipo(LISTA lista, char tipo[50]) {
	int i;
	for (i=0; i<lista.numero_elementos; i++) {
		if(strcmp(lista.listinha[i].tipo, tipo)==0)
			return i;
	}
	return -1;
}

int insere(LISTA *lista, int posicao, PetShop registro) {
	if (lista->numero_elementos == MAX || posicao < 0 || posicao > lista->numero_elementos)
		return 0;
	else {
		int i;
		for(i=lista->numero_elementos; i>posicao; i--){
			lista->listinha[i] = lista->listinha[i-1];
		}
		strcpy(lista->listinha[i].nome, registro.nome);
		strcpy(lista->listinha[i].tipo, registro.tipo);
		lista->listinha[i].sexo = registro.sexo;
		lista->listinha[i].idade = registro.idade;
		
		lista->numero_elementos++;
		return 1;
	}
}

int excluiPrimeiraOcorrenciadeNome(LISTA *lista, char nome[40]) {
	if(lista->numero_elementos == 0)
		return 0;
	
	int i;
	//procurando o valor
	for(i=0; i<lista->numero_elementos; i++){
		if(strcmp(lista->listinha[i].nome, nome)==0){
			int j;
			//deslocando os elementos
			for(j=i; j< lista->numero_elementos-1; j++) {
				lista->listinha[j] = lista->listinha[j+1];
			}
			lista->numero_elementos--;
			return 1;
		}
	}
	return 0;
}

int excluiPrimeiraOcorrenciadeTipo(LISTA *lista, char tipo[50]) {
	if(lista->numero_elementos == 0)
		return 0;
	
	int i;
	//procurando o valor
	for(i=0; i<lista->numero_elementos; i++){
		if(strcmp(lista->listinha[i].tipo, tipo)==0){
			int j;
			//deslocando os elementos
			for(j=i; j< lista->numero_elementos-1; j++) {
				lista->listinha[j] = lista->listinha[j+1];
			}
			lista->numero_elementos--;
			return 1;
		}
	}
	return 0;
}

int excluiElementoPorPosicao(LISTA *lista, int posicao){
	if(posicao< 0 || posicao > lista->numero_elementos)
		return 0;
	else {
		int i;
		for(i=posicao; i< lista->numero_elementos-1; i++){
			lista->listinha[i]= lista->listinha[i+1];
		}
		lista->numero_elementos--;
		return 1;
	}
}


