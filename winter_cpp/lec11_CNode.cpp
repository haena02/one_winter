#include"len11_CNode.h"


CNode::CNode() {

}
CNode::~CNode() {

}
CNode::CNode(const int& key)  // 복사 생성자
	:key(key), next(nullptr)
{

}
void CNode::setKey(const int& key) {
	this->key = key;
}
int CNode::getKey() {
	return key;
}
void CNode::setNext(CNode* next) {
	this->next = next;
}
CNode* CNode::getNext() {
	return next;
}