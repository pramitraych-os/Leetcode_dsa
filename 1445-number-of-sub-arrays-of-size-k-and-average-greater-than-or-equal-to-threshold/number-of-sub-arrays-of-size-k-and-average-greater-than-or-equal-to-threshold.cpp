typedef long long ll;
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int c=0;
        ll sum=0;
        ll tar=k*threshold;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        if(sum>=tar){
            c++;
        }
        for(int i=k;i<arr.size();i++){
            sum+=arr[i]-arr[i-k];
            if(sum>=tar){
                c++;
            }
        }
        return c;
    }
};