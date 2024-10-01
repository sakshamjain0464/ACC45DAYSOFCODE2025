// Longest Common Prefix : Hard
string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int i = 0;
        

        while(true){
            char ch = '\0';
            for(auto str : strs){

                if(i  == str.size()){
                    ch = '\0';
                    break;
                }

                if(ch == '\0'){
                    ch = str[i];
                }
                else if(ch != str[i]){
                    ch = '\0';
                    break;
                }
            }

            if(ch == '\0') break;
            ans.push_back(ch);
            i++;
        }
        return ans;
    }

// Remove Bad elements
int main() {
	// your code goes here
    int t,n,arr[100001];
	cin >> t;
	
	while(t--){
	    cin >> n;
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    sort(arr, arr+n);
	    int cnt = 1 , maxcnt = 1;
	    
	    for(int i = 0; i < n-1; i++){
	        if(arr[i] == arr[i+1]){
	            cnt++;
	        }
	        else cnt = 1;
	        maxcnt = max(maxcnt, cnt);
	    }
	    
	    cout << n-maxcnt << endl;
	}
	
	return 0;
}

// The Three Topics : Easy
int main() {
	// your code goes here
    int A,B,C, X;
    cin>>A>>B>>C>>X;
    if(X == A || X == B || X == C) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
}
