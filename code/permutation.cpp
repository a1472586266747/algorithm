#include<iostream>
#include<string>
#include<unordered_map>
#include<utility>
#include<vector>
#include<stack>
#include<queue>
#define MAX 1024

using namespace std;

void CalcAllPermutation(string perm, int from, int to)
{
	if (to <= 1)
	{
		return;
	}

	if (from == to)
	{
		for (int i = 0; i <= to; i++)
			cout << perm[i];
		cout << endl;
	}
	else
	{
		for (int j = from; j <= to; j++)
		{
			swap(perm[j], perm[from]);
			CalcAllPermutation(perm, from + 1, to);
			swap(perm[j], perm[from]);
		}
	}
}
int main() {

	string str;
	string subs;
	cin >> str;


	CalcAllPermutation(str, 0, str.length() - 1);
	return 0;
}
