**Wektoryzacja w NumPy**:

- Pętle `for` w natywnym Pythonie są zbyt wolne dla dużych zbiorów danych. Biblioteka **NumPy** przechowuje dane w ciągłych blokach pamięci C, co umożliwia operacje wektorowe
- **Mnożenie macierzy**: Należy odróżniać mnożenie element po elemencie (`a * b`) od właściwego iloczynu macierzowego (`np.dot(a, b)` lub operator `@`).
 
**Broadcasting (Rozgłaszanie wymiarów)**: Mechanizm NumPy pozwalający na wykonywanie operacji arytmetycznych na macierzach o różnych kształtach bez konieczności niepotrzebnego kopiowania danych w pamięci.
 
**Losowość i powtarzalność**: Zastosowanie `np.random.seed()` oraz generatorów `default_rng()` do zapewnienia powtarzalności eksperymentów badawczych. 

**Monitorowanie pętli**: Użycie biblioteki `tqdm` do śledzenia czasu wykonywania długich obliczeń.