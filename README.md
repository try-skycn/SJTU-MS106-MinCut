# MinCut
A randomized minimum cut algorithm form "Randomized Algorithm".

# Introduction

The program is to calculate the minimum cut of a given graph.

It run with a randomized algprithm which randomly pick one edge every step and merge two ends until there are just two vertices in the graphs then returns the number of remained edges.

It can be proved that the probability for such algorithm to return a RIGHT answer is greater or equal to '2 / ( V * ( V - 1 ) )' where 'V' represent the number of vertices in the graph.

For a higher probability to get a RIGHT answer, we can run the same program many times.

# Input

The input of the program have two parts.

The first part represent a graph.

For the first line, user should enter two integers `V` and `E`.

For the next `E` lines, user should enter two integers eachline `u` and `v`, which stand for an edge connect two vertices `u` and `v`.

The second part contains just one real number between `0.0`(open end) and `1.0`(closed end but not recommended) which represents a probability for the program to return an WRONG answer.

# File Structure

Sources files are in the src/ directory.

Head files are in the include/ directory.

Executable file is in the bin/ directory.

# Make

Befor you make, make sure that there is a directory obj/ in your project directory.

"makefile" is with sources files.
