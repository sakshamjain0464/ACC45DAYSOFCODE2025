
// Two Sum - HARD
vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0, j = nums.size()-1;
        vector<int> ans(2, 0);
        unordered_map<int, int> m;
        for(int i = 0; i<nums.size(); i++){
            m[nums[i]] = i;
        }

        for(int i = 0; i<nums.size(); i++){
            if(m[target - nums[i]] && m[target - nums[i]] != i){
                ans[0] = i;
                ans[1] = m[target - nums[i]];
                return ans;
            }
        }
        return ans;
    }

// Easy Pronunciation - Medium
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        string s;
        cin>>s;
        
        int count = 0;
        
        for(int i = 0; i<n; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                count = 0;
                continue;
            }
            else{
                count++;
                if(count == 4){
                    break;
                }
            }
        }
        
        if(count < 4){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}

// Cricket World Cup Qualifier : Easy
int main() {
	// your code goes here
    int s;
    cin>>s;
    if(s >= 12) cout<<"YES"<<endl;
    else cout<<"No"<<endl;
}
