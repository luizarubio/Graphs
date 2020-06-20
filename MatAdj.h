#include <stdio.h>
#include <stdlib.h>
#define MAX 150

struct node{
	int pais[200];
	int qtdPais;
	int valor;
} Node;

void InintMat(int (*mat[150][150]), int node);
void Remove (int (*mat[150][150]), int v1, int v2);
void Connect(int (*mat[150][150]), int v1, int v2);
void Print (int (*mat[150][150]), int node);
