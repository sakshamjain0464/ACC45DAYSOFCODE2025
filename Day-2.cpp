// Subscriptions : Easy

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        double X, N;
        cin>>N>>X;
        if(N <= 6){
            cout<<X<<endl;
            continue;
        }
        int NS = ceil(N/6);
        cout<<NS*X<<endl;
    }
}

// TCS Examination : Medium
int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int DDSA, DTOC, DDM;
        int SDSA, STOC, SDM;
        cin >> DDSA >> DTOC >> DDM;
        cin >> SDSA >> STOC >> SDM;
        int DT = DDSA + DTOC + DDM;
        int ST = SDSA + STOC + SDM;

        if (DT > ST) {
            cout << "DRAGON" << endl;
        }
        else if (ST > DT) {
            cout << "SLOTH" << endl;
        }
        else {
            if (DDSA > SDSA) {
                cout << "DRAGON" << endl;
            }
            else if (DDSA < SDSA) {
                cout << "SLOTH" << endl;
            }
            else {
                if (DTOC > STOC) {
                    cout << "DRAGON" << endl;
                }
                else if (DTOC < STOC) {
                    cout << "SLOTH" << endl;
                }
                else {
                    if (DDM > SDM) {
                        cout << "DRAGON" << endl;
                    }
                    else if (DDM < SDM) {
                        cout << "SLOTH" << endl;
                    }
                    else {
                            cout << "TIE" << endl;
                    }
                }
            }
        }
    }
}

// Remove Duplicates from Sorted Array
int removeDuplicates(vector<int>& nums) {
        int k = 0;
        int i = 1;
        while(i < nums.size()){
            if(nums[i] == nums[i-1]){
                nums.erase(nums.begin() + i);
            }
            else i++;
        }
        return nums.size();
    }
