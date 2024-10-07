// The Cooler Dilemma 2 : Easy
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int X,Y;
        cin>>X>>Y;
        cout<<(Y-1)/X<<endl;
    }
}

// Add 1 or 2 Game : Medium
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x == 1) cout<<"ALICE"<<endl;
        else cout<<"BOB"<<endl;
    }
}

// Plus 1
vector<int> plusOne(vector<int>& digits) {
        bool carry = true;

        for(int i = digits.size()-1; i>=0; i--){
            if(carry){
                if(digits[i]+1 >= 10){
                    digits[i] = digits[i] + carry - 10;
                    carry = true;
                }
                else{
                    digits[i] = digits[i] + 1;
                    carry = false;
                }
            }
            else break;
        }

        if(carry) digits.insert(digits.begin(), 1);

        return digits;
        
    }