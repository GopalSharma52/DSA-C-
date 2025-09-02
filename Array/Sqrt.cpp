#include<iostream>
using namespace std;
long long int Sqrt(int n){
        int s = 0;
        int e = n;
        long long int mid = s + (e-s)/2;
        int ans = -1;
        while(s<=e){
           long long int y = mid * mid;
        if(y == n){
            return mid;
        }
        if(y <n){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
        }
        return ans;
}
double morePrecision(int ans, int precision, int n) {
    double temp = ans;
    double factor = 1;
    for (int i = 0; i < precision; i++) {
        factor = factor / 10;
        for (double j = temp; j * j <= n; j = j + factor) {
            temp = j;
        }
    }
    return temp;
}
int main(){
      long long int n;
      cout<<"Enter a number: ";
      cin>>n;
     long long int x = Sqrt(n);
      cout<<"Square root of "<<n<<" is : "<<morePrecision(x,3,n);
}