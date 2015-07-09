/*
	File: unionSet.cpp
	Project: MinCut
	Author: Tianyao Chen
	Date: July 9, 2015
*/

#include "unionSet.h"

int unionSet::getRoot(int index) {
	if (father[index] >= 0) {
		father[index] = getRoot( father[index] );
		return father[index];
	} else {
		return index;
	}
}

unionSet::unionSet(int _size) : size(_size), setCount(_size) {
	father = new int[size];
	for (int i = 0; i < size; ++i) {
		father[i] = -1;
	}
}

void unionSet::unionTwoSets(int set1, int set2) {
	int root1 = getRoot(set1);
	int root2 = getRoot(set2);
	if (root1 == root2) {
		return;
	}
	if (father[root1] < father[root2]) {
		father[root2] = father[root1];
	} else {
		father[root1] = father[root2];
	}
}

bool unionSet::isSameSet(int set1, int set2) {
	return getRoot(set1) == getRoot(set2);
}
