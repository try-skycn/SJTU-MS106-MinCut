/*
	File: main.cpp
	Project: MinCut
	Author: Tianyao Chen
	Date: July 9, 2015
*/

#include "graph.h"
#include "random.h"
#include <cstdio>

int main() {

	init_rand();

	graph G;

	int n, m;
	scanf("%d%d", &n, &m);
	G.initialize(n);

	int x, y;
	for (int i = 0; i < m; ++i) {
		scanf("%d%d", &x, &y);
		G.pushEdge(x, y);
	}

	double error;
	scanf("%lf", &error);
	printf("%d\n", G.calcMinCut(error));

	return 0;
}
