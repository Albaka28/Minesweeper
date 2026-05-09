# Plan für Minesweeper in C++ 

Ein im Terminal lebendes Mini-Spiel was [Am Ende] als eine TUI Fenster gespielt werden kann.
Die Minesweeper-Regeln werden in der Anfangsphase nicht geändert jedoch nimmt mann sich nicht die Möglichkeit
für verschiedene Game Modi.

---
## Schlachtplan / Aufgabenpool:
- Game-Loop while(!hameOver) oder so                                            ✓
- Sichtbares und Unsichtbares Feld (2d-Array für Spieler und für Spiel)         ✓
- Nachbarzahl eines Feldes berechnen                                            ✓
- Engabe                                                                        -
- Game-Loop beenden (Win/Lose)

---

### Befehl um alles im Terminal zu compilieren!

g++ main.cpp Logik/*.cpp Optik/*.cpp -o minesweeper

---

### To-Do [B]

  - Menu / (T)erminal (I)nterface machen!

---

### To-Do [M]

  - Noch mehr Minen smoothMinen()  (bessere Sicherheit für die Schwierigkeit)
  - update deine To-Do Maxi

_______________

Wer suchet der findet,
wer drauftritt der verschwindet
                    -Felix Piel
_______________
