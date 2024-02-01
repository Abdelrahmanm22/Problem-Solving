class Solution {
public:
        int calc(string s1,string s2){
            int cnt1=0,cnt2=0;
            for (int i = 0; i <s1.size() ; ++i) {
                if (s1[i]=='1')cnt1++;
                if(s2[i]=='1')cnt2++;
            }
            if (cnt1==0 and cnt2==0)return -2;
            if (cnt1==0)return -1;
            return cnt1*cnt2;
        }
        int numberOfBeams(vector<string>& bank) {
            int l=0,r=1,ans=0;
            while (r<bank.size()){
                int x=calc(bank[l],bank[r]);
                if (x==-2){
                    l++;
                    r++;
                }else if(x==-1){
                    l++;
                    r++;
                }else if (x){
                    ans+=x;
                    l=r;
                    r++;
                    
                }else{
                    r++;
                }
            }
            return ans;
        }
};