#include<iostream>

using namespace std;

int main(){

  int num1,num2;
  cin>>num1>>num2;

  int n;
  n=num1^num2;
  cout<<n<<endl;

  int i=0;
  while(n!=0){
    if(n%2==1)
      i++;
    n=n>>1;
  }
 cout<<i;
  return 0;
}
