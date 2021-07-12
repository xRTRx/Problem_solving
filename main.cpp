#include <iostream>
#include <map>
#include <string>
using namespace std;

class Solution {
 public:
  bool isIsomorphic(const string &s, const string &t) {
    for (int i = 0; i < s.size(); ++i) {
      ms.emplace(s[i], t[i]);
      mt.emplace(t[i], s[i]);
    }
    for (int i = 0; i < s.size(); ++i) {
      if (t[i] != ms.at(s[i]) || s[i] != mt.at(t[i])) return false;
    }
    return true;
  }

 private:
  map<char, char> ms, mt;
};

int main() {
  Solution s;
  cout << s.isIsomorphic("badc", "baba");
  //  cout << s.isIsomorphic("bar", "foo");
  //  cout << s.isIsomorphic("paper", "title");
  //  cout << s.isIsomorphic("egg", "add");
  return 0;
}