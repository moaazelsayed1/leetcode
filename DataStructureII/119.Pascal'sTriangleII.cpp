class Solution {
public:
  vector<int> vec;
  vector<int> pascal(int rowIndex) {

    if (rowIndex == 0) {
      vec.push_back(1);
      return vec;
    }
    if (rowIndex == 1) {
      vec.push_back(1);
      vec.push_back(1);
      return vec;
    }

    vec = pascal(rowIndex - 1);
    vector<int> vec1 = vec;
    for (int i = 1; i < vec.size(); i++) {
      vec1[i] = (vec[i] + vec[i - 1]);
    }

    vec1.push_back(1);
    vec = vec1;
    return vec;
  }
  vector<int> getRow(int rowIndex) { return pascal(rowIndex); }
};
