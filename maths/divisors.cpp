#include <bits/stdc++.h>
using namespace std;


// Efficient Approach
// Observe the factors of that number , you will find the pattern repetetion upto the square_root(number)
// So no need to iterate throughout the number , only upto square_root(number)
// Time Complexity ---> O(square_root(number))

void printDivisors(int num){
    for(int i=1;i*i<=num;i++){
        if(num%i==0){
            if(num/i==i){
                cout<<i;
                continue;
            }
            cout<<i<<" "<<(num/i)<<endl;
        }
    }
}

// Naive Approach
// iterate upto number and find the divisors, Time Complexity ---> O(number)

int main(){

    int n;
    cin>>n;

    printDivisors(n);


    return 0;
}
