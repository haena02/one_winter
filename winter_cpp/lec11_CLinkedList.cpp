#include "lec11_CLinkedList.h"

CLinkedList::CLinkedList()
	:head(new CNode()),tail(new CNode)
{
	head->setNext(tail);
	tail->setNext(tail);
}
CLinkedList::~CLinkedList(){}
CNode* CLinkedList::getHead(){
	return head;
}
CNode* CLinkedList::getTail() {
	return tail;
}