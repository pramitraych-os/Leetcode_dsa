class Solution {
public:
    int lb(vector<int>a,int t){
        int l=0,r=a.size();
        while(l<r){
            int mid=l+(r-l)/2;
            if(a[mid]<t){
                l=mid+1;
            }else{
                r=mid;
            }
        }
        if(l==a.size()||a[l]!=t){
            return -1;
        }
        return l;
    }
    int ub(vector<int>a,int t){
        int l=0,r=a.size();
        while(l<r){
            int mid=l+(r-l)/2;
            if(a[mid]<=t){
                l=mid+1;
            }else{
                r=mid;
            }
        }
        if(l==0||a[l-1]!=t){
            return -1;
        }
        return l-1;
    }
    vector<int> searchRange(vector<int>& a, int t) {
        int e=lb(a,t);
        int m=ub(a,t);
        if(a.empty()){
            return {-1,-1};
        }
        return {e,m};
    }
};