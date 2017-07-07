/*******************************************************/
/* UVa 133 The Dole Queue                              */
/* Author: eric                                        */
/* Version: 2017/04/26                                 */
/*******************************************************/
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include <iomanip>

using namespace std;
int vec[25];
int N,k,m;


int go(int p,int d,int t){
  while(t--){
      do{
          p=(p + d + N - 1) % N + 1;
      }while(vec[p] == 0);

  }
  return p;
}

int main(){
  int left;
  int p1,p2;

  while(cin >> N >> k >> m && N != 0){
      p1 = N;
      p2 = 1;
      left = N;

      for(int i = 1;i <= N; i++){
        vec[i]=i;
      }

      while (left > 0) {
          p1 = go(p1, 1, k);
          p2 = go(p2, -1, m);
          cout<<setw(3);
          cout <<p1;
          vec[p1] = 0;
          vec[p2] = 0;
          left--;
          if(p1 != p2){
            cout<<setw(3);
            cout <<p2;
            left--;
          }
          if(left)
            cout << "," ;


        }
        cout<<endl;


      }
  }
