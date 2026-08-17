class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>m;
        for(int i:tasks){
            m[i]++;
        }
        for(auto const &p:m){
            if(p.second==1){
                return -1;
            }
        }
        long long sum=0;
        for(auto const &i:m){
            if(i.second%2==0){
                if(i.second%3==0){
                    sum+=i.second/3;
                }else if(i.second%3==1){
                    sum+=((i.second-4)/3)+2;
                }else{
                    double r=(double)i.second/3;
                    sum+=ceil(r);
                }
            }else{
                if(i.second%3==0){
                    sum+=i.second/3;
                }else if(i.second%3==1){
                    sum+=((i.second-4)/3)+2;
                }else{
                    double r=(double)i.second/3;
                    sum+=ceil(r);
                }
            }
        }
        return sum;
    }
};