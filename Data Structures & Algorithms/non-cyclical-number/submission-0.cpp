class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int, int> opt;
        while(n!=1 && opt[n] == 0 )
        {
            opt[n] = 1;
            int sum = 0;
            while(n!= 0)
            {
                sum += pow(n%10,2);
                n=n/10;
            } 
            n = sum;
        }
        if(n==1) return true;
        return false;
    }
};
