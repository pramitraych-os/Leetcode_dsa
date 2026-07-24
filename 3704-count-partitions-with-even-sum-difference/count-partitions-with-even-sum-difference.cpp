class Solution {
public:
    int countPartitions(vector<int>& a) {
        int s=0;
        for(int i:a){
            s+=i;
        }
        int c=0;
        int ls=a[0];
        for(int i=1;i<a.size();i++){
            int rs=s-ls;
            if((ls-rs)%2==0){
                c++;
            }
            ls+=a[i];
        }
        return c;
    }
};