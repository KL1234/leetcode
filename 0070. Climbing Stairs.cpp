class Solution {
public:
    int climbStairs(int n){
        int temp[n+1];
        temp[0]=1;
        temp[1]=1;
        for(int i=2;i<=n;i++){
            temp[i]=temp[i-1]+temp[i-2];
        }
        return temp[n];
    }
};
