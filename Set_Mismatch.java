class Solution {
    public int[] findErrorNums(int[] nums) {
        int[] ans = new int[2];
        HashSet<Integer> hs = new HashSet<>();
        for(int i=0;i<nums.length;i++)
        {
            if(!hs.add(nums[i]))
            {
                ans[0]=nums[i];
            }
        }
        for(int i=1;i<=nums.length;i++)
        {
            if(hs.add(i))
            {
                ans[1]=i;
            }
        }
        return ans;
    }
}
