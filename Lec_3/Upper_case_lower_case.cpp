#include <iostream>
using namespace std;
int main(){
      char ch ;
      cout<<("Enter any Character: ");
      cin>>ch;
      if(ch>='A' && ch<='Z'){
            cout<<("Upper Case..");

      }
      else if(ch>='a'&& ch<='z'){
            cout<<("Lower Case..");
      }
      else {
            cout<<("Numeric Case...");
      }

}