
#include <iostream>
using namespace std;

class Stack {
  private:
    static const int N = 100;
    int arr[N];
    int topIndex;

  public:
    Stack() {
      topIndex = -1;
    }

    void push(int x) {
      if (topIndex == N - 1) {
        cout << "Stack Overflow\n";
        return;
      }
      arr[++topIndex] = x;
    }

    int pop() {
      if (topIndex == -1) {
        cout << "Stack Underflow\n";
        return -1;
      }
      return arr[topIndex--];
    }

    int peek() {
      if (topIndex == -1) {
        cout << "Stack is empty\n";
        return -1;
      }
      return arr[topIndex];
    }

    int size() {
      return topIndex + 1;
    }

    bool isEmpty () {
      if(topIndex == -1) return true;
      else return false;
    }


};

int main() {
  Stack* st = new Stack();
  st->push(20);
  st->push(34);
  cout << "Top: " << st->peek() << endl;
  cout << "Popped: " << st->pop() << endl;
  cout << "Top after pop: " << st->peek() << endl;
  cout << "Size: " << st->size() << endl;
  cout
