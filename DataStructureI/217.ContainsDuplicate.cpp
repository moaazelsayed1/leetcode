class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
           unordered_set<int> st;

    for (auto num : nums) {
      if (st.count(num)) {
        return true;
      }
        st.insert(st.end(), num);
    }

    return false;

    }
};
