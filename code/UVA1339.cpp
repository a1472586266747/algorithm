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
	for(int i=0;i<26;i++){
		a[i]=0;
	}
	
}

int main(){
	int a[26] = {0}, b[26] = {0};
	string str1,str2;
	while (cin >> str1 >> str2){
		clearA(a);
		clearA(b);

		if (str1.length() != str2.length()){
			cout << "NO\n";
			continue;
		}

		for (int i = 0; i < str1.length(); i++){
			a[str1[i] - 65]++;
			b[str2[i] - 65]++;
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
