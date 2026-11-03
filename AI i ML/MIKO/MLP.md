## MLP (perceptron wielowarstwowy)

### Punkt wyjścia: regresja liniowa
- $y = a \cdot x + b$
- jedna taka „warstwa” to po prostu regresja liniowa: mnożymy wejście przez wagę (a) i dodajemy przesunięcie (b)

![[Pasted image 20261027201015.png]]

### Skąd biorą się sieci neuronowe
- sztuczne sieci neuronowe powstają naturalnie, gdy zastanawiamy się, czy można wykonać regresję liniową kilka razy, jedną po drugiej
- $y = g(\sigma(f(x)))$
  - f: pierwsza warstwa, rozwiązuje prostszy problem
  - σ: funkcja aktywacji pomiędzy warstwami
  - g: druga warstwa, na podstawie wyniku f rozwiązuje trudniejszy problem
- funkcja aktywacji jest konieczna: bez niej kilka regresji liniowych po sobie dalej daje zwykłą prostą (regresję liniową), więc dokładanie warstw nic by nie dawało
- dodając kolejne warstwy, sieć w teorii może rozwiązywać coraz trudniejsze problemy

### Trening
- MLP trenujemy gradient descentem: małymi krokami zmieniamy wagi tak, żeby błąd był coraz mniejszy
- przy regresji zwykle minimalizujemy MSE (średni kwadrat błędu)
- przy klasyfikacji zamiast MSE zwykle używa się cross-entropy
- backpropagation: sposób na policzenie, jak bardzo każda waga w każdej warstwie wpłynęła na błąd, żeby wiedzieć, jak ją poprawić

## Funkcje aktywacji

### Sigmoid
- zamienia każdą liczbę na wartość od 0 do 1 (jak w regresji logistycznej), więc działa jak „prawdopodobieństwo”: duża liczba → blisko 1, mała → blisko 0
- kiedyś była to główna funkcja aktywacji w sieciach
- wada: dla bardzo dużych i bardzo małych wartości jest prawie płaska, więc sieć uczy się wolno, szczególnie przy wielu warstwach

### ReLU
- jeśli wejście jest mniejsze od 0, zwraca 0, a jeśli jest większe, zwraca to samo wejście: $\text{ReLU}(x) = \max(0, x)$
- zwykle działa lepiej niż sigmoid: jest szybka do policzenia i nie „spłaszcza się” dla dużych wartości, więc sieć uczy się szybciej

![[Pasted image 20261027204145.png]]

### tanh
- przeskalowany sigmoid: zwraca wartości od -1 do 1 zamiast od 0 do 1
- ma ten sam problem ze spłaszczaniem, więc ReLU zazwyczaj jest lepsze

### SiLU i GELU
- „wygładzone” wersje ReLU: dla ujemnych wartości nie ucinają wszystkiego twardo do 0
- często używane w nowoczesnych modelach (np. GELU w transformerach, czyli w modelach językowych)