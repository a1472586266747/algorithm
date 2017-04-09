#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
  int n;
  int arr[33]={0};
  cin>>n;
  int j=0;
  while(n){

    arr[j]=n&1;
    j++;
    n=n>>1;
  }
  int sum=0;
  for(int i=0;i<j;i++){
      sum+=pow(2,i)*(arr[i]^1);
  }
  cout<<sum;
  return 0;
}
