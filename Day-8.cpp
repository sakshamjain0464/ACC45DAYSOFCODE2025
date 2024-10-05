// Monopoly : Easy
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int P,Q,R,S;
        cin>>P>>Q>>R>>S;
        if((P > Q+R+S) || (Q > P+R+S) || (R > P+Q+S) || (S > P+Q+R)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

// Pseudo Sorted Array : Medium
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i = 0; i<n; i++){
            int t;
            cin>>t;
            v.push_back(t);
        }
        
        bool check = true;
        
        for(int i = 0; i<n-1; i++){
            if(v[i] > v[i+1]){
                int t = v[i];
                v[i] = v[i+1];
                v[i+1] = t;
                break;
            }
        }
        
        for(int i = 0; i<n-1; i++){
            if(v[i] > v[i+1]){
                check = false;
            }
        }
        
        if(check){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

// Find the Index of the First Occurrence in a String : Hard
int strStr(string haystack, string needle) {
        int i = 0, j = needle.length()-1;
        
        while(j < haystack.length()){
            int x = 0;
            bool match = true;
            for(int k = i; k<=j; k++){
                if(needle[x] != haystack[k]){
                    match = false;
                    break;
                }
                else{
                    x++;
                }
            }
            if(match) return i;
            i++;
            j++;
        }
        return -1;
    }