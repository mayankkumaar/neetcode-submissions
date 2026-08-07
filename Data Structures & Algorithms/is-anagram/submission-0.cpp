class Solution {
public:
    bool isAnagram(string s, string t)
    {
        int arr[26]={0};
        int ar2[26]={0};
        if(s.size()!=t.size())
        {
            return false;
        }
        int i=0;
        while(s[i]!='\0')
        {
            arr[s[i]-'a']++;
            ar2[t[i]-'a']++;
            i++;
        }
        for(i=0;i<26;i++)
        {
            if(arr[i]!=ar2[i])
            {
                return false;
            }
        }
        return true;

    }
};
