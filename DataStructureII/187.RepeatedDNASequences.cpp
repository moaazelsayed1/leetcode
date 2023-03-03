class Solution {
public:
  vector<string> findRepeatedDnaSequences(string s) {
    // cout << s.size() << endl;
    unordered_map<string, int> dna;
    vector<string> answer;
    if (s.size() <= 10) {
      return answer;
    }

    for (int i = 0; i <= s.size() - 10; i++) {
      string str = s.substr(i, 10);
      dna[str]++;
      if (dna.count(str) && dna[str] == 2) {
        answer.push_back(str);
      }
    }
    return answer;
  }
};
