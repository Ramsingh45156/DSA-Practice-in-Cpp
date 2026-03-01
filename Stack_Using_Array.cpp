#include <iostream>
using namespace std;

class Stack {
    int arr[100];    
    int top;

public:
    Stack() {
        top = -1;    
    }

    void push(int x) {
        if (top == 99) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
        cout << x << " pushed into stack\n";
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }
        cout << arr[top--] << " popped from stack\n";
    }

    int peek() {
        if (top == -1) {
            cout << "Stack is Empty\n";
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() {
        return (top == -1);
    }
};

int main() {
    Stack s;
    
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << endl;

    s.pop();
    cout << "Top element after pop: " << s.peek() << endl;

    return 0;
}
/*

#include <iostream>
using namespace std;

int helper(int n, int rev) {
    if (n == 0)
        return rev;

    return helper(n / 10, rev * 10 + n % 10);
}

int reverseNumber(int n) {
    return helper(n, 0);  
}

int main() {
    int num = 321;
    cout << "Reverse: " << reverseNumber(num) << endl;
    return 0;
}
*/