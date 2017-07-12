#include<iostream>
#include<string>
#include<vector>
#define Max 200
/*poj 2386 Lake counting*/
using namespace std;
int N, M;
char maze[Max][Max];
bool f[Max][Max];

void dfs(int i,int j) {
	f[i][j] = 1;
	if (maze[i + 1][j]=='W') {
		if(!f[i + 1][j])
			dfs(i + 1, j);
	}
	if (maze[i][j + 1]=='W') {
		if (!f[i][j + 1])
			dfs(i, j + 1);
	}
	if (maze[i + 1][j + 1]=='W') {
		if (!f[i + 1][j + 1])
			dfs(i + 1, j + 1);
	}
	if (maze[i + 1][j - 1] == 'W') {
		if (!f[i + 1][j - 1])
			dfs(i + 1, j - 1);
	}
	return;
}

int main() {
	int count = 0;

		count = 0;
		for (int i = 0; i < Max; i++) {
			for (int j = 0; j < Max; j++) {
				maze[i][j] = '.';
				f[i][j] = 0;
			}
		}


		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= M; j++) {
				cin >> maze[i][j];
			}
		}





		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= M; j++) {
				if (f[i][j] == 0 && maze[i][j] == 'W') {
					dfs(i, j);
					count++;
				}
			}
		}

		cout << count;

	return 0;
}
