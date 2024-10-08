// Police and Thief : Easy
int main() {
	// your code goes here
    int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    cout<<abs(b-a)<<endl;
	}
}

// Permutations : Hard
void create(vector<int>& nums,vector<vector<int>> &ans, int index){
        if(index >= nums.size()-1){
            ans.push_back(nums);
            return;
        }

        for(int i = index; i<nums.size(); i++){
            swap(nums[index], nums[i]);
            create(nums, ans, index+1);
            swap(nums[index], nums[i]);
        }
        


    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        create(nums, ans, 0);

        return ans;
    }