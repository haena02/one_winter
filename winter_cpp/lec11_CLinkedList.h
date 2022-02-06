#pragma once
#include "len11_CNode.h"

class CLinkedList
{
private:
	CNode* head;
	CNode* tail;
public:
	CLinkedList();
	~CLinkedList();
	CNode* getHead();
	CNode* getTail();
	

};