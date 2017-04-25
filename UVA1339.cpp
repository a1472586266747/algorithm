/* UVA 1339 Ancient Cipher*/

#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
	int a[26] = { 0 }, b[26] = {0};
	string str[2];

	while (cin >> str[0] >> str[1]){
		if (str[0].length != str[1].length)
			cout << "NO\n";
		for (int i = 0; i < str[0].length; i++){
			a[str[0][i] - 65]++;
			b[str[1][i] = 65]++;
		}
	}


	return 0;
}
