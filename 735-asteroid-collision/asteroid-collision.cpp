class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        vector<int>st;
        for(int i:ast){
            bool f=true;
            while(f&&!st.empty()&&i<0&&st.back()>0){
                int t=st.back();
                if(t<-i){
                    st.pop_back();
                }else if(t==-i){
                    st.pop_back();
                    f=false;
                }else{
                    f=false;
                }
            }
            if(f){
                st.push_back(i);
            }
        }
        return st;
    }
};