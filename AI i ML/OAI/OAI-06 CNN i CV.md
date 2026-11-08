## Sieci konwolucyjne 
Rozdzielczość:
480p = 854 * 480 = 409 920 px na ekranie
720p = 1280 * 720 = 921 600px 

Jest rodzajem DL ktory wykorzystuje konwolucje do automatycznego wykrywania wzorcow w obrazach i rozpoznawac cechy takie jak krawedzie tekstury i obiekty. 

CNNow sie uzywa glownie do klasyfiklacji

Podstawowe kroki CNN:
1. pobranie obrazu i podzielenie go na fragmenty
2. Nakladanie filtrow i wyliaczanie map cech
3. Przepuszczenie map cech przez funkcje aktywacji (np. ReLU)
4. (opcjonaljne) zmniejszanie wymiaru przez pooling
5. Powtarzania konwolucji i poolingu w kolejnych warstwach
6. Splaszczenie map cech do wektora i klasyfikacha za pomocą warstw z pelni polaczonych (FC)

Architektura sieci konwolucyjnej:
![[Pasted image 20261024101250.png]]

Sieci konwolencyjne to typ sieci neuronoej. 
Chcemy odwzorowac mozg w komputerze za pomocą sieci neuronowej. Siec neuronowa rozklada sie na warstwy. Wejsiowa przyjmuje dane, serie warstw ukrytych ktore mają ze soba polaczenie. Aplikujemy do NN wagi i biasy czyli cos co trenujemy podczas treningu. Zajmuje to najwiecej czasu wiecej warstw i neuronow tym wiecej czasu trzeba tweekowac warstwy i biasy bo to odpowiada za odpowiedzi neuronow. Neuron to jednostka w sieci neuronowej ktora przyjmuje dane i zwraca w srodku jego znajdują sie funkcje matematyczne. Funkcje zwykle zwracają od 0 do 1 albo od -1 do 1. Wyjscia neuronow sa mnozone przez wage i dodawale albo odejmowany jest bias. 

Konwolucja to operacja matematyczna ktora uzywa kernelu (ziarenka) ktory przechodzi po pixelach i robi operacje macierzowe i daje jakies wyjscie w roznych przezdzialach i to opisuje ceche. Kernel moze byc uczony a moze byc zdefiniowany twardo. kernel to macierz.  

Pooling ma swoją wymiarowość np 2x2. Brane jest okno o wymiarowości i jest ustalana albo wartosc maksymalna albo srednia. Zmniejsza on wymiarowość danych. 
![[Pasted image 20261024102746.png]]

Tensor to macierz albo wektor liczb. 
Po konwolucji dostajemy cała mape cech i chcemy zjednoczyc to do jednego zestawu cech.

Najpierw wyciagane sa pojedyncze cechy. Potem wybierane są bardziej specyficzne. Potem widzimy caloksztalt. Tego czesto uzywa sie w segmentacji. Wiecej cech => lepsza klasyfikacja.

Stride zamiast poruszac sie po 1 pixelu kernel porusza sie co 3 px czyli swoja szerokosc. Jest to parametr skoku. Redukuje to tez wymiarowość. 


## Modele pretrenowane:
Torch posiada zestaw pretrenowanych modeli do roznych zasosowac w module torchvision.models. Sa to glownie gotowe do uzycia lub dotrenowania sieci wyszkolone.
Przykladowe modele:
![[Pasted image 20261024104439.png|684]]
VGG jest najbardziej obciążające. 

Residual connection umozliwia tworzenie bardzo glebokich architektrur przy zmniejszonym problemie zanikania gradientu. 

Transformacja obrazu pomaga sieci nauczyc sie wyciagac cechy bez wzgledu na zawartosc i jakosc obrazu. 

Padding to dodanie wartosci 0 do zdjecia, bez tego kernel by przechodzil bez wartosci znajdujących się na bokach obrazu. 


## Wizja komputerowa
**Kroki CV**:
1. Pobranie obrazu i klasyfikacja za pomocą CNN
2. Znalezienie obiektu na obrazie, ulstalanie koordynatow polozenia centroidu.
3. Oznaczenie obiektu bounding boxem
4. Zwrocenie prawdopodobniejstwa klasyfikacji i nazwy zklasyfikowanego obiektu
5. Nalozenie maski na obraz wejsciowy z informacjami i bounding boxem.
Bounding box to pudełka ograniczające obiekt. 

Przyklady modeli CV:
Jednostrzalowce:
-you only look once
-single shoot detection
Wykonują konwolucje i detekcje wszystkich obiektow na obrazie w 1 przejsciu sieci

Bazujące na podziale obrazu:
-Region-Based Convolutional NNs
Dzieli obraz na mniejsze fragmenty "regiony" i klasyfikuje kazdy z nich osobno. 


**Segmentacja** rozszerza wizje komputerową przez dodanie kilku algorytmow:
-detekcja krawedzi
-klasteryzacja pixeli
-Insancjonowanie obiektow (rowniez uzywane w CNN)
-Maskowanie
![[Pasted image 20261024113043.png]]
segmentacja uzywana jest w bardzo wielu rzeczach np w tesli, oblokowywaniu telefonu twarzą, filtrow do tła czy mądrych lodówek. 