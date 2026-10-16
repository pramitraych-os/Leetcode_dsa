typedef long long ll;
class Solution {
public:
    int maxArea(vector<int>& arr) {
        int i=0,j=arr.size()-1;
        ll area=LLONG_MIN;
        while(i<=j){
            ll ar=min(arr[i],arr[j])*(j-i);
            area=max(area,ar);
            if(arr[i]<arr[j]){
                i++;
            }else{
                j--;
            }
        }
        return area;
    }
};