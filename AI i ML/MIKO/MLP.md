MLP to 

Y=ax(v 1)+b(v 1)
![[Pasted image 20261027201015.png]]
Jesli regresja liniowa  


Sztuczne sieci neuronowe naturalnie powstaja gdy zaczynamy sie zastanawiac czy mozemy kilkukrotnie wykonac regresje liniową.


y=g(innafunkcja(f(x)))
f rozwiazuje prostszy problem a g na podstawie f trudniejszy

Dodając kolejne warstwy siec w teorii powinna rozwiazywac coraz trudniejsze problemy.

Sigmoid jest troche jak funkcja logiczna im blizej zera tym mniejsze prawdopodobniejstwo na prawde. bylo to wczesniej uzywane jako innafunkcja

MLP mozna trenowac gradent descentem. Probojemy zeby MSE byl minimalny.

Jako funkcje aktywacyjną mozna tez wykorzustac ReLU co dziala lepiej niz sigmoid. Jesli wejscie jest ponad zero to zwracany jest coraz wyzszy wynik.
![[Pasted image 20261027204145.png]]


Mozna tez uzyc tanh ale ReLU zazwyczaj jest lepsze i jest to przeskalowany sigmoid. 
Mozna tez uzyc silu i gelu.