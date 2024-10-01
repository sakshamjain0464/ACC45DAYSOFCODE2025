Roman to Integer : Hard
int romanToInt(string s) {
        unordered_map<char, int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;

        long long ans = 0;

         for(int i = 0; i < s.length(); i++){
            if(m[s[i]] < m[s[i+1]]){
                ans -= m[s[i]];
            }
            else{
                ans += m[s[i]];
            }
        }

        return ans;
    }

// Break The Stick : Medium
int main() {
	// your code goes here
    int t;
	cin>>t;
	
	while(t--){
	    long long n,x;
	    cin>>n>>x;
	    string ans="YES";
	    
	    if(x%2==0 && (n%2)!=0)
	        ans="NO";
	        
	   cout<<ans<<endl;
	}
}

// Chef in his Office : Easy
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int X,Y;
        cin>>X>>Y;
        
        cout<<(X*4)+Y<<endl;
    }
}
