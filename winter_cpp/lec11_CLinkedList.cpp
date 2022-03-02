#include "lec11_CLinkedList.h"
#include <iostream>

using namespace std;

CLinkedList::CLinkedList()
	:head(new CNode()),tail(new CNode)
{
	head->setNext(tail);
	tail->setNext(tail);
}
CLinkedList::~CLinkedList(){
	delete_all();
	delete head;
	delete tail;

}
CNode* CLinkedList::getHead(){
	return head;
}
CNode* CLinkedList::getTail() {
	return tail;
}

void CLinkedList::insert1(const int& key)
{
	CNode* temp = new CNode;
	temp->setNext(head->getNext());
	head->setNext(temp);
}

void CLinkedList::showList()
{
	CNode* s = head->getNext();
	while (s != tail) {
		cout << s->getKey();
		s = s->getNext();
	}
}

void CLinkedList::delete_all()
{
	CNode* t = head->getNext();
	while (t != tail) {
		CNode* s = t;
		t = t->getNext();
		delete s;

	}
	head->setNext(tail);

}
