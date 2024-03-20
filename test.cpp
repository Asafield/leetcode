#include <iostream>
using namespace std;
int main() {
  int i = 0;
  int j = 1;
  int c =(i++,j);
  cout << "c: " << c<< endl;
  cout << "i: " << i<< endl;

}
