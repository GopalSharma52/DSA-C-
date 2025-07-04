#include<iostream>
using namespace std;
int main (){
      int n;
      cout<<"Enter the Amt. : ";
      cin>>n;
      switch (n)
      {
      case 1330:
      cout<<"You will recieve : "<<endl;
      cout<<"13 notes of 100 rupes."<<endl;;
      cout<<"1 notes of 20 rupes."<<endl;
      cout<<"10 notes of 1 rupes."<<endl;;
      
            break;
      
      default:
      cout<<"Valid amt. is 1330 ";
            break;
      }
}