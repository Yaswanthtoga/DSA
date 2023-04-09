#include <bits/stdc++.h>
using namespace std;


// Time Complexity O(n) Space Complexity O(N)(stack space)
int factorial(int n){
    // Base Case
    if(n==0||n==1)return n;

    return n*factorial(n-1);
}

int main(){

    int n;
    cin>>n;

    cout<<factorial(n);
    
    return 0;
}
