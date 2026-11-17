## Drzewa decyzyjne
- sprawdzamy, czy spełniony jest jakiś warunek, i idziemy w lewo lub w prawo w zależności od wyniku
- zmienne nie muszą być typu prawda/fałsz, mogą to być np. liczby (`wiek > 30`)
- przy klasyfikacji wybieramy taki split, po którym w każdej grupie jest jak najmniej pomieszanych klas

### Drzewa regresyjne
- sprawdzamy różne miejsca, w których można zrobić split, i wybieramy ten, przy którym przewidywania najmniej się mylą
- na końcu (w liściu) wynikiem jest średnia z danych, które tam trafiły

![[Pasted image 20261103201012.png]]

- mniej danych → mniejszy współczynnik

### Las losowy (random forest)
- jedno drzewo łatwo się overfittuje (czyli uczy się danych na pamięć), szczególnie gdy jest bardzo głębokie, więc lepiej mieć wiele drzew i uśrednić ich wynik
- każde drzewo uczy się na losowo wybranych samplach (te same sample mogą się powtarzać)
- każde drzewo patrzy też tylko na część losowych cech, dzięki czemu drzewa różnią się od siebie
- wynik: przy liczbach średnia ze wszystkich drzew, przy klasach ta odpowiedź, którą wybrało najwięcej drzew

![[Pasted image 20261103201828.png]]

## numpy i scikit-learn
- numpy jest podobny do pytorcha, ale nie ma narzędzi do sieci neuronowych
- numpy nie wymaga GPU
- scikit-learn: biblioteka z gotowymi modelami ML (drzewa, las losowy, regresja, KNN, clustering) i narzędziami do przygotowania danych, np. skalowania

## Regresja logistyczna
- oparta na funkcji logistycznej (sigmoid), która każdą liczbę zamienia na wartość od 0 do 1
- tę wartość traktujemy jak prawdopodobieństwo, np. 0.8 = 80% szans, że to klasa „tak”
- mimo nazwy służy do klasyfikacji: jeśli wynik > 0.5, to „tak”, w przeciwnym razie „nie”

## K-nearest neighbors (KNN)
- dla nowego punktu szukamy k najbliższych punktów (sąsiadów) i patrzymy, jakie mają wartości
- regresja → średnia z sąsiadów, klasyfikacja → najczęstsza klasa wśród sąsiadów
- liczy odległości, więc trzeba skalować dane, inaczej cecha z dużymi liczbami będzie najważniejsza

## Clustering
- chcemy wyznaczyć grupy podobnych do siebie danych, bez podpowiedzi, która grupa jest która
- K-means: sami mówimy, ile ma być grup, a algorytm przypisuje każdy punkt do najbliższego środka grupy

### DBSCAN
- grupuje punkty, które leżą blisko siebie
- ustawiamy, jak blisko muszą być punkty i ile ich minimum musi być, żeby powstała grupa
- sam znajduje liczbę grup, a punkty leżące daleko od innych oznacza jako szum

## Feature scaling
- sprowadzanie danych do podobnej skali przed treningiem
- przyspiesza trening, zmniejsza skalę wartości na wejściu, może zmniejszyć overfitting i poprawić generalizację modelu
- ważne dla KNN, regresji i sieci neuronowych; drzewom i lasowi losowemu skala nie robi różnicy

### Metody skalowania
**Rescaling (min-max)**
- najprostsza metoda: najmniejsza wartość dostaje 0, największa 1, a reszta jest pomiędzy
- $x' = \frac{x - \min}{\max - \min}$
- jedna bardzo duża wartość (outlier) może zgnieść resztę danych blisko 0

![[Pasted image 20261103210806.png]]

**Standaryzacja (z-score normalization)**
- mówi, o ile odchyleń standardowych dana wartość jest oddalona od średniej
- $z = \frac{x - \text{średnia}}{\text{odchylenie}}$
- po tym średnia wynosi 0, wartości powyżej średniej są dodatnie, a poniżej ujemne

![[Pasted image 20261103210926.png]]