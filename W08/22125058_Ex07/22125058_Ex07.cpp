class Solution {
public:
    vector<int> tmp;
    int visited[30];
    vector<vector<int>> ans;
    int n;

    void Permute(int cur, int n, vector<int>& nums){
        if (cur==n+1){
            ans.push_back(tmp);
            return;
        }
        for(int i=1; i<=n; i++){
            if (!visited[nums[i-1]+11]){
                visited[nums[i-1]+11] = true;
                tmp.push_back(nums[i-1]);
                Permute(cur+1,n,nums);
                tmp.pop_back();
                visited[nums[i-1]+11] = false;
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        n = nums.size();
        Permute(1,n,nums);
        return ans;
    }
};