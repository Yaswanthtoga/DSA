#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;cin>>n;
    int array[n];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    // Selection Sort Algorithm
    for(int i=0;i<n;i++){
        int mini = i;
        for(int j=i+1;j<n;j++){
            if(array[mini]>array[j]){
                mini = j;
            }
        }
        int temp = array[mini];
        array[mini] = array[i];
        array[i] = temp;
    }

    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }



    return 0;
}