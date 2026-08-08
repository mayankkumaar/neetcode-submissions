class Solution {
public:
    int evalRPN(vector<string>& tokens)
    {
        stack<int> s;
        s.push(stoi(tokens[0]));
        
        int i = 1;
        
        while(i < tokens.size())
        {
            if(tokens[i] == "+")
            {
                int l = s.top();
                s.pop();
                int r = s.top();
                s.pop();
                
                int res = l + r;
                s.push(res);
            }
            else if(tokens[i] == "-")
            {
                int l = s.top();
                s.pop();
                int r = s.top();
                s.pop();
                
                int res = r - l;
                s.push(res);
            }
            else if(tokens[i] == "*")
            {
                int l = s.top();
                s.pop();
                int r = s.top();
                s.pop();
                
                int res = l * r;
                s.push(res);
            }
            else if(tokens[i] == "/")
            {
                int l = s.top();
                s.pop();
                int r = s.top();
                s.pop();
                
                int res = r / l;
                s.push(res);
            }
            else
            {
                s.push(stoi(tokens[i]));
            }
            
            i++;
        }
        
        return s.top();
    }
};