#include <iostream>
#include <list>
#include<string>
using namespace std;


list<int> returnPartialSort(const list<int>& elements){
  if (elements.size() < 2){
    return elements;
  }
  int compareElem = elements.front();
  list<int> smaller;
  list<int>  bigger;
  list<int>  same;
  for (int elem : elements){
    if (elem < compareElem){
      smaller.push_back(elem);
    }
    else if (elem > compareElem){
      bigger.push_back(elem);
    }
    else {
      same.push_back(elem);
    }
  }
  list<int> ausgabe;
  ausgabe.splice(ausgabe.end(),returnPartialSort(smaller));
  ausgabe.splice(ausgabe.end(),same);
  ausgabe.splice(ausgabe.end(),returnPartialSort(bigger));
  return ausgabe;
}

int sortList(){
  list<int> zahlen;
  string eingabe;

  while (1){
    cout << "Zahl sonst q:";
    cin >> eingabe;
    if (eingabe == "q"){
      break;
      } 
    zahlen.push_back(stoi(eingabe));
    }
    for (int elem : returnPartialSort(zahlen)){
      cout << elem << " ";
    }
}

int calculator(){

  double zahl1, zahl2;
  string eingabe;
  char op;

  cout << "Erste Zahl";
  cin >> eingabe;

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
  return sortList();
  //return calculator();
}

