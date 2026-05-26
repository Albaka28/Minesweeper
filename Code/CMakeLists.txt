add_executable(minesweeper
    main.cpp
    Logik/ActionOnClick.cpp
    Logik/CountMinesEx.cpp
    Logik/MinenGeneration.cpp
    Logik/SetUpMines.cpp
    Logik/Spielfeld.cpp
    Optik/Anzeige.cpp
)

target_include_directories(minesweeper PUBLIC
    Logik/
    Optik/
)