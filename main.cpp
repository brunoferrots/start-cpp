#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

// * Algorithm for convert Celcius for Fahrenheit

int main(int numOfArgs, char* pszArgs[]) {
  int celsius = 0;
  cout << "Enter temperature in Celcius\n";
  cin >> celsius;

  int fahrenheit = celsius * 9/5 + 32;

  cout << "Fahrenheit value is:" << fahrenheit << endl;
  system("PAUSE");
  return 0;
}