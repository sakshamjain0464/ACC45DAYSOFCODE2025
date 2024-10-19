// Easy
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int B,C;
        cin>>B>>C;
        if(B<C) cout<<"BIKE"<<endl;
        else if(B>C) cout<<"CAR"<<endl;
        else cout<<"SAME"<<endl;

    }
}

// Medium
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int L,B;
        cin>>L>>B;
        int X = 0, Y = 0;
        int i = 1;
        while(i){
            if(i%2 != 0){
                if(X+i > L){
                    cout<<"BOB"<<endl;
                    break;
                }
                else{
                    X+=i;
                }
            }
            else{
                if(Y+i > B){
                    cout<<"Limak"<<endl;
                    break;
                }
                else{
                    Y+=i;
                }
            }
            i++;
        }
    }
}