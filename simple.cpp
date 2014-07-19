#include <iostream>

using namespace std;

class A {

public:
  A() { cout << "In A::A() .." << endl; this->val = 0;}
  ~A() { cout << "In A::~A() .." << endl; }
  void show() { cout << "In A::show() - this->val = " << this->val << endl; }
  void inc() { this->val++; }

protected:
  int val;
};

int main() {
  A *a1;
  a1 = new A();
  a1->show();
  a1->inc();
  a1->show();
  delete a1;

  return 1;
}
