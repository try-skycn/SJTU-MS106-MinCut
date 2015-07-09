/*
	File: graph.h
	Project: MinCut
	Author: Tianyao Chen
	Date: July 9, 2015
*/

#ifndef __GRAPH_H__
#define __GRAPH_H__

#include <utility>
#include <vector>
#include "unionSet.h"

class graph{
protected:
	typedef std::pair<unsigned int, unsigned int> uintPair;

	std::vector<uintPair> edges;

	unsigned int size;

public:
	graph();	//Initialize the graph with default settings.

	void initialize(unsigned int);	//Initialize the graph with the size represented by the first parameter.

	void pushEdge(unsigned int, unsigned int);

	unsigned int calcMinCut();

	unsigned int calcMinCut(double);	//Get the size of minimum cut under the error probability represented by the first parameter.
};

#endif
