/*******************************************************/
/* UVa 489 Hangman Judge                               */
/* Author: eric                                        */
/* Version: 2017/04/25                                 */
/*******************************************************/
#include<iostream>
#include<algorithm>
#include<string>
#include<map>
#include<set>

using namespace std;

int main(){
  string str1,str2;
  int n=0;
  int f=0;
  map<char,int>mymap;
  map<char,int>::iterator it;
  set<char>error;
  set<char>correct;
  while(cin>>n && n!=-1){

    f=0;
    cout<<"Round "<<n<<endl;
    cin>>str1>>str2;
    for(int i=0;i<str1.length();i++){
      mymap[str1[i]]=0;
    }

    for(int i=0;i<str2.length();i++){
      if(mymap.find(str2[i]) == mymap.end()){
        error.insert(str2[i]);
        if(correct.size()==mymap.size())
          break;
      }
      else{
        correct.insert(str2[i]);
        mymap[str2[i]]=1;
      }
    }



    if(error.size()>=7)
      cout<<"You lose.\n";
    else if(correct.size()==mymap.size())
      cout<<"You win.\n";
    else
      cout<<"You chickened out.\n";

    error.clear();
    mymap.clear();
    correct.clear();

  }


  return 0;
}
