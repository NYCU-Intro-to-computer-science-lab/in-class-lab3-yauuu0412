// 題目 3：破解數學家的謎題 (Cracking the Mathematician's Puzzle) - 30分

#include <iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;break;}
    return 1;


}

int main() {
    int n=0,a=0,b=0;
    cin >> n;
    for(int i=2;i<n/2;i++){
        if(isPrime(i)==1){
        a=i;
        b=n-i;
        if(isPrime(b)==1){
            cout << a << " " << b <<endl;
            break;
        }
        }
    }
    
    
    return 0;
}
