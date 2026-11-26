#include<iostream>
using namespace std;

void fibonacci(int n)
{
     long long a = 0, b = 1;

     for(int i=0;i<n;i++)
     {
            cout<<b<<" ";
            b += a; //pod zmienn¹ b przypisujemy wyraz nastêpny czyli a+b
            a = b-a; //pod zmienn¹ a przypisujemy wartoœæ zmiennej b
     }
}

int main()
{
    int n;

    cout<<"Podaj ile chcesz wypisaæ wyrazów ci¹gu fibonacciego: ";
    cin>>n;

    fibonacci(n);

    return 0;
}
