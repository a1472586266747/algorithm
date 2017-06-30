#include<iostream>
#include<string>
#include<unordered_map>
#include<utility>
#include<vector>
#include<stack>
#include<queue>
#define MAX 1024

using namespace std;
/*

BFS 模板

void BFS(int s) {
	queue<int>q;
	q.push(s);

	while (!q.empty()) {
		int top;
		top = q.front();
		q.pop();
		將top相鄰的且未曾入queue的 皆入queue 標示成已入queue
	}
}

*/



bool samemap(int a[][3],int b[][3]) {
	for (int i = 1; i < 4; i++)
		for (int j = 1; j < 4; j++)
			if (a[i][j] != b[i][j]) return 0;
	return 1;

}



int main() {

	int ini[4][4] = {0};
	int fin[4][4] = {0};

	for (int i = 1; i < 4; i++)
		for (int j = 1; j < 4; j++)
			cin >> ini[i][j];

	for (int i = 1; i < 4; i++)
		for (int j = 1; j < 4; j++)
			cin >> fin[i][j];





	return 0;
}
