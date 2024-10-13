// Flip the cards : Easy
int main() {
	// your code goes here
    int test;
    cin>>test;
    while(test--){
        int n,y;
        cin>>n>>y;
        int x = n-y;
        if(x<y) cout<<x<<endl;
        else cout<<y<<endl;
    }
}
