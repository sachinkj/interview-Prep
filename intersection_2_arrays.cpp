/* Given two arrays, write a function to compute their intersection. */

class Solution1 {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set;
        unordered_set <int> solution;
        vector <int> sol;
        for (int i = 0; i < nums1.size(); i++)
        {
            set.insert(nums1[i]);
        }

        for (int i = 0; i < nums2.size(); i++)
        {
            const bool exists = set.find(nums2[i]) != set.end();
            if (exists)
            {
               solution.insert(nums2[i]);
            }
        }

        for (auto it = solution.begin(); it != solution.end(); it++)
        {
            sol.push_back(*it);
        }

        return sol;

    }


};

class Solution2 {
public:
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
  unordered_map<int, int> map;
  vector <int> solution;
  for (int i = 0; i < nums1.size(); i++)
  {
      map[nums1[i]] = 0;
  }

  for (int i = 0; i < nums2.size(); i++)
  {
      const bool in_map = map.find(nums2[i]) != map.end();
      if (in_map && map[nums2[i]] == 0){
          map[nums2[i]] = 1;
          solution.push_back(nums2[i]);
      }
  }
  return solution;

}
}
