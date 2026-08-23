class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     unordered_map<string , vector<string>>m1;
     for(string word: strs){
        string key = word;
        sort(key.begin(),key.end());
        m1[key].push_back(word);

     }   
     vector<vector<string>>result;
     for(auto it:m1){
        result.push_back(it.second);
     }
     return result;
    }
};