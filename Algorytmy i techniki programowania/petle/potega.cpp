#include <cmath>
#include <cstdio>
#include <ctime>
#include <iostream>
int wynik=0;
int main()
{
	int a=1;
	int i=0;
   do {

   std::cout << "2^" <<i << "="<<a<< std:: endl;
   a= a+a;
   i++;

}while(a <=256);

}
