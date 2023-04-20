#include<bits/stdc++.h>
using namespace std;

// Optimal Approach
// TC --> O(N)  SC --> O(N)

// Logic , Since the ( zero+num = num ) so if the calculated sum is already inserted into the set 
// then we can say that there is a subarray with zero sum
bool checkZeroSumSubarray(int *arr,int n){
    unordered_set<int>st;
    st.insert(0);
    int sum = 0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(st.find(sum)!=st.end())return true;
        st.insert(sum);
    }
    return false;
}

int main(){
    int arr[] = { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
    cout<<checkZeroSumSubarray(arr,10);
    return 0;
}