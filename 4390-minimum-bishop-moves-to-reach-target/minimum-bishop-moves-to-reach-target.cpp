class Solution {
public:
    int minBishopMoves(vector<int>& sr, vector<int>& tar) {
        if(sr[0]==tar[0]&&sr[1]==tar[1]){
            return 0;
        }
        int a=abs(sr[0]-tar[0]);
        int b=abs(sr[1]-tar[1]);
        if(a==b)return 1;
        if(a%2==b%2)return 2;
        else return -1;
    }
};