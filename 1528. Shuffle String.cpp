class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int,char> m;
        for(int i = 0; i < s.length(); i++){
            m.insert(make_pair(indices[i],s[i]));
        }
        s="";
        for(auto a: m){
            s += a.second;
        }
        return s;
    }
};

// Sol2
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string res = s;
        for(int i =0; i < indices.size(); ++i)
            res[indices[i]] = s[i];
        return res;
    }
};