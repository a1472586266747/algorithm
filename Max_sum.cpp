#include<iostream>
#include<algorithm>
using namespace std;

int max_sum(int *A,int p,int q){
  int m=0;
  int L,R,C=0;
  if(p==q)
    return A[p];

  L=max_sum(A,p,(p+q)/2);
  R=max_sum(A,(p+q)/2+1,q);
  C=A[(p+q)/2];

  int temp=C;

  for(int i=(p+q)/2+1;i<q;i++){
    temp+=A[i];
    if(C<temp)
      C=temp;
  }
  temp=C;

  for(int i=(p+q)/2-1;i>=p;i--){
    temp+=A[i];
    if(C<temp)
      C=temp;
  }
  return max(max(L,R),C);
}

int main(){
  int n;
  cin>>n;
  int *a=new int[n];

  for(int i=0;i<n;i++)
    cin>>a[i];


  cout<<max_sum(a,0,n)<<endl;



}
