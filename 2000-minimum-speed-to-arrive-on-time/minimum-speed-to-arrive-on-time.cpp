class Solution {
public:
    bool isp(vector<int>&a,double h,int mid){
        double sum=0;
        int n=a.size();
        for(int i=0;i<n-1;i++){
            sum+=ceil((double)a[i]/mid);
        }
        sum+=(double)a[n-1]/mid;
        return sum<=h;
    }
    int minSpeedOnTime(vector<int>& dist, double h) {
        int l=1,r=1e7;
        int ans=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(isp(dist,h,mid)){
                ans=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return ans;
    }
};