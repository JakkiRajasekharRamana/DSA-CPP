#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#include "Mystack.cpp"

char asso(char c){
if (c == '^'){
return 'R';
}
return 'L';
}

int prec(char c){
if (c == '^'){
return 3;
}
else if (c == '/' || c == '*'){
return 2;
}
else if (c == '+' || c == '-'){
return 1;
}
else{
return -1;
}
}
bool isChar(char c){
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c
<= '9'));
}
string infixToPostfix(string str){
Stack<char,100> aux;
string postfix="";
for(int i=0;i<str.size();i++){
char c=str[i];
//For characters
if(isChar(c)){
postfix += c;
}
else if(c=='('){
aux.push(c);
}
else if(c==')'){
while(aux.peek()!='('){
postfix += aux.peek();
aux.pop();
}
aux.pop();
}
//For operator
else{
while(!aux.isEmpty() && prec(c) < prec(aux.peek()) ||
!aux.isEmpty() && prec(c) == prec(aux.peek()) &&
asso(str[i]) == 'L'){
postfix += aux.peek();
aux.pop();
}
aux.push(c);
}
}
while(!aux.isEmpty()){
postfix += aux.peek();
aux.pop();
}
cout << "The postfix is : " << postfix << endl;
return postfix;
}
int evaluatePostfix(string exp) {
Stack<int, 100> oper;
for (char c : exp) {
if (isChar(c)) {
oper.push(c - '0');
} else {
int operand2 = oper.peek();
oper.pop();
int operand1 = oper.peek();
oper.pop();
switch (c) {
case '+':
oper.push(operand1 + operand2);
break;
case '-':
oper.push(operand1 - operand2);
break;
case '*':
oper.push(operand1 * operand2);
break;
case '/':
oper.push(operand1 / operand2);
break;
case '^':
oper.push(pow(operand1, operand2));
break;
}
}
}
return oper.peek();
}
int main() {
string exp = "2+5-5+3";
string postFix=infixToPostfix(exp);
int res =evaluatePostfix(postFix);
cout << "Result :" << res << endl;
}