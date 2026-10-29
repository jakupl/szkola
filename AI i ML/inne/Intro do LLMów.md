LLM składa się z 2 plików: parameters (np. 140GB) oraz run.c (~500 linijek w c) run może być w dowolnym języku. odpowiada on za uruchamianie architekturę neurual network. 

Jak pozyskać parametry? 
Za pomocą trenowania modelu. Jest ono podobne do kompresowania internetu. Przebieg:
1. 10TB danych z internetu 
2. 6000 gpu pracuje 12 dni ~2m$ kosztów ~1e24 Flops 
3. parameters.zip ~140GB plik 
   (numery dla llama 2 70B)
Jest to kompresja stratna. 
Dla nowszych modeli koszty kompresji mogą wynosić setki milionów $.

Neural network: próbuje on przewidzieć kolejne słowo. Przykładowy  neural network

![[Pasted image 20260917091626.png]]

LLMy to w większości niezrozumiałe artefakty.  Nie są podobne do czegokolwiek innego. Nie do końca rozumiemy jak działają. Możemy oceniać output. 

Drugi etap trenowania - Dostrajanie:
uzyskujemy tu model-astystenta. Nie chcemy tylko generatora dokumentów. Zachowuje się identyczną optymalizację ale zmieniamy zbiór danych na których trenujemy model. W tym etapie wykorzystuje się dane które zbieramy ręcznie przy udziale wielu osób. Przykład:
Osoba pisze pytania oraz odpowiedzi którymi Ai powinno się kierować.
Etap 1: skupienie na ilości
Etap 2 skupienie na jakości. 
![[Pasted image 20260917092712.png]]

Jest też ewentualny etap 3 dostarajnia w którym wykorzystuje się etykiety porównywawcze. Przykład: łatwiej jest znaleźć dobrą odpowiedź niż ją wygenerować. Przykładowa etykieta:
![[Pasted image 20260917093244.png]]

Prawa skalowania LLMów:
Performance LLMa można dokładnie przewidzieć za pomocą:
-N, numer parametrów w neural network.
-D, ilość tekstu na którym trenujemy model.
Można także oczekiwać więcej inteligencji przez skalowanie.


Pipleline LLMow:
surowe dane
    ↓
analiza danych
    ↓
czyszczenie
    ↓
przygotowanie cech
    ↓
train / validation / test
    ↓
trenowanie modelu
    ↓
dobór hiperparametrów
    ↓
ostateczna ewaluacja


CPU vs GPU:
CPU ma niewiele bardzo uniwersalnych rdzeni.

GPU ma ogromną liczbę prostszych jednostek obliczeniowych, dzięki czemu świetnie wykonuje wiele podobnych działań jednocześnie.

Samorozwój- pozwalając modelowi np. rozgrywać ze sobą gry możemy sprawić ze nauczy on się byc lepszym niż najlepsi ludzie w tej grze.