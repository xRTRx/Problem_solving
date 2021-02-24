#include <iostream>
#include <vector>

using namespace std;

bool alarm(const string& s) {
  size_t money = s.find('$');
  size_t thief = s.find('T');
  vector<size_t> guards;
  for (size_t i = 0; i < s.size(); i++) {
	if (s[i] == 'G')
	  guards.push_back(i);
  }
  bool r = false;
  for (const auto& g : guards) {
	if (money > g && g < thief)
	  r = true;
	else if (money < g && g > thief)
	  r = true;
	if (money < g && g < thief)
	  r = false;
	else if (money > g && g > thief)
	  r = false;
  }
  return r;
}

int main(int argc, char *argv[]) {
//  string input;
//  getline(cin, input);
  string s1 = "xxxGxx$xxxT"; //1
  string s2 = "xGxxxTxx$";   //1
  string s3 = "xGxxTx$xxG";  //1
  string s4 = "xx$xTxxGxx";  //1
  cout << alarm(s1) << endl;
  cout << alarm(s2) << endl;
  cout << alarm(s3) << endl;
  cout << alarm(s4) << endl;
  cout << alarm("x$xxGxxxT") << endl; //0
  cout << alarm("xGGx$xGxT") << endl; //0
  return 0;
}
