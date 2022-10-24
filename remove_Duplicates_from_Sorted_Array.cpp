#include<iostream>
#include<vector>

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int insertIndex = 1;
        for(int i = 1; i < nums.size(); i++){
            // We skip to next index if we see a duplicate element
            if(nums[i - 1] != nums[i]) {    
                // Storing the unique element at insertIndex index and incrementing the insertIndex by 1 
                nums[insertIndex] = nums[i];     
                insertIndex++;
            }
        }
        return insertIndex;
    }
};
void main(){
    Solution s;
    vector<int> nums = {1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,10,10};
    int len = s.removeDuplicates(nums);
    for(int i = 0; i < len; i++){
        cout<<nums[i]<<" ";
    }
}
}