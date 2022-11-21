#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    struct Point
    {
        double x;
        double y;
    };
    int N = 10,equal = 0;
    char answ;
    double dist = 0,distPrev;

    cout << "Puoi inserire " << N << " punti, vuoi modificare?(s/n)";
    cin >> answ;
    while(answ != 's' && answ != 'n')
    {
        cout << "Errore! Carattere non valido, inserire 's' o 'n': ";
        cin >> answ;
    }
    if(answ == 's')
    {
        cout << "Inserire il numero dei punti che vuoi usare: ";
        cin >> N;
        while (N < 0)
        {
            cout << "Errore! Inserire un valore maggiore di 0: ";
            cin >> N;
        }
    }
    Point poly[N];
    
    for(int i = 0 ; i < N ; i++)
    {
        cout << "Inserire le coordinate del punto P" << i+1 << ": " << endl;
        cout << "Inserisci la x: ";
        cin >> poly[i].x;
        cout << "Inserisci la y: ";
        cin >> poly[i].y;
    }
    
    //lenght && equal
    dist = sqrt(pow((poly[1].x - poly[0].x),2) + pow((poly[1].y - poly[0].y),2));
    distPrev = dist;
    for(int i = 1 ; i < N-1 ; i++)
    {
        double distTemp = sqrt(pow((poly[i+1].x - poly[i].x),2) + pow((poly[i+1].y - poly[i].y),2));
        
        if(distPrev == distTemp)
            equal++;
        dist += distTemp;
        distPrev = distTemp;
    }

    cout << "La lunghezza della spezzata e': " << dist << endl;
    
    if(poly[0].x == poly[N-1].x && poly[0].y == poly[N-1].y)
    {
        cout << "La linea e' chiusa e quindi definisce un poligono ";
        if(equal == N-2)
            cout << "regolare" << endl;
    }

    return 0;
}