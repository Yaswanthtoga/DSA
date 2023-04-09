#include <bits/stdc++.h>
using namespace std;


// Time Complexity O(n) Space Complexity O(1)
// Two Pointer Algorithm
bool checkPalindrome(string &str){
    int low=0,high=str.length() -1;

    while(low<high){
        if(str[low]!=str[high])return false;
        low++;high--;
    }
    return true;
}

// Using Stack Iteratively we can store upto half of the string characters and and start popping the chars from the stack and check with 
// the continued string chars
// Time Complexity O(n) Space Complexity O(N/2)

bool checkPalindromeStack(string &str){
    stack<char>st;
    int i=0;
    for(i;i<str.length()/2;i++){
        st.push(str[i]);
    }

    if(str.length()%2)i++;

    while(!st.empty()){
        if(st.top()!=str[i])return false;
        st.pop();
        i++;
    }

    return true;
}



int main(){

    string str;
    cin>>str;

    cout<<checkPalindrome(str);
    
    return 0;
}
