#include<bits/stdc++.h>
using namespace std;


// Question :  With having m chances to flip the o's to 1's maximize the consecutive 1's
// Solution : Using Dynamic WindowSize we can just taken care all the possible maximum window size using m chances
// Time Complexity O(2*N)
int findZeroes(int arr[], int n, int m) {
        int start = 0,end=0,windowSize=0,res=0;
        
        while(end<n){
            if(arr[end]==1){
                windowSize++;
                end++;
            }else{
                if(m==0){
                    while(arr[start]!=0){
                        start++;
                        windowSize--;
                    }
                    start++;
                    windowSize--;
                    m++;
                }
                
                m--;
                windowSize++;
                end++;
            }
            
            res = max(res,windowSize);
        }

        return res;
}  