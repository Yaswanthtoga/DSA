#include <bits/stdc++.h>
using namespace std;


// Time Complexity O(n) Space Complexity O(1)
// Two Pointer Algorithm
vector<int> reverseArray(vector<int>&arr){
    int low=0,high=arr.size()-1;

    while(low<high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;

        low++;high--;
    }

    return arr;
}

// Recursive Approach
// Time Complexity O(2*N) --> First Going towards the End O(N) + Second when returning back adding elements to the res array
// Space Complexity ---> At every time i am returning the array and stores into a new array O(n(n+1)/2) + O(n) stack space
vector<int> recursiveReverse(vector<int>&arr,int ind){
    // Base Case
    if(ind==arr.size()-1)return {arr[ind]};

    // Recurrence Relation
    vector<int>res = recursiveReverse(arr,ind+1);
    res.push_back(arr[ind]);

    return res;
}

int main(){

    int n,num;
    cin>>n;
    vector<int>arr;

    while(n){
        cin>>num;
        arr.push_back(num);
        n--;
    }

    for(int ele: arr){
        cout<<ele<<" ";
    }

    cout<<endl;

    for(int ele: recursiveReverse(arr,0)){
        cout<<ele<<" ";
    }

    
    return 0;
}
