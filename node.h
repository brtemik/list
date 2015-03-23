
#pragma once

#include <cstdlib>


class Node
{
public:
	Node(void);
	Node(int);
	Node(int, Node*);

	friend class MyList;

private:
	int data_;
	Node* next_;
};