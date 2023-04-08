#include <bits/stdc++.h>
using namespace std;

// Normal Appraoach
int reverseNumber(int n){
    int reversednumber = 0;
    while(n>9){
        int rem = n%10;
        reversednumber = (reversednumber+rem)*10;
        n/=10;
    }

    return reversednumber+n;
}

int main(){

    int n;
    cin>>n;
    cout<<reverseNumber(n);

    return 0;
}
