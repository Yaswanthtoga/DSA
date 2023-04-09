#include <bits/stdc++.h>
using namespace std;


// Time Complexity O(n) Space Complexity O(N)(stack space)
int sum(int n){
    // Base Case
    if(n==1||n==0)return n;

    // Recursive Part
    return n+sum(n-1);
}

int main(){

    int n;
    cin>>n;
    
    cout<<sum(n);
    return 0;
}
