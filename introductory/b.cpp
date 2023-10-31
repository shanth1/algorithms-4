/*
   Даны две рациональные дроби: a/b и c/d.

   Сложите их и результат представьте в виде несократимой дроби m/n.
*/

#include "iostream"
using namespace std;

int NOD(int a, int b) {
  if (a < b) {
    swap(a, b);
  }
  while (a % b != 0) {
    a = a % b;
    swap(a, b);
  }
  return b;
}

int main(int argc, char *argv[]) {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  int m = a * d + c * b;
  int n = b * d;
  int k = NOD(m, n);

  cout << m / k << " " << n / k;

  return 0;
}
