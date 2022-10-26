void moveZeroes(vector<int>& nums) {
        
        // To point to the zero 
        int zeroindex = 0;
        
        for(int i=0 ; i< nums.size() ; i++)
        {
            // if number is not zero then swap it with index having number zero and increment zero index 
            if(nums[i] != 0)
            {
                swap(nums[i] , nums[zeroindex]);
                zeroindex++;
            }
        }
        
        // at end all zeros will be swapped to end
        // try to run 2 test cases for better understanding
        
    }
