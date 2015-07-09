/*
	File: unionSet.h
	Project: MinCut
	Author: Tianyao Chen
	Date: July 9, 2015
*/

#ifndef __UNIONSET_H__
#define __UNIONSET_H__

#include <vector>

class unionSet {
protected:
	std::vector<int> father;
	int setCount;

	int getRoot(int);	//Get the root of a specified element.

public:
	unionSet();	//Initialize the object with default value.

	unionSet(int);	//Initialize the object with the number of the elements.
	
	void initialize(int);	//Initialize the object with the number of the elements.

	void unionTwoSets(int, int);	//Union two sets represented by two parameters.

	bool isSameSet(int, int);	//Check if two elements are in the same set.

	int countSets();	//Count the sets.
};

#endif
