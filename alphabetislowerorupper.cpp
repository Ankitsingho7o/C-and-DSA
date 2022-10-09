#include <iostream>
using namespace std;

int main(){
      char a;
      cout<<"Enter the char";
      cin>>a;
      // implicit type casting
      int b=a; 
     
      // char b  = char(a); Eplicit Type casting
      
      if(b>= 65 && b<=90){
            cout<<"It's an Upper case Character";
      }
      else if (b>=97 && b<=122)
      {
            cout<<"It's an lower case Character";
            
      }
      else
      {
            cout<<"It's an integer";
      }
      
      
return 0;
}