class Solution {
    public:
        bool isPalindrome(int x) {
            if(x<0) return false;
            long a = 0;
            int b =x;
            while(b != 0){
                int c = b % 10;
                a = a*10 + c;
                b = b/10;
            }
            return a == x;
        }
    };