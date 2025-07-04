#include<iostream>
using namespace std;
int main (){
      int n ;
      int m ;
      cout<<"Enter First Number : ";
      cin>>n;
      cout<<"Enter Second Number : ";
      cin>>m;

      char ch = '+' | '-'| '*' | '/';
      cout<<"Enter a operation : "<< ch << endl;
      switch (ch)
      {
      case '+':
      cout<<"Sum of above two numbers is: " << m + n; 
      
            break;
      case '-':
      cout<<"Subtraction of above two numbers is: " << n - m; 
      
            break;
      case '*':
      cout<<"Multiplication of above two numbers is: " << m * n; 
      
            break;
      case '/':
      cout<<"Division of above two numbers is: " <<n/m; 
      
            break;
      
      default:
      cout<< "Enter a valid operation";
            break;
      }
}