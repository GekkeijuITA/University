#include <iostream>
using namespace std;

int main() {
	int len;
  char l;

  cout << "Inserisci un numero maggiore di 0: ";
  cin >> len;
  if(len < 0)
  {
		cout << "Avevo detto positivo!";
    return 1; 
  }

  cout << "Inserisci il carattere da replicare: ";
  cin >> l;

  for(int i = 1 ; i <= len ; i++)
  {
    cout << l;
  }
  
  return 0;
}
















