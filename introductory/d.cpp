/*
  Строки состоят из строчных латинских букв, их длина не превосходит 100000.
  Каждая записана в отдельной строке.

  Выведите "YES" если одна из строк является анаграммой другой
  и "NO" в противном случае.
*/

#include "algorithm"
#include "iostream"
#include "vector"
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
  string str1, str2;
  int flag = 0;

  cin >> str1 >> str2;

  for (int i = 0; i < str1.length(); i++) {
    flag += (int)str1[i];
  }

  for (int i = 0; i < str2.length(); i++) {
    flag -= (int)str2[i];
  }

  if (flag == 0) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}
