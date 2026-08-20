class Solution {
public:
    static bool cmp(pair<char,int>p1,pair<char,int>p2){
        if(p1.second!=p2.second){
            return p1.second>p2.second;
        }else{
            return p1.first<p2.first;
        }
    }
    string frequencySort(string s) {
        vector<pair<char,int>>res;
        string str;
        unordered_map<char,int>freq;
        for(char c:s){
            freq[c]++;
        }
        for(auto const&p:freq){
            res.push_back({p.first,p.second});
        }
        sort(res.begin(),res.end(),cmp);
        for(int i=0;i<res.size();i++){
            int k=res[i].second;
            while(k!=0){
                str+=res[i].first;
                k--;
            }
        }
        return str;
    }
};