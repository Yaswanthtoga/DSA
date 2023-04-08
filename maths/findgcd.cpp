#include <bits/stdc++.h>
using namespace std;

// Recursive Approach
// Time Complexity O(log(min(a,b)))  Space Compexity O(stack_space)
int findGCD(int a,int b){
    // Always make sure that a > b
    if(a<b)findGCD(b,a);

    // Base Case
    if(b==0)return a;
    return findGCD(b,a%b);
}

// Linear Approach ---> Since , at max the divisible digit may be the minimum(a,b) 
//so traverse through the min(a,b) and find the number which is divisible by both number
// Time Complexity --> O(min(a,b))

int main(){

    int a,b;
    cin>>a>>b;
    cout<<findGCD(a,b);

    return 0;
}
