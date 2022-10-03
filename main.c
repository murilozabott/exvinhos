#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vinho.h"

read_csv(FILE *input, vinho *vinhos, int *n_read){
	int allocated_space = 50;
	*n_read = 0;
	vinhos = (vinho*) malloc(allocated_space * sizeof(vinho));
	
	// consome a linha 1;
	while(1){
		// Como o número de vinhos do arquivo é desconhecido, vai aumentando o vetor caso leia mais do que foi previamente alocado
		if(n_read == allocated_space){
			allocated_space += 20;
			vinhos = (vinho*) realloc(vinhos, allocated_space * sizeof(vinho));
		}
		// LÊ
		*n_read++;
	}

	if(allocated_space > n_read)
		vinhos = (vinho*) realloc(vinhos, n_read * sizeof(vinho));
}

void search(char *field, target){
	print_vinho(&);
	printf("Total de vinhos encontrados: %d\n", n_found);
}

void ordena(vinho *vinhos, int size, fun *compare){

}

int main(){
	// Leitura do arquivo para array de vinhos
	char fileName[50];
	scanf("%s", fileName);
	FILE *input = fopen(fileName);
	vinho *vinhos;
	int size;
	read_csv(input, vinhos, &size);
	// Fim leitura

	int n_buscas;
	scanf("%d \n", &n_buscas);

	for(int i = 0, char field[50]; i < n_buscas; i++){
		fscanf(input, "%s ", field);
	}

	fclose(input);
	free(vinhos);
}