#include<iostream>
#include<string>
using namespace std;



int main(){
  int **_2Darray = new int *[5];
  for(int i=0;i<5;i++){
    _2Darray[i] = new int [5];
  }
  _2Darray[3][3]=3;
  cout << _2Darray[3][3];
  return 0;
}
