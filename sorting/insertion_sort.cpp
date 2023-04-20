#include<bits/stdc++.h>
using namespace std;

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}


int main(){

    int n;cin>>n;
    int array[n];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    // Insertion Sort Algorithm
    for (int i = 0; i <= n - 1; i++) {
        int j = i;
        while (j > 0 && array[j - 1] > array[j]) {
            int temp = array[j - 1];
            array[j - 1] = array[j];
            array[j] = temp;
            j--;
        }
    }

    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }



    return 0;
}