class Solution {
public:
    void reverseString(vector<char>& s)
    {
        int i,j;
        i=0;
        j=s.size()-1;
        char temp;
        while(i<j)
        {
            temp=s[j];
            s[j]=s[i];
            s[i]=temp;
            j--;
            i++;
        }
    }
};