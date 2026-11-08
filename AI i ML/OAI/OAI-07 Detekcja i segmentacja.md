## Klasyfikacja
Klasyfikator odpowiada na to czy są jakies obiekty i jakie.
Jedna etykieta opisuje caly obraz.

## Detekcja
Przy detekcji kazdy obiekt zawiera klase ramke obiektu i wynik pewnosci
Chcemy znaelzc kazdy samochod osobno. 
Polega na rozpoznaniu jakie obiekty sa na obrazie i wstawiejniu je w prostokątne ramki.
Precyzja (ile zgloszen bylo trafnych):
$$
TP/TP+FP
$$
Czulosc (ile ze znalezionych to prawda):
$$
TP/TP+FN
$$
TP-prawdziwie pozytywny (sukces)
FN-falszywie negatywny (najbardziej niebezpieczny blad)
FP-falszywie pozytywny (falszywy alarm)
TN-prawdziwie negatywny (prawidlowe zignorowanie tla)

Metryka IoU (przeciecie nad sumą) pole czesci wspolnej podzielonej przez obszar zajety przez przynajmniej jeden z 2 ksztaltow nakladajacych sie.

AP (srednia precyzja) podsumowuje liste zgloszen w skali od 0 do 1

**Architektury uzywane do detekcji:**
**R-CNN** (regions with CNN features) - jak znalezc obiekty na zdjeciu. Propozycje tworzy metoda selective search czyli laczenie podobnych fragmentow obrazu np kolorow i podobnych tekstur.
Wiele wycinkow + kazdy osobno analizuje CNN = wolna detekcja

**YOLO** (you only look once) - caly obraz w jednym przejsciu. jednoczescie przewiduje klasy i ramki.
Korzystamy z progrowania i MMS czyli odrzucamy slabe zgloszenia i usuwamy powtorzenia. 
Caly obraz + wiele przewidywan naraz =szybka detekcja

**SDD** (single shoot mutlibox detector) - wiele poziomow jednej sieci szuka obiektow. Rozne poziomy cech pomagaja  wykrywac obiekty roznej wielkosci. 
Przewiduje obiekty roznej skali i na roznych polozeniu. 
Przewidywania ze wspoldzielonych map cech 

**DETR** (zestaw odpowiedzi o obiektach) - Enkoder korzysta z zestawow wyuczonych zapytan a encoder oparty o transofter laczy informacje miedzy polozeniami. Enkoder łączy informacje roznych miejsc czyli potrzebny jest wyglad fragmentu + polozenie. Podczas uczenia dopasowujemy odpowiedzi do prawdziwych obiektow. 

![[Pasted image 20261107105840.png]]


## Segmentacja 
[[OAI-06 CNN i CV]]
Segmentacji klase i pixele obrazu
Przypisujemy etykiete kazdemu pixelowi. 
Rodzaje segmentacji:
![[Pasted image 20261107110603.png]]

Metryki uzywane w segmentacji:

**DSC** (Dice similarity Coefficient) 
Dice = 2x pole wspolne / caly obszar

IuO stosujemy w bardziej ogolnych zadaniach CV jesli chcemy bardziej karac bledy w czasie treningu
Dice jesli gdy mamy rozne skale obiektow  ale jesli chodzi o wystepowanie klas male. jezeli uzywamy funkcji straty dice

Odleglosc Hausdorffa im nizszy wynik tym lepiej.

Architektury uzywane do segmentacji 

U-Net - jeden ze sposobow uczenia modelu. Poloczenia skrotowe: kopiowanie crop i konkatenacje.
Lewa strona zbiera informacje i pomaga analizowac coraz wieksze otoczenie
Dół to ogólny opis przestrzeni a prawa strona przygotowuje coraz dokładniejsze wskazanie obszarów a poziome połączenia dostarczają wcześniejszej szczegółów potrzebnych do wyznaczania granic.

Detekcja mozna zastosowac w np ruchu drogowym, produkcji na tasmie, obserwacji zwierzat

Segmentacja np do obrazowania medycznego, mapowanie wody, podmiana tla