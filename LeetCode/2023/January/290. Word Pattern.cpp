class Solution {
public:
    bool wordPattern(string pattern, string s) {
    vector<string>vec;
    string temp="";
    for (int i = 0; i < s.size(); ++i) {
        if(s[i]!=' ' ){
            temp+=s[i];
        }else if(s[i]==' '){
            vec.push_back(temp);
            temp="";
        }
        if(i==s.size()-1){
            vec.push_back(temp);
        }

    }
    if(vec.size()!=pattern.size()){
        return false;
    }
    map<char,string>mp;
    for (int i = 0; i < pattern.size(); ++i) {
        if(mp.find(pattern[i]) != mp.end()){
            continue;
        }else{
            mp.insert({pattern[i],vec[i]});
        }
    }

    for (int i = 0; i <vec.size() ; ++i) {
        bool stat = false;
        for(auto m:mp){
            if(m.second==vec[i]){
                stat = true;
                if(pattern[i]!=m.first)
                    return false;
            }
        }
        if(stat== false){
            return false;
        }
    }
    return true;

}
};