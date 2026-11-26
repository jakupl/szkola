#include <iostream>

#include <ctime> // rand
using namespace std;
int x,y,z;
int main() {
    char znak = 'a';
  cout << "Nasz znak:"<<znak << endl;
   cout << "Nasz znak rozmiar:"<<sizeof(znak) << endl;
    cout << "Nasz znak rozmiar:"<<sizeof(int) << endl;
    cout << "Nasz znak rozmiar:"<<sizeof(long long) << endl;

// pętla
int i=0;
while(i<=10){
        cout << "Licz: " << i <<"| ";
i+=2;
} // i=i+1;
cout << "\n";

i=0;
do { //   do/while do
    cout << "Licz: " << i <<"| ";
    i+=2;
}while(i<=10);
cout << "\n";
for(i=0;i<=10;i=i+2) // i=i+2;
{
    cout << "Licz: " << i <<"| ";
}
// napisz pętle do,while,for wypisujące kolejne liczby
//  od 10 do 0
// co 2 w dół
/*

for(;;) {
      cout << "Licz: ";
}
*/
// wypisz kolejne potęgi dwójki
// i=i*2;  i*=2;
int wynik=1;
for(i=1;i<=8;i=i+1) // i=i+2;
{
    wynik*=2;
    cout << "Licz: " << wynik <<"| ";
}
srand(time(0));
cout <<"Liczba pseudolosowa "<< rand() % 100 - 50 ;
return 0;
}

