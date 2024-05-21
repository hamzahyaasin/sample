#include <iostream>
#include "Stack.h"
using namespace std;

bool isBalanced(string sequence) {
    Stack<char> stack(sequence.length());
    
    for (char ch : sequence) {
        if (ch == '(' || ch == '[' || ch == '{') {
            stack.push(ch);
        } else {
            if (stack.isEmpty()) {
                return false;
            }
            char topChar = stack.pop();
            if ((ch == ')' && topChar != '(') ||
                (ch == ']' && topChar != '[') ||
                (ch == '}' && topChar != '{')) {
                return false;
            }
        }
    }
    return stack.isEmpty();
}

int main() {
    string sequence = "{[()]()}";
    if (isBalanced(sequence)) {
        cout << "Sequence is balanced.\n";
    } else {
        cout << "Sequence is not balanced.\n";
    }
    return 0;
}
