class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> paths;
        for(int i = 0; i < logs.size(); ++i)
        {
            if(logs[i]=="./")continue;
            else if(logs[i]=="../" && paths.empty())continue;
            else if(logs[i]=="../" && !paths.empty()) paths.pop();
            else {
                paths.push(logs[i]);
            }            
        }
        return paths.size();
    }
};