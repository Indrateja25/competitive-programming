// author: Rodrigo Alves
// problem: Expressões
// url: http://br.spoj.com/status/EXPRES11,rodrigoalves/
#include <bits/stdc++.h>
using namespace std;

bool is_parenthesesd(string expression) {
  stack<char> parentheses;

  for (int i = 0; i < expression.length(); i++) {
    if (expression[i] == '(' || expression[i] == '[' || expression[i] == '{') {
      parentheses.push(expression[i]);
    } else {
      if (parentheses.size() == 0) return false;
      if ((expression[i] == ')' && parentheses.top() == '(') || (expression[i] == ']' && parentheses.top() == '[') || (expression[i] == '}' && parentheses.top() == '{')) {
        parentheses.pop();
      } else {
        return false;
      }
    }
  }

  return parentheses.size() == 0;
}

int main() {
  int N;
  bool first = true;
  string expression;

  scanf("%d\n", &N);

  while (N--) {
    getline(cin, expression);
    printf("%s\n", is_parenthesesd(expression) ? "S" : "N");
  }
}
