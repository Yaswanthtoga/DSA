#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& nums) {
    // If it's an increasing order definetly , we can have only one negative difference
    int count_negative = 0;

    for(int i=1;i<nums.size();i++){
        if(nums[i] - nums[i-1] < 0)count_negative++;
    }

    if(nums[0] - nums[(nums.size()-1)]<0)count_negative++;

    return (count_negative <= 1);
}