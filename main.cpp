#include <iostream>

using namespace std;

string find_link(const string& s){
  string link;
  if (s.find("?v=") != string::npos){
	link = s.substr(1 + s.find_last_of('='));
  } else {
	link = s.substr(1 + s.find_last_of('/'));
  }
  return link;
}

int main(int argc, char *argv[]) {
  string s1("https://www.youtube.com/watch?v=kbxkq_w51PM");
  string s2("https://youtu.be/KMBBjzp5hdc");
  cout << find_link(s1) << endl;
  cout << find_link(s2);
  return 0;
}
