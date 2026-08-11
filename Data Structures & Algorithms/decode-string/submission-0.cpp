class Solution {
public:
    string decodeString(string s)
    {
        stack<int> st;
        stack<vector<char>> prev;
        vector<char> ans;
        int i = 0;

        while(i < s.size())
        {
            if(st.empty())
            {
                if(s[i] >= 97 && s[i] <= 122)
                {
                    ans.push_back(s[i]);
                    i++;
                }
                else if(s[i] >= 48 && s[i] <= 57)
                {
                    int n = 0;

                    while(s[i] >= 48 && s[i] <= 57)
                    {
                        n = n * 10 + (s[i] - '0');
                        i++;
                    }

                    st.push(n);
                }
                else if(s[i] == '[')
                {
                    prev.push(ans);
                    ans.clear();
                    i++;
                }
                else
                {
                    i++;
                }
            }
            else
            {
                if(s[i] >= 97 && s[i] <= 122)
                {
                    ans.push_back(s[i]);
                    i++;
                }
                else if(s[i] >= 48 && s[i] <= 57)
                {
                    int n = 0;

                    while(s[i] >= 48 && s[i] <= 57)
                    {
                        n = n * 10 + (s[i] - '0');
                        i++;
                    }

                    st.push(n);
                }
                else if(s[i] == '[')
                {
                    prev.push(ans);
                    ans.clear();
                    i++;
                }
                else if(s[i] == ']')
                {
                    int n = st.top();
                    st.pop();

                    vector<char> temp = ans;

                    ans = prev.top();
                    prev.pop();

                    for(int j = 0; j < n; j++)
                    {
                        for(int k = 0; k < temp.size(); k++)
                        {
                            ans.push_back(temp[k]);
                        }
                    }

                    i++;
                }
                else
                {
                    i++;
                }
            }
        }

        return string(ans.begin(), ans.end());
    }
};