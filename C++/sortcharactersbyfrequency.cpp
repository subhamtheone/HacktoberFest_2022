 static bool comp(string a , string b){
        return a.size() > b.size();
    }
    
    string frequencySort(string s) {
        vector<string> arr(124,"");
 
        //inserting the characters directly into string respective to index
        for(int i = 0 ; i < s.size() ; i++){
            arr[s[i]].push_back(s[i]);
        }
        
        //sorting array acc to string size
        sort(arr.begin(),arr.end(),comp);
        
        string ans = "";
        for(int i = 0 ; i < arr.size() ; i++){
            ans += arr[i];
        }
        return ans;
    }
