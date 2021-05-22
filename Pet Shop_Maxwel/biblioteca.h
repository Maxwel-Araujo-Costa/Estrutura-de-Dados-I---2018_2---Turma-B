#define MAX 10

typedef struct {
	char nome[40];
	char sexo;
	int idade;
	char tipo[50];
}PetShop;

typedef struct {
	PetShop listinha[MAX];
	int numero_elementos;
}LISTA;

void iniciaLista (LISTA *lista);

int getNumeroElementosLista (LISTA lista);

void imprimeLista (LISTA lista);

int buscaPrimeiraOcorrenciadeNome(LISTA lista, char nome[40]);

int buscaPrimeiraOcorrenciadeTipo(LISTA lista, char tipo[50]);

int insere(LISTA *lista, int posicao, PetShop registro);

int excluiPrimeiraOcorrenciadeNome(LISTA *lista, char nome[40]);

int excluiPrimeiraOcorrenciadeTipo(LISTA *lista, char tipo[50]);

int excluiElementoPorPosicao(LISTA *lista, int posicao);


