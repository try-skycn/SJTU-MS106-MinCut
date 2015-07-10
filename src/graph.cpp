/*
	File: graph.cpp
	Project: MinCut
	Author: Tianyao Chen
	Date: July 9, 2015
*/

#include "graph.h"
#include "random.h"
#include <algorithm>
#include <iostream>
#include <climits>

graph::graph() : size(0) {
}

void graph::initialize(unsigned int _size) {
	size = _size;
	edges.resize(0);
}

void graph::pushEdge(unsigned int x, unsigned int y) {
	edges.push_back( uintPair(x, y) );
}

unsigned int graph::calcMinCut() {
	std::vector<uintPair> randEdgeSeq( edges );
	unionSet vertexStates( size );

	while ( vertexStates.countSets() > 2 ) {
		unsigned int edgeSize = randEdgeSeq.size();
		unsigned int index = rand_range( edgeSize );

		uintPair nowEdge = randEdgeSeq[ index ];
		vertexStates.unionTwoSets( nowEdge.first, nowEdge.second );

		swap( randEdgeSeq[index], randEdgeSeq[edgeSize - 1] );
		randEdgeSeq.pop_back();
	}

	unsigned int ans = 0;
	for(std::vector<uintPair>::iterator it = randEdgeSeq.begin(); it != randEdgeSeq.end(); ++it) {
		if ( !vertexStates.isSameSet(it->first, it->second) ) {
			++ans;
		}
	}

	return ans;
}

unsigned int graph::calcMinCut(double error) {
	const double unitError = 1.0 - 2.0 / ( size * (size - 1) );
	double totalError = 1.0;
	unsigned int ans = (unsigned int)ULONG_MAX;

	do {
		ans = std::min( ans, calcMinCut() );
		totalError *= unitError;
	} while (totalError >= error);

	return ans;
}
