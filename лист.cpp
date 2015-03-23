/** 
\file: лист.cpp
*/

#include "лист.h"


MyList::MyList(void)
{
	pNode_ = NULL;
	size_ = 0;
}


MyList::~MyList(void)
{
	if (size_ > 0)
		clear();
}


bool MyList::isEmpty(void) const
{
	return size_ == 0;
}


int MyList::getSize(void) const
{
	return size_;
}

/*! \brief vstavka elementa	*/
void MyList::insertItem(int index, int data)
{
	Node *temp = pNode_;
	if (index == 0)
		pNode_ = new Node(data, pNode_);
	else
	{
		for (int i = 0; i < index - 1; i++)
			temp = temp->next_;
		temp->next_ = new Node(data, temp->next_);
	}
	size_++;
}

/*! \brief udalenie elementa	*/
void MyList::deleteItem(int index)
{
	Node *temp = pNode_, *prev = NULL;
	if (index == 0)
		pNode_ = pNode_->next_;
	else
	{
		for (int i = 0; i < index; i++)
		{
			prev = temp;
			temp = temp->next_;
		}
		prev->next_ = temp->next_;
	}
	delete temp;
	size_--;
}

/*! \brief poluchenie informacii iz elementa	*/
int MyList::getData(int index)
{
	Node *temp = pNode_;
	for (int i = 0; i < index; i++)
		temp = temp->next_;
	return temp->data_;
}

/*! \brief osvobozhdenie pamyati	*/
void MyList::clear(void)
{
	Node *temp = pNode_;
	if (size_ > 0)
	{
		while (temp->next_)
		{
			temp = temp->next_;
			delete pNode_;
			pNode_ = temp;
		}
		delete pNode_;
	}
	pNode_ = NULL;
	size_ = 0;
}
