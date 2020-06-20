
void InintMat(int (*mat[100][100]), int node){
    int i, j;
    for (i = 0; i < node; i++) {
        for (j = 0; j < node; j++) {
            mat[i][j] = 0;
        }
    }
}

void Remove (int (*mat[100][100]), int v1, int v2){
    mat[v1][v2]=0;
}

void Connect(int (*mat[100][100]), int v1, int v2){
    mat[v1][v2]=1;
}

void Print (int (*mat[100][100]), int node){
    int i,j;
    for (i = 0; i < node; i++) {
        for (j = 0; j < node; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int Check_cicle (Node nodes[], Node visitados[], int atual, int qtdNodes){
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


}