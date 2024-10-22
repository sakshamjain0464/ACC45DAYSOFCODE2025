// Easy
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int X,A,B;
        cin>>X>>A>>B;
        int n = log2(X);
        int t = n*A;
        t+=(n-1)*B;
        cout<<t<<endl;
    }
}

// Medium
