#include <bits/stdc++.h>
using namespace std;


// Efficient Approach
// Prime Definition --> It has only 2 factors either 1 or itself
bool checkPrime(int n){
    for(int i=2;i*i<n;i++){
        if(n%i==0)return 0;
    }

    return true;
}

int main(){

    int n;
    cin>>n;

    cout<<checkPrime(n);

    return 0;
}
