class Solution {
public:
    int search(vector<int>& nums, int target) {

        int low = 0,high = nums.size()-1,mid;
        while(low<high){
            mid = low+((high-low)/2);
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>=nums[low]){
                // Left Part is in sorted order
                if(nums[low]<=target && nums[mid]>=target)high =mid-1;
                else low = mid+1;
            }else{
                // Right Part is in sorted order
                if(nums[mid]<=target && nums[high]>=target)low =mid+1;
                else high = mid-1;
            }
        }
        return (target==nums[low])?low:-1;
    }
};