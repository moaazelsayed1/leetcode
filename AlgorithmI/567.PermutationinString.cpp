// 7 ms, 7.3 MB
class Solution {
public:
  bool checkInclusion(string s1, string s2) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if (s1.size() > s2.size()) {
      return false;
    }
    int arr1[26] = {0};
    int arr2[26] = {0};

    for (int i = 0; i < s1.size(); i++) {
      arr1[s1[i] - 'a']++;
      arr2[s2[i] - 'a']++;
    }
    int match = 0;
    for (int i = 0; i < 26; i++) {
      if (arr1[i] == arr2[i]) {
        match++;
      }
    }
    cout << match << endl;
    int l = 0;
    for (int r = s1.size(); r < s2.size(); r++) {
      if (match == 26)
        return true;

      arr2[s2[r] - 'a']++;
      if (arr1[s2[r] - 'a'] == arr2[s2[r] - 'a']) {
        match++;
      } else if (arr1[s2[r] - 'a'] + 1 == arr2[s2[r] - 'a']) {
        match--;
      }

      arr2[s2[l] - 'a']--;
      if (arr1[s2[l] - 'a'] == arr2[s2[l] - 'a']) {
        match++;
      } else if (arr1[s2[l] - 'a'] - 1 == arr2[s2[l] - 'a']) {
        match--;
      }

      l++;
    }

    return match == 26;
  }
};
