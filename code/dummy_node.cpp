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

int main() {
	ListNode *dummyA = new ListNode(0);
	ListNode *dummyB = new ListNode(0);
	ListNode *head = new ListNode();
	ListNode *curA = new ListNode();
	ListNode *curB = new ListNode();
	ListNode *nodeNext;

	int x = 0;
	int n;
	cin >> x;
	cin >> n;
	head->value = n;
	curA = head;

	while (cin >> n) {
		nodeNext = new ListNode();
		curA->next = nodeNext;
		nodeNext->value = n;
		nodeNext->next = NULL;
		curA = curA->next;
	}
	curA = head;
	while (curA) {
		cout << curA->value << " ";
		curA = curA->next;
	}

	return 0;
}
