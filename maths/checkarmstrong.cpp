#include <bits/stdc++.h>
using namespace std;


// Time Complexity O(log(num))
bool checkArmStrongNumber(int num){

    int digits = floor(log10(num)+1);
    int armstrong = 0;
    int n = num;

    while(num!=0){
        armstrong+=pow(num%10,digits);
        num/=10;
    }

    return (armstrong==n);
}

int main(){

    int n;
    cin>>n;
    
    cout<<checkArmStrongNumber(n);

    return 0;
}
