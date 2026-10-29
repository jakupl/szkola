Przegląd klasycznych algorytmów klasyfikacji i regresji opartych na matematyce liniowej i rachunku prawdopodobieństwa.

1. **Regresja liniowa (MNK)** — przewidujemy cenę mieszkania na podstawie powierzchni,
2. **Regresja wielomianowa** — lot piłki, sztuczka z cechą x², przeuczenie i wybór stopnia,
3. **SVM** — margines, wektory podpierające, kernel trick.


- **Regresja Liniowa i Regularyzacja**:
    - Model postaci $y = Xw + b$, minimalizujący sumę kwadratów rezyduów (OLS).
    - **Regularyzacja L2 (Ridge)**: Dodaje karę proporcjonalną do kwadratu wag ($\alpha \sum w_i^2$). Zmniejsza wartości wag i zapobiega przeuczeniu.
    - **Regularyzacja L1 (Lasso)**: Dodaje karę proporcjonalną do wartości bezwzględnych wag ($\alpha \sum |w_i|$). Wyzerowuje nieistotne cechy, wykonując automatyczną selekcję cech (ang. _feature selection_).

- **Regresja Logistyczna**:
    - Mimo nazwy służy do klasyfikacji. Wykorzystuje funkcję sigmoidalną $\sigma(z) = \frac{1}{1 + e^{-z}}$, aby przekształcić liniowy wynik na prawdopodobieństwo przynależności do klasy pozytywnej.
    - Optymalizowana za pomocą funkcji straty logarytmicznej (_Binary Cross-Entropy_).

- **Naiwny Klasyfikator Bayesowski (Naïve Bayes)**:
    - Wykorzystuje Twierdzenie Bayesa: $P(Y|X) = \frac{P(X|Y)P(Y)}{P(X)}$.
    - Założenie „naiwności”: Przyjmuje, że cechy $X_i$ są wzajemnie niezależne pod warunkiem znajomości klasy $Y$. Niezwykle szybki i skuteczny m.in. w klasyfikacji tekstu (np. filtrach spamu).

- **Maszyny Wektorów Nośnych (SVM – Support Vector Machines)**:
    - Poszukują hiperpłaszczyzny rozdzielającej klasy z **maksymalnym marginesem bezpieczeństwa**.
    - **Wektory nośne**: Punkty danych leżące najbliżej hiperpłaszczyzny, które bezpośrednio definiują jej położenie.
    - **Parametr** $C$: Steruje kompromisem między szerokością marginesu a błędami klasyfikacji (tzw. _soft margin_).
    - **Sztuczka z jądrem (Kernel Trick)**: Przekształcenie danych do przestrzeni o wyższym wymiarze (np. za pomocą jądra RBF lub wielomianowego), aby umożliwić liniowe rozdzielenie zbiorów nieliniowych bez konieczności jawnego obliczania nowych współrzędnych.
