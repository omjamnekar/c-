#include <iostream>
#include <ctype.h>
using namespace std;

char stack[100];
int top = -1;

void push(char x) {
    stack[++top] = x;
}

char pop() {
    if (top == -1) {
        return '\0'; // Return null character for an empty stack
    } else {
        return stack[top--];
    }
}

int priority(char x) {
    if (x == '(') {
        return 0;
    }
    if (x == '+' || x == '-') {
        return 1;
    }
    if (x == '*' || x == '/') {
        return 2;
    }
    return -1; // For other characters (operands), return -1 or any value not used for operators
}

int main() {
    char exp[100];
    char *e, x;
    cout << "\nEnter the expression:";
    cin >> exp;
    cout << "\n";
    e = exp;
    while (*e != '\0') {
        if (isalnum(*e))
            cout << *e;
        else if (*e == '(')
            push(*e);
        else if (*e == ')') {
            while ((x = pop()) != '(') {
                cout << x;
            }
        } else {
            while (top != -1 && priority(stack[top]) >= priority(*e)) {
                cout << pop();
            }
            push(*e);
        }
        e++;
    }
    while (top != -1) {
        cout << pop();
    }
    return 0;
}

