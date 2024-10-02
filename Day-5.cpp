// Water Filling : Easy
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        bool A,B,C;
        cin>>A>>B>>C;
        
        if((!A && !B && C) || (!A && B && !C) || (A && !B && !C) || (!A && !B && !C)){
            cout<<"Water filling time"<<endl;
        }
        else{
            cout<<"Not now"<<endl;
        }
    }
}

// Elections in Chefland : Medium
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int A,B,C;
        
        cin>>A>>B>>C;
        
        if(A > 50) cout<<"A"<<endl;
        else if(B > 50) cout<<"B"<<endl;
        else if(C > 50) cout<<"C"<<endl;
        else cout<<"NOTA"<<endl;
    }
}

// Rotate Array : Hard
void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        reverse(nums.begin(), nums.end()-k);
        reverse(nums.end()-k, nums.end());
        reverse(nums.begin(), nums.end());
    }
