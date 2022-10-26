// https://practice.geeksforgeeks.org/problems/count-distinct-pairs-with-difference-k1233/1/?page=1&difficulty[]=0&category[]=Map&sortBy=submissions
// Difficulty : Easy Level
// Accuracy: 24.76%

#include<bits/stdc++.h>
using namespace std;
class Solution{
	public:
	int TotalPairs(vector<int>nums, int k){
	    // Code here
	   int n = nums.size();
	   //map<pair<int, int>, int> mp;
	   //int count = 0;
    //     for (int i = 0; i < n; i++) {
    //         for (int j = i + 1; j < n; j++) {
    //             if ((abs(nums[j] - nums[i])) == k) {
    //                 if(mp.find({nums[i], nums[j]}) == mp.end() && mp.find({nums[j], nums[i]}) == mp.end()){
    //                     count++;
    //                     mp[{nums[i], nums[j]}] = 1;
    //                     mp[{nums[j], nums[i]}] = 1;
    //                 ;}
    //             }
    //         }
    //     }
    //     return count
        //TLE ON TEST CASE 136/142
        
        map<int, int> mp;
        map<pair<int, int>, int> done;
        int count = 0;
        for(int i=0;i<n;i++){
            mp[nums[i]]++; 
        }
        for(int i=0;i<n;i++){
            if(k==0){
                if(mp.count(nums[i]+k) && mp[nums[i]]>1){
                    if(!done.count({nums[i], nums[i]+k}) && (!done.count({nums[i]+k, nums[i]}))){
                    count++;
                    done[{nums[i], nums[i]+k}]=1;
                    done[{nums[i]+k, nums[i]}]=1;
                    }
                }
            }
            else{
                if(mp.count(nums[i]+k)){
                    if(!done.count({nums[i], nums[i]+k}) && (!done.count({nums[i]+k, nums[i]}))){
                    count++;
                    done[{nums[i], nums[i]+k}]=1;
                    done[{nums[i]+k, nums[i]}]=1;
                    }
                }
                if(mp.count(nums[i]-k)){
                    if(!done.count({nums[i], nums[i]-k}) && (!done.count({nums[i]-k, nums[i]}))){
                    count++;
                    done[{nums[i], nums[i]-k}]=1;
                    done[{nums[i]-k, nums[i]}]=1;
                    }
                }
            }
        }
        return count;
        // TLE ON TEST CASE 140/142
	    
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
		cin >> n >> k;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.TotalPairs(nums, k);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends