#include<iostream>
using namespace std;
int numberofBit(int num1 , int num2){
      int sum =0;
      int i;
      while(num1!=0){
            int bita = num1&1;         //     ->Agar bit 1 hogi to 1 aa jayega.
            num1 = num1 >> 1;         //      -> ye right kar diya.
            i++;
            if(bita == 1){
                  sum = sum + bita;
            }
      }
       int j;
      while(num2!=0){
            int bitb = num2&1;
            num2 = num2 >> 1;
            j++;
            if(bitb == 1){
                  sum = sum + bitb;
            }
      }
      return sum;
}
int main (){
      int a , b;
      cout<<"Enter the value of a: ";
      cin>>a;
      cout<<"Enter the value of b: ";
      cin>>b;
      int ans = numberofBit(a,b);
      cout<<"Total no. of 1 in the binary of a & b is : "<<ans;
}