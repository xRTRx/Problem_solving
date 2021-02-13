#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]){
    string s;
	getline(cin, s); //spaces aren't ignoring
	//removing special characters and numbers
  	s.erase(remove_if(s.begin(), s.end(), [](char c){
  	  		if (c == ' ') { return false; }
  	  		else { return !isalpha(c);	  }  		}), s.end());
  	reverse(s.begin(), s.end());
  	cout << s;
    return 0;
}
