class Solution {
public:
    int maxScore(vector<int>& a, int k) {
        int sum=0;
        int n=a.size();
        for(int i=0;i<k;i++){
            sum+=a[i];
        }
        int mxsum=sum;
        int p=k-1;
        for(int i=n-1;i>=0;i--){
            if(p>=0){
                sum+=(a[i]-a[p]);
                p--;
                mxsum=max(sum,mxsum);
            }else{
                break;
            }
        }
        return mxsum;
    }
};