// Hard
bool isPalindrome(int x) {
        if(x < 0) return false;

        int t = x;
        long long p = 0;
        while(x > 0){
            int r = x%10;
            x = x/10;
            p = (p*10) + r;
        }
        return p==t;
    }