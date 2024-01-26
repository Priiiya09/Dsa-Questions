class Solution {
public:
    int singleNumber(vector<int>& a) {
        int n;
     unordered_map<int, int>freq;
     for(int i=0;i<a.size();i++){
         freq[a[i]]++;
     }
        for(int i=0;i<a.size();i++){
        if(freq[a[i]]==1)
            n=a[i];
        } 
        return n;
    }
};