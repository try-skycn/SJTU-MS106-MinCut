/*
	File: random.cpp
	Project: MinCut
	Author: Tianyao Chen
	Date: July 9, 2015
*/

#include <cstdlib>
#include <ctime>

void init_rand(){
	srand( (unsigned int) time(0) );
}

int rand_range(int n){
	return rand() % n;
}

int random_between(int l, int r){
	return l + rand_range(r - l);
}
