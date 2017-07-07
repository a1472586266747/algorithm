#include<iostream>
#include<string>
#include<unordered_map>
#include<utility>
#include<vector>
using namespace std;

struct ListNode {
	ListNode(int val) {
		value = val;
		this->next = NULL;
	}
	ListNode() {
		value = 0;
		this->next = NULL;
	}
	int value;
	ListNode *next;
};

ListNode *mid(ListNode *head) {
	ListNode *Chaser = head, *Runner = head;
	if (head == NULL) {
		return NULL;
	}
	while (Runner->next && Runner->next->next ){
		Runner = Runner->next->next;
		Chaser = Chaser->next;
	}
	return Chaser;

}
ListNode *reverse(ListNode *head) {
	ListNode *cur = head->next;
	ListNode *curNext = cur->next;
	ListNode *temp;
	if (head == NULL) {
		return NULL;
	}
	head->next = NULL;
	cur->next = head;
	while (curNext->next) {
		temp = cur;
		cur = curNext;
		curNext = curNext->next;
		cur->next = temp;
	}
	curNext->next = cur;
	return curNext;

}

void reverseTraverse(ListNode *head) {
	if (head == NULL) {
		return;
	}
	else
		reverseTraverse(head->next);
	cout << head->value<<" ";
}


int main() {

	ListNode *head = new ListNode();
	ListNode *cur = new ListNode();
	ListNode *nodeNext;


	int n;

	cin >> n;
	head->value = n;
	cur = head;

	while (cin >> n) {
		nodeNext = new ListNode();
		cur->next = nodeNext;
		nodeNext->value = n;
		nodeNext->next = NULL;
		cur = cur->next;
	}
	cur = head;

	while (cur) {
		cout << cur->value << " ";
		cur = cur->next;
	}

	/*
	cur = mid(head);
	cout << cur->value;

	cur = reverse(head);
	while (cur) {
	cout << cur->value << " ";
	cur = cur->next;
	}
	*/
	cout << endl;
	reverseTraverse(head);


	return 0;
}
