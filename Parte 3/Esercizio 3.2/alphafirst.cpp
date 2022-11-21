#include <iostream>
#include <string>
using namespace std;

int main() {
  char first, c = 'Z';
	cout << "Inserisci una lettera maiuscola: ";
  cin >> first;
  while(first < 'A' || first > 'Z')
  {
    cout << "Errore! Inserisci una lettera maiuscola valida: ";
    cin >> first;
  }
  while(first >= 'A' && c <= 'Z')
  {
      if(c < first)
      {
        first = c;
      }
      cout << "Inserisci una lettera maiuscola (o altro carattere per terminare): ";
      cin >> c;
  }
  cout << "La lettera più piccola inserita è: " << first << endl;

  return  0;
}