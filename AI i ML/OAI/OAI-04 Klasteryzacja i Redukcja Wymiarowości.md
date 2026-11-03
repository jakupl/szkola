- **Algorytm** $K$**-Means (**$K$**-średnich)**:
    - **Działanie**: 1. Inicjalizacja $K$ centroidów (np. metodą $K$-Means++), 2. Przypisanie każdego punktu do najbliższego centroidu (metryka euklidesowa), 3. Aktualizacja położenia centroidów jako średniej z przypisanych punktów, 4. Powtarzanie do zbieżności.
    - **Wybór optymalnego** $K$:
        - **Metoda Łokcia (Elbow Method)**: Wykres sumy kwadratów odległości wewnątrz klastrów (Inertia) w funkcji $K$.
        - **Silhouette Score**: Wskaźnik zwartości klastrów i ich odseparowania od innych grup (wartości od -1 do 1).

- **Redukcja wymiarowości – PCA (Principal Component Analysis)**:
    - Przekształcenie liniowe, które odnajduje nowe, ortogonalne kierunki (składowe główne) maksymalizujące wariancję danych.
    - Oparte na dekompozycji macierzy kowariancji na wektory i wartości własne (eigenvectors / eigenvalues).
    - **Wariancja wyjaśniona (Explained Variance Ratio)**: Pozwala ocenić, ile informacji z pierwotnego zbioru zachowujemy, wybierając np. 2 lub 3 pierwsze składowe do wizualizacji lub dalszego modelowania.