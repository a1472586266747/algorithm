#include<iostream>
#include<string>
#include<unordered_map>
#include<utility>
#include<vector>
#include<stack>
#include<queue>
using namespace std;



int main() {
	stack<int> valstack;
	stack<int> maxstack;
	int val;

	while (cin >> val) {
		if (maxstack.empty() || maxstack.top() <= val) {
			maxstack.push(val);
		}
		valstack.push(val);
	}



	while (!valstack.empty()) {
		cout << "pop : " << valstack.top() << " max:" << maxstack.top() << endl;
		if (valstack.top() == maxstack.top()) {
			maxstack.pop();
		}
		valstack.pop();
	}

	cout << endl;



	return 0;
}
