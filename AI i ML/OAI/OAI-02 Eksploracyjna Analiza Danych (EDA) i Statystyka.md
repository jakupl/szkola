Celem EDA jest zrozumienie struktury danych, wykrycie błędów oraz przygotowanie cech do modeli uczenia maszynowego.

- **Fundamenty Pandas**:
    - Obiekty `Series` (jednowymiarowe) oraz `DataFrame` (dwuwymiarowe tabele). Indeksowanie za pomocą `.loc` (etykiety) i `.iloc` (pozycje liczbowe).
    - Filtrowanie, grupowanie (`groupby`) oraz agregacja danych.
- **Statystyka opisowa i wizualizacja**:
    - **Miary położenia**: Średnia, mediana (odporna na wartości skrajne), moda, kwartyle.
    - **Miary rozproszenia**: Wariancja, odchylenie standardowe oraz rozstęp ćwiartkowy (IQR).
    - **Korelacja**: Pearsona (relacje liniowe) oraz Spearmana (relacje monotoniczne). Wizualizacja macierzy korelacji za pomocą map ciepła (_heatmap_).
- **Przygotowanie danych (Preprocessing & Feature Engineering)**:
    - **Brakujące dane**: Imputacja (uzupełnianie średnią/medianą) vs. usuwanie wierszy.
    - **Skalowanie cech**:
        - `StandardScaler` (standaryzacja Z-score): Przekształca dane tak, by średnia wynosiła 0, a odchylenie standardowe 1 (wymagane przy algorytmach opartych na odległościach, np. SVM, KNN, PCA).
        - `MinMaxScaler`: Przeskalowuje wartości do przedziału [1].
    - **Kodowanie zmiennych kategorycznych**: _One-Hot Encoding_ (tworzenie binarnej kolumny dla każdej kategorii) vs. _Label Encoding_ (przypisywanie kolejnych liczb całkowitych).