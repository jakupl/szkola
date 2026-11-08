- **Paradygmaty Uczenia Maszynowego**:
    - **Uczenie nadzorowane (Supervised)**: Zbiór zawiera cechy $X$ oraz znane etykiety $y$ (zadania klasyfikacji i regresji).
    - **Uczenie nienadzorowane (Unsupervised)**: Model szuka struktury i wzorców wyłącznie w cechach $X$ (klasteryzacja, redukcja wymiarowości).
    - **Uczenie ze wzmocnieniem (Reinforcement Learning)**: Agent uczy się poprzez interakcję ze środowiskiem i nagrody.
    - 
- **Metodologia podziału danych**:
    - Podział na zbiór **treningowy**, **walidacyjny** i **testowy**. Kluczowa zasada: zapobieganie wyciekowi danych (ang. _data leakage_) – skalowanie i transformacje muszą być uczone wyłącznie na zbiorze treningowym! 

- **Kompromis Obciążenie-Wariancja (Bias-Variance Tradeoff)**:
    - **Underfitting (duże obciążenie / bias)**: Model jest zbyt prosty i nie potrafi wyuczyć się zależności w danych.
    - **Overfitting (duża wariancja / variance)**: Model „zapamiętuje” szum ze zbioru treningowego i słabo uogólnia wyniki na nowe dane.

- **Walidacja krzyżowa (Cross-Validation)**: $K$-Fold Cross-Validation oraz _Stratified K-Fold_ (zachowujący proporcje klas w każdym podzbiorze).

- **Metryki Ewaluacji Models**:
    - **Klasyfikacja**:
        - **Accuracy** (dokładność): Udział poprawnych predykcji.
        - **Precision** (precyzja): Spośród wszystkich pozytywnych predykcji modelu, ile było trafnych?
        - **Recall / Sensitivity** (czułość): Spośród wszystkich faktycznie pozytywnych przypadków, ile wykrył model?
        - **F1-Score**: Średnia harmoniczna z Precision i Recall.
        - **ROC-AUC**: Pole pod krzywą ROC określające zdolność modelu do rozróżniania klas.
    - **Regresja**: MSE (błąd średniokwadratowy), RMSE (pierwiastek z MSE), MAE (średni błąd bezwzględny) oraz $R^2$ (współczynnik determinacji).

[[05.11 kNN]]
