class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids)
    {
        vector<int> ans;

        for(int i = 0; i < asteroids.size(); i++)
        {
            if(ans.empty())
            {
                ans.push_back(asteroids[i]);
            }
            else if(ans.back() > 0 && asteroids[i] < 0)
            {
                while(!ans.empty() && ans.back() > 0 && asteroids[i] < 0)
                {
                    if(abs(ans.back()) == abs(asteroids[i]))
                    {
                        ans.pop_back();
                        asteroids[i] = 0;
                    }
                    else if(abs(ans.back()) < abs(asteroids[i]))
                    {
                        ans.pop_back();
                    }
                    else
                    {
                        asteroids[i] = 0;
                    }
                }

                if(asteroids[i] != 0)
                {
                    ans.push_back(asteroids[i]);
                }
            }
            else
            {
                ans.push_back(asteroids[i]);
            }
        }

        return ans;
    }
};