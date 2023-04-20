#include<bits/stdc++.h>
using namespace std;

// Question : Find the longest subarray with K sum
// Logic: Reverse Mathematical Reasoning that , we can calclulate each prefix upto some element and then check the remaining part of the sum when 
// ermove from the current_sum in the Map , if it's there then from that index we can have the subarray with K sum
// Time COmplexity : O(N) but at worst case O(N^2) if the Unorederd_Map has the woerst time insertion and finding Complexity

int lenOfLongSubarr(int A[],  int N, int K) 
{ 
    unordered_map<int,int>ump;
    int prefix_sum = 0;
    int res = 0;
    
    for(int i=0;i<N;i++){
        prefix_sum+=A[i];
        
        // Check for the Summation
        if(prefix_sum==K){
            res = max(res,i+1);
        }
        
        // Add it to the Map
        if(ump.find(prefix_sum)==ump.end()){
            ump[prefix_sum] = i;
        }
        
        // Find the other part
        if(ump.find(prefix_sum-K)!=ump.end()){
            res = max(res,i-ump[prefix_sum-K]);
        }
    }
    return res;
} 