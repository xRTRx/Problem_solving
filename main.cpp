#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    string s("Hello 2 World");
    string letters = {"abcdefghijklmnopqrstuvwxyz"};
    for (size_t i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
        if (s[i] == ' ' || !isalpha(s[i])) // skipping spaces and numbers
            continue;
        else
            s.replace(i, 1, string(1, letters[25 - letters.find(s[i])]));
    }
  cout << s;
    return 0;
}
