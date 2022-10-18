#include<iostream>
#include<math.h>
using namespace std;

int main(){


  int n;
  cin>>n;
  int answer=0;
  int i=0;


  while(n!=0){
    int b=n%10;
    if(b==1){
        answer= answer+pow(2, i);

    }
    n=n/10;
    i=i+1;
  }
  cout<<answer;

}