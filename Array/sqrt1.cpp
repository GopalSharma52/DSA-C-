#include<iostream>
using namespace std;
    int mySqrt(int x) {
        int n = x/2;
        int y = -1;
        for(int i = 1; i <= n; i++ ){
            if(i*i<=x){
                y = i;
            }
        }
        return y;
    }
    int main(){
        int x;
        cout<<"x = ";
        cin>>x;
        cout<<mySqrt(x);
}