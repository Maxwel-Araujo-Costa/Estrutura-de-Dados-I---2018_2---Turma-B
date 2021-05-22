// Maxwel Araujo Costa
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include "biblioteca.h"

void main () {
	setlocale (LC_ALL, "Portuguese");
	
	LISTA pet_lista;
	
	iniciaLista (&pet_lista);
	
	PetShop pet_registro;
	
	strcpy(pet_registro.nome, "Mimi");
	strcpy(pet_registro.tipo, "Gato");
	pet_registro.sexo = 'f';
	pet_registro.idade = 4;
	insere(&pet_lista, 0, pet_registro);
	
	strcpy(pet_registro.nome, "Marvin");
	strcpy(pet_registro.tipo, "Cachorro");
	pet_registro.sexo = 'm';
	pet_registro.idade = 5;
	insere(&pet_lista, 1, pet_registro);
	
	strcpy(pet_registro.nome, "Bolacha");
	strcpy(pet_registro.tipo, "Cachorro");
	pet_registro.sexo = 'm';
	pet_registro.idade = 2;
	insere(&pet_lista, 2, pet_registro);
	
	strcpy(pet_registro.nome, "Coxinha");
	strcpy(pet_registro.tipo, "Gato");
	pet_registro.sexo = 'f';
	pet_registro.idade = 3;
	insere(&pet_lista, 3, pet_registro);
	
	strcpy(pet_registro.nome, "Amendoim");
	strcpy(pet_registro.tipo, "Gato");
	pet_registro.sexo = 'm';
	pet_registro.idade = 1;
	insere(&pet_lista, 4, pet_registro);
	
	strcpy(pet_registro.nome, "Godzila");
	strcpy(pet_registro.tipo, "Cachorro");
	pet_registro.sexo = 'm';
	pet_registro.idade = 5;
	insere(&pet_lista, 5, pet_registro);
	
	strcpy(pet_registro.nome, "Biscoito");
	strcpy(pet_registro.tipo, "Gato");
	pet_registro.sexo = 'm';
	pet_registro.idade = 10;
	insere(&pet_lista, 6, pet_registro);
	
	strcpy(pet_registro.nome, "Bacon");
	strcpy(pet_registro.tipo, "Cachorro");
	pet_registro.sexo = 'm';
	pet_registro.idade = 8;
	insere(&pet_lista, 7, pet_registro);
	
	strcpy(pet_registro.nome, "Batata");
	strcpy(pet_registro.tipo, "Gato");
	pet_registro.sexo = 'f';
	pet_registro.idade = 7;
	insere(&pet_lista, 8, pet_registro);
	
	strcpy(pet_registro.nome, "Dengoso");
	strcpy(pet_registro.tipo, "Gato");
	pet_registro.sexo = 'm';
	pet_registro.idade = 11;
	insere(&pet_lista, 9, pet_registro);
	
	imprimeLista(pet_lista);
	
	printf("\nA primeira ocorrência de Cachorro, está na posição: %d\n\n",
			buscaPrimeiraOcorrenciadeTipo(pet_lista, "Cachorro"));
			
	printf("Excluindo Amendoim\n");
	excluiPrimeiraOcorrenciadeNome(&pet_lista, "Amendoim");
	imprimeLista(pet_lista);
	
	printf("Excluindo elemento da posição 6\n");
	excluiElementoPorPosicao(&pet_lista, 6);
	imprimeLista(pet_lista);
	
	printf("Inserindo novo registro na posição 2\n");
	strcpy(pet_registro.nome, "Bolo Fofo");
	strcpy(pet_registro.tipo, "Gato");
	pet_registro.sexo = 'm';
	pet_registro.idade = 9;
	insere(&pet_lista, 2, pet_registro);
	imprimeLista(pet_lista);
}
