/* UVA 1339 Ancient Cipher*/

#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

bool compare(int* A,int* B){
	for(int i=0;i<26;i++)
		if(A[i]!=B[i])
			return false;
  return true;
}

void clearA(int *a){
	for(int i=0;i<sizeof(a)/4;i++){
		a[i]=0;
	}
}

int main(){
	int a[26] = {0}, b[26] = {0};
	string str[2];

	while (cin >> str[0] >> str[1]){
		clearA(a);
		clearA(b);
		if (str[0].length() != str[1].length()){
			cout << "NO\n";
			continue;
		}

		for (int i = 0; i < str[0].length(); i++){
			a[str[0][i] - 65]++;
			b[str[1][i] - 65]++;
		}
		sort(a,a+26);
		sort(b,b+26);

		if(compare(a,b)){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}

	}


	return 0;
}
