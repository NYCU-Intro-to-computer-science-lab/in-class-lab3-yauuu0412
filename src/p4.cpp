// 題目 4：遞迴的足跡 (Footsteps of Recursion) - 30分

#include <iostream>
using namespace std;

int fib(int n){
    if(n==1) return 1;
    if(n==2) return 1;
    return fib(n-1)+fib(n-2);
}
void Output(int n, int space){
    for(int i=0;i<space;i++){cout << "|--";}
    cout << "SEARCH fib(" << n << ")" <<endl;
    if(n >= 2) {
        Output(n-1, space+1);
        Output(n-2, space+1);
    cout << "GET fib(" << n << ") = " << fib(n) <<endl;
    
}
}

int main() {
    int n=0;
    cin >> n;
    Output(n,0);
    
    return 0;
}
