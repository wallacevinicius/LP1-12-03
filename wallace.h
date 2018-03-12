#include <stdlib.h>
#include <string.h>
#define MAX 1
#define MAX_ALUNO 100

//Questao 1
typedef struct {
	char nome[30];
	char endereco[50];
	char matricula[10];
	char curso[30];
}tAluno;

tAluno gAlunos[MAX_ALUNO];

unsigned int consultaAlunosPorCurso(char *curso){
	int i, quant = 0;

	for(i = 0; i < MAX_ALUNO; i++){
		if(!strcmp(gAlunos[i].curso, curso))
			quant++;
	}

	return quant;
}


//Questao 2
typedef struct {
	char nome[50];
	char estilo[30];
	int integrantes;
	int posi;
}tBanda;

tBanda dados[5];

void preencheBanda(){
	int i;

	for(i = 0; i < MAX; i++){
		printf("Digite o nome da banda: ");
		fgets(dados[i].nome, 50, stdin);

		printf("Digite o estilo da banda: ");
		fgets(dados[i].estilo, 30, stdin);

		printf("Digite a quantidade de integrantes: ");
		scanf("%d", &dados[i].integrantes);

		printf("Digite a posicao no ranking: ");
		scanf("%d%*c", &dados[i].posi);
	}

	for(i = 0; i < MAX; i++){
		printf("Banda #%d\n", i+1);
		printf("Nome: %s", dados[i].nome);
		printf("Estilo: %s", dados[i].estilo);
		printf("Quantidade de integrantes: %d\n", dados[i].integrantes);
		printf("Posicao no ranking: %dº Lugar\n", dados[i].posi);
		printf("\n");
	}
	
}

void rankingBanda(){
	int i, posi;

	printf("Digite uma posição no ranking: \n");
	scanf("%d%*c", &posi);

	for(i = 0; i < MAX; i++){
		if(dados[i].posi == posi){
			printf("Banda do %dº Lugar\n", posi);
			printf("Nome: %s", dados[i].nome);
			printf("Estilo: %s", dados[i].estilo);
			printf("Quantidade de integrantes: %d\n", dados[i].integrantes);
			printf("\n");
		}
	}
}

void musicaBanda(){
	int i;
	char musica[30];

	printf("Digite um tipo de musica: \n");
	fgets(musica, 30, stdin);

	for(i = 0; i < MAX; i++){
		if(!strcmp(dados[i].estilo, musica)){
			printf("Resultado para: %s", musica);
			printf("Nome: %s", dados[i].nome);
			printf("Estilo: %s", dados[i].estilo);
			printf("Quantidade de integrantes: %d\n", dados[i].integrantes);
			printf("Posicao no ranking: %dº Lugar\n", dados[i].posi);
			printf("\n");
		}
	}
}

void nomeBanda(){
	int i;
	char nome[30];

	printf("Digite um nome de banda: \n");
	fgets(nome, 30, stdin);

	for(i = 0; i < MAX; i++){
		if(!strcmp(dados[i].nome, nome)){
			printf("Resultado para: %s", nome);
			printf("Nome: %s", dados[i].nome);
			printf("Estilo: %s", dados[i].estilo);
			printf("Quantidade de integrantes: %d\n", dados[i].integrantes);
			printf("Posicao no ranking: %dº Lugar\n", dados[i].posi);
			printf("\n");
		}
	}
}