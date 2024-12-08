Tic-Tac-Toe
Descrierea Proiectului
Acest proiect implementează jocul clasic Tic-Tac-Toe (X și O), un joc de strategie pentru doi jucători. Proiectul este scris în C++ și demonstrează conceptele de bază ale programării orientate pe obiecte, incluzând utilizarea constructorilor, operatorilor suprascrisi și a claselor.

Regulile Jocului
Jocul se desfășoară pe o tablă de 3x3.
Cei doi jucători plasează alternativ markerele lor (X și O) într-un slot liber al tablei.
Un jucător câștigă dacă reușește să alinieze trei dintre marcajele sale pe:
O linie orizontală;
O linie verticală;
O linie diagonală.
Dacă toate cele nouă sloturi sunt completate fără ca vreun jucător să alinieze trei markere, jocul se termină la egalitate.
Dependențe
Mediu de Dezvoltare: Orice sistem de operare compatibil cu C++.
Compilator: g++ cu suport pentru standardul C++17 sau versiuni mai noi.
Biblioteci Terțe: Nu sunt utilizate.
Modul de Construire a Aplicației
Clonați repository-ul:

bash
Copiază codul
git clone <link-repository>
cd <numele-proiectului>
Compilarea aplicației: Utilizați comanda make pentru a construi aplicația:

bash
Copiază codul
make
Rularea aplicației: După compilare, executați aplicația folosind comanda:

bash
Copiază codul
./TicTacToe
Curățarea fișierelor temporare: Pentru a elimina fișierele obiect și executabilele generate:

bash
Copiază codul
make clean
