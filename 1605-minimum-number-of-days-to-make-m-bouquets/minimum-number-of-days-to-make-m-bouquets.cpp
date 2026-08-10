class Solution {
public:
    int isbloom(vector<int>&a,int m,int k,int d){
        int c=0,b=0;
        for(int i=0;i<a.size();i++){
            if(a[i]<=d){
                c++;
                if(c==k){
                    b++;
                    c=0;
                }
            }else{
                c=0;
            }
        }
        return b>=m;
    }
    int minDays(vector<int>&a, int m, int k) {
        int l=0,r=0;
        for(int i:a){
            l=min(l,i);
        }
        for(int i:a){
            r=max(r,i);
        }
        int ans=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(isbloom(a,m,k,mid)){
                ans=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return ans;
    }
};