// 題目 1：高塔建築師 (The Tower Architect) - 20分

#include <iostream>
using namespace std;

long long factorial(int n){
    if(n==0) return 1;
    return factorial(n-1)*n;
}
long long sum(int n){
    if(n==0) return 0;
    return sum(n-1)+n;
}

int main() {
    int n=0;
    cin >> n;
    cout << factorial(n) <<endl <<sum(n) <<endl;
    
    return 0;
}
