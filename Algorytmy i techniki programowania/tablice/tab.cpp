#include <iostream>
#include <ctime>
#define N 10 //dyrektywa preprocesora
using namespace std;

int main() {
    int tab[N]={2,3,65,1,3,4,5,7,22,3}; // przypisanie w deklaracji
    tab[0]=1; // przypisanie wartoœci
    srand(time(NULL));
     for(int i=0;i<10;i++)
        tab[i] = rand()%101-50;

    for(int i=0;i<10;i++)
        cout << tab[i] << " ";
return 0;
}

// oblicz œredni¹ arytmetyczna z elementów tablicy
