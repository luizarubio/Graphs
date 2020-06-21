#include "MatAdj.h"

int main(){

    Tarefa tarefas[MAX];
    int visitados[MAX];
    int i,k,j,node,qtdDepend,q,op;
    int v1, v2;
    int qtdTarefas=0;
    int resposta;

// Parâmetros iniciais

    scanf(" %d",&qtdTarefas);
    scanf(" %d",&qtdDepend);

    InitMat(&tarefas,qtdTarefas);

//conecta o grafos com todas as dependencias que forem apresentadas
	for(k=0; k < qtdDepend; k++){
		scanf("%d %d", &v1, &v2);
	    Connect(&tarefas, v1, v2);
	}
//checa se existem ciclos
//Print(&mat, node);
	
	InitVisitados(&visitados);
	//Print(&tarefas, qtdTarefas);

	for(k=0; k < qtdTarefas; k++){
		if (Check_Cycle(&visitados, &tarefas, k))
		{
			resposta = -1;
			printf("%d\n",resposta);
			return 0;
		}
	}

/*
//calcula quanto tempo para executar todas as tarefas
	
	for(int i=0; i<op; i++){
		scanf("%d", &q);
		if(q==1){
		scanf("%d %d ", &v1, &v2);
		Connect(&mat, v1, v2);
		}
		else if (q==2){
		scanf("%d %d ", &v1, &v2);
		Remove(&mat, v1, v2);
		}
		else if(q==3){
		Print(&mat, node);
		printf("\n");
		}
		
	}
*/
return 0;
}
