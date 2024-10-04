// Janmansh and Assignments
int main() {
	// your code goes here
    int T,X;
	cin>>T;
	while(T--)
	{
	    cin>>X;
	    if((X+3)<=10)
	    cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}

// ATM Machine
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int N,X;
        cin>>N>>X;
        
        for(int i = 0; i < N; i++){
            int n;
            cin>>n;
            if(X-n >= 0){
                X = X-n;
                cout<<1;
            }
            else{
                cout<<0;
            }
        }
        cout<<endl;
    }
}