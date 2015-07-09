/*
	File: unionSet.h
	Project: MinCut
	Author: Tianyao Chen
	Date: July 9, 2015
*/

#ifndef __UNIONSET_H__
#define __UNIONSET_H__

class unionSet {
protected:
	int *father;
	int size, setCount;

	int getRoot(int);	//Get the root of a specified element.

public:
	unionSet(int);	//Initialize the object with the number of elements.

	void unionTwoSets(int, int);	//Union two sets represented by two parameters.

	bool isSameSet(int, int);	//Check if two elements are in the same set.
};

#endif
