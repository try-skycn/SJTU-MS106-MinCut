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

	int getRoot(unsigned int);	//Get the root of a specified element.

public:
	unionSet();	//Initialize the object with default value.

	unionSet(unsigned int);	//Initialize the object with the number of the elements.
	
	void initialize(unsigned int);	//Initialize the object with the number of the elements.

	void unionTwoSets(unsigned int, unsigned int);	//Union two sets represented by two parameters.

	bool isSameSet(unsigned int, unsigned int);	//Check if two elements are in the same set.

	int countSets() const;	//Count the sets.
};

#endif
