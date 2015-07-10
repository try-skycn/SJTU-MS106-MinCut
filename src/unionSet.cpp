/*
	File: unionSet.cpp
	Project: MinCut
	Author: Tianyao Chen
	Date: July 9, 2015
*/

#include "unionSet.h"

int unionSet::getRoot(unsigned int index) {
	if (father[index] >= 0) {
		father[index] = getRoot( father[index] );
		return father[index];
	} else {
		return index;
	}
}

unionSet::unionSet() : setCount(0) {
}

unionSet::unionSet(unsigned int _size) {
	initialize(_size);
}

void unionSet::initialize(unsigned int _size) {
	setCount = _size;
	father.resize(_size);
	for (int i = 0; i < _size; ++i) {
		father[i] = -1;
	}
}

void unionSet::unionTwoSets(unsigned int set1, unsigned int set2) {
	int root1 = getRoot(set1);
	int root2 = getRoot(set2);
	if (root1 == root2) {
		return;
	}
	if (father[root1] < father[root2]) {
		father[root1] += father[root2];
		father[root2] = root1;
	} else {
		father[root2] += father[root1];
		father[root1] = root2;
	}
	--setCount;
}

bool unionSet::isSameSet(unsigned int set1, unsigned int set2) {
	return getRoot(set1) == getRoot(set2);
}

int unionSet::countSets() const {
	return setCount;
}
