#include <stdio.h>
#include "wallace.h"

int main(int argc, char const *argv[])
{
	//Pega os dados das bandas
	preencheBanda();

	//Pesquisa pelo ranking da banda
	rankingBanda();

	//Pesquisa pelo tipo de musica
	musicaBanda();

	//Pesquisa pelo nome da banda
	nomeBanda();

	return 0;
}