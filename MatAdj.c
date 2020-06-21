#include "MatAdj.h"

void InitMat(Tarefa tarefas[], int qtdTarefas){
    int i, j;
    for (i = 0; i < qtdTarefas; i++) {
        tarefas[i].quantidade_dependencias = 0;
		tarefas[i].status;
        for (j = 0; j < MAX; j++) {
            tarefas[i].dependencias[j] = -1;
        }
    }
}
/*
void Remove (int (*mat[100][100]), int v1, int v2){
    mat[v1][v2]=0;
}
*/



void Connect(Tarefa tarefas[], int pai, int filho){
    tarefas[filho].quantidade_dependencias++;
    tarefas[filho].dependencias[(tarefas[filho].quantidade_dependencias) - 1] = pai;
}

void InitVisitados(int visitados[]){
	for (int i = 0; i < MAX; ++i)
	{
		visitados[i] = -1;
	}
}


void Print (Tarefa tarefas[], int qtdTarefas){
    int i, j;
    for (i = 0; i < qtdTarefas; i++) {
    	printf("Tarefa %d tem %d pendencias\n",i, tarefas[i].quantidade_dependencias);
//		tarefas[i].status;
        for (j = 0; j < tarefas[i].quantidade_dependencias; j++) {
            printf("%d\n",tarefas[i].dependencias[j]);
        }
    }
}

//[-1,-1,-1,...,-1]
int Check_Cycle(int visitados[], Tarefa tarefas[], int atual){
	int i = 0;
	if(visitados[atual] == 1)
	{
		return 1;				// Detectado Ciclo
	}

	visitados[atual] = 1;		// Marca item a ser verificado como visitado

	// Verifica todas s dependências da tarefa atual
	//
	for (i = 0; i < tarefas[atual].quantidade_dependencias; ++i)
	{
		if (Check_Cycle(visitados, tarefas, tarefas[atual].dependencias[i]))
		{
			return 1;				// Detectado Ciclo de uma dependência da tarefa atual
		}
	}

	visitados[atual] = 0;
	return 0;	// Nenhum ciclo detectado

}



/*int Check_cicle (Node nodes[], Node visitados[], int atual, int qtdNodes){
	visitados[atual] = 1;
	//percorre todos os visitados na posição do pai do elemento atual e vê se ele já foi visitado
	for(int j=0; j < node[atual].qtdPais; j++){
		if(visitados[j] == 1) return 1;
	}

	for(int j=0; j < node[atual].qtdPais; j++){
		if(Check_cicle(nodes[], visitados[], node[atual].pais[j], qtdNodes)) return 1;
	}else{
		visitados[atual] = 0;
	}


}*/