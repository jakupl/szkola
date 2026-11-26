#include<iostream>
using namespace std;




int main()
{
    int a, b;

    cout<<"Podaj dwie liczby: ";
    cin>>a>>b;


    while(a!=b)
       if(a>b)
           a-=b; //lub a = a - b;
       else
           b-=a; //lub b = b-a

    cout<<"NWD a,b = "<<a<<endl;

    return 0;
}
