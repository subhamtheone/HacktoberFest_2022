class Solution {
public:
    int r,c;
	
    bool search(vector<vector<char>>& b,int i,int j, string w,int k) {
        if(k==w.size()-1)
             return true;
        
        b[i][j]-=65;//visited
        if(i-1>=0 && w[k+1]==b[i-1][j] && search(b,i-1,j,w,k+1))
                return true;
        if(i+1<r && w[k+1]==b[i+1][j] && search(b,i+1,j,w,k+1))
                return true;
        if(j-1>=0 && w[k+1]==b[i][j-1] && search(b,i,j-1,w,k+1))
                 return true;
        if(j+1<c && w[k+1]==b[i][j+1] && search(b,i,j+1,w,k+1))
                return true;
        
         b[i][j]+=65;//unvisited
        return false;
    }
    
    bool exist(vector<vector<char>>& b, string w) {
            r=b.size();
            c=b[0].size();
        
            for(int i = 0; i < r; i++){
                for(int j = 0; j < c; j++)
                    if(b[i][j]==w[0] && search(b,i,j,w,0))
                        return true;
            }    
        
            return false;                     
             
    }
};
