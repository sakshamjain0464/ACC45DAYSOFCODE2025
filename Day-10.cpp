// Weights : Easy
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int W, X,Y,Z;
        
        cin>>W>>X>>Y>>Z;
        
        if(W == X || W == Y || W == Z){
            cout<<"YES"<<endl;
        }
        else if(W == X+Y || W == X+Y+Z){
            cout<<"YES"<<endl;
        }
        else if(W == Y+Z){
            cout<<"YES"<<endl;
        }
        else if(W == Z+X){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}

// Mask Policy : Medium
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int N, A;
        cin>>N>>A;
        int U = N-A;
        
        if(U<=A){
            cout<<U<<endl;
        }
        else{
            cout<<A<<endl;
        }
    }
}

// Valid Parentheses : Hard
bool isValid(string s) {
        stack<int> st;
        for(auto i : s){
            if(i == '(' || i == '[' || i == '{'){
                st.push(i);
            }
            else{
                if(st.empty()){
                    st.push(i);
                    continue;
                }
                char t = st.top();
                if((t == '(' && i == ')') || (t == '[' && i == ']') ||(t == '{' && i == '}')){
                    st.pop();
                }
                else st.push(i);
            }
        }

        return st.empty();
    }