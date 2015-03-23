
#pragma once

#include "node.h"


class MyList
{
public:
	MyList(void);
	~MyList(void);
	bool isEmpty(void) const;
	int getSize(void) const;
	void insertItem(int, int);
	void deleteItem(int);
	int getData(int);
	void clear(void);

private:
	Node *pNode_;
	int size_;
};
