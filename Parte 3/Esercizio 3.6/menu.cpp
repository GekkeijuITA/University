#include <iostream>
using namespace std;

int main() {
  int answer;
  cout << "1 Prima scelta" << endl << "2 Seconda scelta" << endl << "3 Terza scelta" << endl << "0 Uscita dal programma" << endl << "Fai una scelta: ";
  cin >> answer;
  while(answer != 0)
  {
    switch(answer)
    {
      case 1:
        cout << "Hai fatto la prima scelta" << endl;
     	break;
      case 2:
        cout << "Hai fatto la seconda scelta" << endl ;
      break;
      case 3:
        cout << "Hai fatto la terza scelta" << endl;
      break;
      case 0:
      break;
     
      default:
        	cout << "Scelta non valida" << endl;
      break;
    }
    cout << endl << "1 Prima scelta" << endl << "2 Seconda scelta" << endl << "3 Terza scelta" << endl << "0 Uscita dal programma" << endl << "Fai una scelta: ";
  cin >> answer;
  }
  cout << "Hai scelto di uscire dal programma" << endl;
  return 0;
}














