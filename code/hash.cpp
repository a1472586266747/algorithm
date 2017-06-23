#include<iostream>
#include<string>
#include<unordered_map>
#include<utility>
using namespace std;
/*
input: a string
output: non-unique character

*/


int main() {

	unordered_map<char, int> h;
	unordered_map<char, int>::iterator it;
	string str;

	cin >> str;

	for (int i = 0; i<str.length(); i++) {
		if (h.find(str[i]) != h.end()) {
			h[str[i]]++;
		}
		else
			h.insert(pair<char, int>(str[i], 1));
	}

	it = h.begin();
	for (;it!=h.end();it++) {
		if (it->second > 1)
			cout << it->first << " " << it->second << endl;
		//cout << it->first << " " << it->second << endl;
	}

	return 0;
}
