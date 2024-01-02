class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
    vector<string> ans;

    for (int i = 1; i <4; ++i) {
        for (int j = 1; j <4 ; ++j) {
            for (int k = 1; k <4 ; ++k) {
                for (int l = 1; l <4 ; ++l) {
                    if(i+j+k+l==s.size()){
                        string s1 = to_string(std::stoi(s.substr(0,i)));
                        string s2 = to_string(std::stoi(s.substr(i,j)));
                        string s3 = to_string(std::stoi(s.substr(i+j,k)));
                        string s4 = to_string(std::stoi(s.substr(i+j+k,l)));
                        if(std::stoi(s1)<=255 and std::stoi(s2)<=255 and std::stoi(s3)<=255 and std::stoi(s4)<=255){
                            string x = s1+"."+s2+"."+s3+"."+s4;
                            if(x.size()-3==s.size())
                                ans.push_back(x);
                        }
                    }
                }
            }
        }
    }
    return ans;
}


};