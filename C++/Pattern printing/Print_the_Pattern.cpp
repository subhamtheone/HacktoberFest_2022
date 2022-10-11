// 1*2*3*10*11*12
// --4*5*8*9
// ----6*7

class Solution{
public:
     vector<string> pattern(int n){
        vector<string> ans;
        int k=1;
        string a;
        for (int i = 0; i < n; i++)
        {
            a.clear();
            for (int j = 0; j <n; j++)
            {
                if(j<i)
                    a+="--";
                else{
                a+=to_string(k);
                k++;
                if (j + 1 < n)
                    a+='*';
                }    
            }
            ans.push_back(a);
        }
        for(int i=n-1;i>=0;i--){
           a.clear();
            for(int j=0;j<n-i;j++){
                a+='*';
                a+=to_string(k);
                k++;
            }
            ans[i]+=a;
        }
        return ans;
    }
