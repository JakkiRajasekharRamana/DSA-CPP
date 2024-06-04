#include <iostream>
using namespace std;
#include "q1.cpp"
bool isMatching(char opening, char closing) {
return (opening == '(' && closing == ')') ||
(opening == '{' && closing == '}') ||
(opening == '[' && closing == ']');
}
int check (string s) {
if (s.length() == 0){
cout << "empty string"<< endl;
return 0;
}
s += '@';
int i = 0;
Stack < char, 100 > sta;
while ( s[i] != '@' ){
if ( s[i] == '(' || s[i] == '{' || s[i] == '[' ){
sta.push(s[i]);
}
if ( s[i] == ')' || s[i] == '}' || s[i] == ']' ){
if (sta.isEmpty() || !isMatching(sta.peek(), s[i]) ){
cout << "unbalanced expression" << endl;
return 0;
}
else if ( isMatching(sta.peek(), s[i]) ){
sta.pop();
}
}
i++;
}
if ( sta.isEmpty() ){
cout << "balanced parenthesis" << endl;
return 1;
}
else{
cout << "unbalanced parenthesis" << endl;
return 0;
}
}
int main(){
string s;
cout << "enter the parenthesis expression: " << endl;
cin >> s;
int x = check(s);
}