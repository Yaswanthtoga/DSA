class Solution{
    void reverseSubArray(vector<int>&arr,int ind){
        int start = ind,end=arr.size()-1;
        while(start<end){
            swap(arr[start],arr[end]);
            start++;end--;
        }
    }
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        int i=N-2;
        while(i>=0){
            if(arr[i]>=arr[i+1]){
                i--;
                continue;
            }
            break;
        }
        
        // Reverse the subaray
        reverseSubArray(arr,i+1);
        
        if(i==-1)return arr;
        
        int break_point = arr[i];
        int j = i;
        
        while(i<N){
            if(break_point<arr[i]){
                swap(arr[j],arr[i]);
                break;
            }
            i++;
        }
        
        return arr;
    }
};
