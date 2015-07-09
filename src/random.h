/*
	File: random.h
	Project: MinCut
	Author: Tianyao Chen
	Date: July 9, 2015
*/

#ifndef __RANDOM_H__
#define __RANDOM_H__

void init_rand();
int rand_range(int);	//Get a random number between 0 and the first parameter.
int rand_between(int, int);	//Get a random number between two parameters. Notice that the second parameter represent an open end.

#endif
