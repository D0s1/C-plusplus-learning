#include <iostream>
using namespace std;

int calculator(){

  double zahl1, zahl2;
  char op;

  cout << "Erste Zahl:";
  cin >> zahl1;

  cout << "Zweite Zahl:";
  cin >> zahl2;

  double ergebnis;
  cout << "Operator";
  cin >> op;

  if (op == '+'){
    ergebnis = zahl1 + zahl2;
  }
  else  if (op == '-') {
    ergebnis = zahl1 - zahl2;
  }
  cout << "Ergebniss ist " << ergebnis;
  return 1;
}

int main() {
  return calculator();
}

