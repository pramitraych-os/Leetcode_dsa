class Solution {
public:
    int totalFruit(vector<int>& a) {
        unordered_map<int,int>m;
        int j=0;
        int mxlen=0;
        for(int i=0;i<a.size();i++){
            m[a[i]]++;
            while(m.size()>2){
                m[a[j]]--;
                if(m[a[j]]==0){
                    m.erase(a[j]);
                }
                j++;
            }
            mxlen=max(mxlen,i-j+1);
        }
        return mxlen;
    }
};