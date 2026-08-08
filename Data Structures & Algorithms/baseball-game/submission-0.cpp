class Solution {
public:
    int calPoints(vector<string>& operations)
    {
        stack<int> s;
        int i = 0;
        int f, r;
        
        while(i < operations.size())
        {
            if(operations[i] == "D")
            {
                s.push(s.top() * 2);
            }
            else if(operations[i] == "C")
            {
                s.pop();
            }
            else if(operations[i] == "+")
            {
                f = s.top();
                s.pop();
                r = s.top();
                int res = f + r;
                s.push(f);
                s.push(res);
            }
            else
            {
                s.push(stoi(operations[i]));
            }
            
            i++;
        }

        int ans = 0;
        while(!s.empty())
        {
            ans += s.top();
            s.pop();
        }

        return ans;
    }
};