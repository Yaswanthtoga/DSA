#include<bits/stdc++.h>
using namespace std;

// Using Recursion
int binaryExpRec(int a,int b,unordered_map<int,int>&ump){
    // Base Case
    if(b==1)return a;

    // Check for dp
    if(ump.find(b)!=ump.end()){
        return ump[b];
    }

    // If b is even number
    if(b%2==0){
        return ump[b] = binaryExpRec(a,b/2,ump)*binaryExpRec(a,b/2,ump);
    }else{
        return ump[b] = a*binaryExpRec(a,b/2,ump)*binaryExpRec(a,b/2,ump);
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    unordered_map<int,int>ump;

    cout<<binaryExpRec(a,b,ump);
    return 0;
}
