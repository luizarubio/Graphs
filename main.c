#include "MatAdj.h"

int main(){
    int mat[MAX][MAX];
    int i,k,j,node,qtdDepend,q,op;
    int v1, v2;
    int qtdNodes=0;
    scanf(" %d",&qtdnode);
    scanf(" %d",&qtdDepend);


//conecta o grafos com todas as dependencias que forem apresentadas
	 for(k=0; k<qtdnode; k++){
		scanf("%d %d", &v1, &v2);
	    Connect(&mat, v1, v2);
	}
//checa se existem ciclos
Print(&mat, node);
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
return 0;
}
