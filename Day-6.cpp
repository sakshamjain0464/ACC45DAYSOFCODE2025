// AORB : Easy
int main() {
	// your code goes here
    int t;
	cin >> t;
	while (t--)
	{
	    int A,B;
	    cin >> A >> B;
	    int AThenB = 500 - 2*A + 1000-4*(A+B);
	    int BThenA = 1000 - 4*B + 500-2*(A+B);
	    if (AThenB > BThenA)
	    {
	        cout << AThenB<< endl;
	    }
	    else
	    {
	        cout << BThenA << endl;
	    }
	}
	return 0;
}


// Hostel Room
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int N, X;
        cin>>N>>X;
        int maxi = X;
        vector<int> t;
        for(int i = 0; i<N; i++){
            int temp;
            cin>>temp;
            if(temp > 0){
                X = X+temp;
                maxi = max(maxi, X);
            }
            else{
                X = X - abs(temp);
                maxi = max(maxi, X);
            }
        }
        
        cout<<maxi<<endl;
        
        
    }
}