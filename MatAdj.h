#include <stdio.h>
#include <stdlib.h>
#define MAX 150

/*struct node{
	int pais[200];
	int qtdPais;
	int valor;
} Node;*/

/*struct dependencia{
	int numero_tarefa;
	dependencia *prox_dependencia;
} Dependencia;*/

typedef struct tarefa{
	int quantidade_dependencias;
	int status; 						// 0: item não finalizado 1: item finalizado
	int dependencias[MAX];
	//Dependencia *lista_dependências;
} Tarefa;


void InitMat(Tarefa tarefas[], int qtdTarefas);
void Remove (int (*mat[150][150]), int v1, int v2);
void Connect(Tarefa tarefas[], int pai, int filho);
void Print (Tarefa tarefas[], int qtdTarefas);
void InitVisitados(int visitados[]);
int Check_Cycle(int visitados[],Tarefa tarefas[], int atual);
