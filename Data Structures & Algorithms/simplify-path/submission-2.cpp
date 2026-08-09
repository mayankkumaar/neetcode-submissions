class Solution {
public:
    string simplifyPath(string path)
    {
        vector<string> st;
        int i=0;

        while(i<path.size())
        {
            if(path[i]=='/')
            {
                i++;
                continue;
            }

            string temp;

            while(i<path.size() && path[i]!='/')
            {
                temp += path[i];
                i++;
            }

            if(temp==".")
            {
                continue;
            }
            else if(temp=="..")
            {
                if(!st.empty())
                {
                    st.pop_back();
                }
            }
            else
            {
                st.push_back(temp);
            }
        }

        string ans;

        for(int i=0;i<st.size();i++)
        {
            ans += "/" + st[i];
        }

        if(ans=="")
        {
            ans="/";
        }

        return ans;
    }
};