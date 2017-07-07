/*******************************************************/
/* UVa 489 Hangman Judge                               */
/* Author: eric                                        */
/* Version: 2017/04/25                                 */
/*******************************************************/
#include<iostream>
#include<algorithm>
#include<string>
#include<set>

using namespace std;

int main(){
  string str1,str2;
  int n=0;
  int f=0;
  set<char>myset;
  set<char>::iterator it;
  set<char>error;
  set<char>correct;
  while(cin>>n && n!=-1){

    f=0;
    cout<<"Round "<<n<<endl;
    cin>>str1>>str2;
    for(int i=0;i<str1.length();i++){
      myset.insert(str1[i]);
    }

    for(int i=0;i<str2.length();i++){
      if(myset.find(str2[i]) == myset.end()){
        error.insert(str2[i]);
        if(correct.size()==myset.size())
          break;
      }
      else{
        correct.insert(str2[i]);
      }
    }



    if(error.size()>=7)
      cout<<"You lose.\n";
    else if(correct.size()==myset.size())
      cout<<"You win.\n";
    else
      cout<<"You chickened out.\n";

    error.clear();
    myset.clear();
    correct.clear();

  }


  return 0;
}
