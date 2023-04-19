class Solution {
private: 
    void Permute(vector<int>& nums, vector<vector<int>>& ans, vector<int> tmp, vector<bool>& visited){
        if(tmp.size() == nums.size()){
            ans.push_back(tmp);
            return;
        }
        for(int i=0; i<nums.size(); i++){
            if(visited[i] || i>0 && nums[i] == nums[i-1] && !visited[i-1]) continue;
            visited[i] = true;
            tmp.push_back(nums[i]);
            Permute(nums, ans, tmp, visited);
            tmp.pop_back();
            visited[i] = false;
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> tmp;
        vector<bool> visited(nums.size(), 0); 
        Permute(nums, ans, tmp, visited);
        return ans;
    }
};