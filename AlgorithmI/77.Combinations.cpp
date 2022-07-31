//	21 ms, 	9.1 MB
class Solution {
    private:
    void findCombine(int index,int target, vector<int>&ds,vector<vector<int>>&combine,int n){
        
        if(ds.size()==target){
            combine.push_back(ds);
            return;
        }
        
        for(int i=index;i<=n;i++){
            ds.push_back(i);
            findCombine(i+1,target,ds,combine,n);
             ds.pop_back();
            
        }
    }
public:
    vector<vector<int>> combine(int n, int k) {
        
        vector<vector<int>> combineResult;
        vector<int>storeCombinations;
        findCombine(1,k,storeCombinations,combineResult,n);
        return combineResult;
    }
};
