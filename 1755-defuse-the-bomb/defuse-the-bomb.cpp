typedef long long ll;
class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int>ans(n,0);
        if(k==0){
            return ans;
        }
        int l=(k>0)?1:n+k;
        int r=(k>0)?k:n-1;
        int s=0;
        for(int i=l;i<=r;i++){
            s+=code[i%n];
        }
        for(int i=0;i<n;i++){
            ans[i]=s;
            s-=code[l%n];
            l++;
            r++;
            s+=code[r%n];
        }
        return ans;
    }
};