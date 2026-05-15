class Solution {
public:
    int calPoints(vector<string>& operations) {
       stack<int> ans;
       for(int i = 0; i < operations.size(); ++i)
       {
            if(operations[i]=="C")
            {
                ans.pop();
            }
            else if(operations[i]=="D")
            {
                ans.push(2 * ans.top());
            }
            else if(operations[i]=="+")
            {
                int a = ans.top();
                ans.pop();
                int b = ans.top();
                ans.push(a);
                ans.push(a+b);
            }
            else
            {
                ans.push(stoi(operations[i]));
            }
       }

       int total = 0;
       while(!ans.empty())
       {
            total += ans.top();
            ans.pop();
       }
       return total;
    }
};