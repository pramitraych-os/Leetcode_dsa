class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size();
        vector<int>a(n,0);
        stack<int>s;
        for(int i=0;i<n;i++){
            while(!s.empty()&&temp[i]>temp[s.top()]){
                int prev=s.top();
                s.pop();
                a[prev]=i-prev;
            }
            s.push(i);
        }
        return a;
    }
};