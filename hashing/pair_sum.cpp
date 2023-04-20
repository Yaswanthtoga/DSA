#include<bits/stdc++.h>
using namespace std;

// Brute Force Approach
// Time Complexity --> O(N^2)
pair<int,int> findPairNormal(int *arr,int tar,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==tar){
                return make_pair(arr[i],arr[j]);
            }
        }
    }

    return {-1,-1};
}

// Efficient Approach
// O(NlogN) + O(N)
pair<int,int> findPairEff(int *arr,int tar,int n){
    sort(arr,arr+n);
    int i=0,j=n-1;

    while(i<j){
        if(arr[i]+arr[j]==tar){
            return {arr[i],arr[j]};
        }
        i++;j--;
    }

    return {-1,-1};
}

// Best Approach
// Time Complexity ---> O(N)
// Space Complexity --> O(N)
// Hash Map Approach
pair<int,int> findPair(int *arr,int tar,int n){
    unordered_map<int,int>ump;
    for(int i=0;i<n;i++){
        if(arr[i]>tar)continue;

        int ele = arr[i]-tar;
        if(ump.find(ele)!=ump.end()){
            ump[ele] = arr[i];
        }else{
            return make_pair(arr[i],ump[ele]);
        }
    }

    return {-1,-1};
}



int main(){

    int nums[] = { 8, 7, 2, 5, 3, 1 };
    int target = 10;
 
    int n = sizeof(nums)/sizeof(nums[0]);

    return 0;
}