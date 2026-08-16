class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n=blocks.length();
        vector<int>s(n);
        for(int i=0;i<n;i++){
            if(blocks[i]=='B'){
                s[i]=1;
            }else{
                s[i]=0;
            }
        }
        int sum=accumulate(s.begin(),s.begin()+k,0);
        int ans=k-sum;
        for(int i=k;i<n;i++){
            sum+=s[i]-s[i-k];
            ans=min(ans,k-sum);
        }
        return ans;
    }
};