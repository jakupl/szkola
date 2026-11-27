#include <iostream>
#define N 100

using namespace std;

void wyswietl(double tab[], int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;
}

double suma(double tab[], int rozmiar) {
    double wynik = 0;
    for (int i = 0; i < rozmiar; i++) {
        wynik += tab[i];
    }
    return wynik;
}

void srednia(double tab[], int rozmiar) {
    cout << "Srednia: " << suma(tab, rozmiar) / rozmiar << endl;
}

void max(double tab[], int rozmiar) {
    double maksymalna = tab[0];
    for (int i = 1; i < rozmiar; i++) {
        if (tab[i] > maksymalna) {
            maksymalna = tab[i];
        }
    }
    cout << "Max: " << maksymalna << endl;
}

void min(double tab[], int rozmiar) {
    double minimalna = tab[0];
    for (int i = 1; i < rozmiar; i++) {
        if (tab[i] < minimalna) {
            minimalna = tab[i];
        }
    }
    cout << "Min: " << minimalna << endl;
}

int main() {
    double liczby[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    wyswietl(liczby, 6);
    cout << "Suma: " << suma(liczby, 6) << endl;
    srednia(liczby, 6);
    max(liczby, 6);
    min(liczby, 6);
    return 0;
}
