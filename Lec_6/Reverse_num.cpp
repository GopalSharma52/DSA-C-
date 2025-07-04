#include <iostream>
using namespace std;
int main(){
      int x;
      cout<<"x:";
      cin>>x;
      int num = 0;
      while(x!=0){
            int y=x%10;
            num = (num * 10) + y;
            x=x/10;
      }
      cout<<num;

}