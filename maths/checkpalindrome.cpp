#include <bits/stdc++.h>
using namespace std;

// Reverse the Number
int reverseNumber(int n){
    int reversednumber = 0;
    while(n>9){
        int rem = n%10;
        reversednumber = (reversednumber+rem)*10;
        n/=10;
    }
    return reversednumber+n;
}

// Normal Appraoach
bool checkPalindrome(int n){
    int reversednumber = reverseNumber(n);
    return (n==reversednumber);
}

int main(){

    int n;
    cin>>n;
    cout<<checkPalindrome(n);

    return 0;
}
