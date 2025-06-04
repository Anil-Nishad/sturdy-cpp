#include <iostream>
using namespace std;

class Queue {
  private:
    static const int N = 100;
    int arr[N];
    int front = -1 , rear = -1;

  public:
   Queue() {
    front = -1 , rear = -1;
   }

   void enque(int x) {
    if(front == -1 && rear == -1) {
      rear = front = 0;
      arr[front] = x;
      return ;
    }

    if(rear == N - 1) {
      cout << "Overflow condition\n";
      return ;
    }

    arr[++rear] = x;
   }

   int deque() {
       int t;
    if(isEmpty()) {
      cout << "Queue is empty\n";
      return -1;
    }

    if(front == rear) {
      front = rear = -1;
    }else {
      t = front++;
    }
    return arr[t];
   }

   int peek() {
    if(isEmpty()) return -1;
    return arr[front];
   }

   int size() {
    if(isEmpty()) return 0;
    return rear - front + 1;
   }

   bool isEmpty() {
    return front == -1;
   }
};

int main () {

  Queue q;
  q.push(10);
  q.push(20);
  q.push(30);

  cout << "Peek: " << q.peek() << endl;
  cout << "Size: " << q.size() << endl;

  cout << "Pop: " << q.
