## Zestaw zadań 1
### Zadanie 1.
Napisz skrypt, którego wywołanie jest następujące:
$ ./skrypt01.sh <katalog> <wielkość>
Skrypt w podanym katalogu (i podkatalogach) wyszykuje najnowszy plik, jednocześnie większy niż podana wielkość w bajtach.
### Zadanie 2.
Napisz skrypt, którego wywołanie jest następujące:
$ ./skrypt02.sh <min> <max>
Skrypt losuje liczbę całkowitą z podanego zakresu i umożliwia wykonanie tradycyjnej rozgrywki “zgadnij liczbę”. Proszę sprawdzić, czy min>max. Proszę ograniczyć liczbę zgadywań.
### Zadanie 3.
Napisz skrypt, którego wywołanie jest następujące:
$ ./skrypt03.sh <podstawa> <potega>
Skrypt dla zadanych wartości oblicza potęgę liczby.
(jedno rozwiązanie operatorem, jedno rozwiązanie pętlą)
### Zadanie 4.
Napisz skrypt, którego wywołanie jest następujące:
$ ./skrypt04.sh <dokument.pdf> <podpis.png> <x> <y>
Skrypt wykorzysta oprogramowanie ImageMagick i w pliku <dokument.pdf> nałoży zawartość pliku <podpis.png> w pozycji <x> i <y>.
(brak możliwości zrealizowania w laboratorium uczelnianym)
(uwaga do zadania: podpis rozumiec nalezy jako dowolny napis kolorem np. Niebieski, czarnym, lub innym ale z przezroczystym tlem - dlatego plik jest png)
### Zadanie 5.
Napisać skrypt, który wczytuje dowolną liczbę parametrów i wypisuje je w odwrotnej kolejności.
Przykład:
$ ./skrypt05.sh a b 1 2
2 1 b a
### Zadanie 6.
Napisz skrypty grające w “papier-nożyce-kamień”:
Jeden skrypt (serwer.sh) będzie “serwerem”, który:
Dla zadanego parametru wywołania, na przykład:
$ ./serwer.sh 10
Wykona zadaną liczbę gier “papier-nożyce-kamień” (w podanym przykłądzie to będzie 10 razy) z sktyptami opisanymi dalej (gracz1.sh i gracz2.sh) poprzez opisany poniżej algorytm:
Utwórz plik ‘komenda.txt’, a w nim zapisz komendę: ‘start’
Odczekaj, aż pojawią się oba pliki: los1.txt i los2.txt, a następnie:
Odczekaj 0.1 [s]
Skasuj plik ‘komenda.txt’
Pobierz z obu plików los1.txt i los2.txt zawartość
Rozstrzygnij wynik i zapisz go do gra.log
Skasuj pliki los1.txt i los2.txt
Po wykonaniu zadanej liczby gier podaj sumaryczny wynik
Do pliku ‘komenda.txt’ wpisz komendę: ‘stop’
Odczekaj 1 [s]
Skasuj plik ‘komenda.txt’
Zakończ działanie.
Dwa takie same skrypty (gracz1.sh i gracz2.sh), które będą graczami:
Sprawdzają istnienie pliku ‘komenda.txt’ oraz jego zawartość:
Jeśli jest w nim ‘start’ i jednocześnie nie ma pliku odpowiednio los1.txt lub los2.txt, to skrypt losuje ‘papier-nożyce-kamień’ i wylosowany wynik zapisuje odpowiednio w los1.txt lub los2.txt,
Jeśli jest w nim ‘stop’, zakończ działanie.
Jaki będzie wynik gry z parametrem 1000 ?
Czy potrafisz zmodyfikować plik serwer.sh tak, aby sam uruchamiał graczy ?
Czy spróbujesz rozbudować serwer.sh tak, aby także mógł obsługiwać dowolną liczbę graczy też podawaną jako parametr, np.: $ ./serwer.sh <liczba graczy> <liczba gier>
(nowe) Proszę uruchomić test dla 10 graczy i kolejno 10, 100 i 1000 rozgrywek, a następnie policzyć średnią i odchylenie standardowe wyników. Proszę o interpretację otrzymanych wartości.
### Zadanie 8. **
Napisz skrypt odnajdujący w sposób numeryczny (nie algebraiczny, a optymalizacyjny) miejsca zerowe zadanej fukcji wielomianowej (czyli szukamy takiego x, dla którego f(x0 == 0). Skrypt przyjmuje parametry w sposób następujący:
$ ./skrypt08.sh n a b c d…
n - stopień wielomianu
a, b, c, … - współczynniki wielomianu
Przykład:
$ ./skrypt08.sh 5 2 6 -5 0 8 -3
To wielomian 5-tego stopnia:
f(x) = 2 * x ^ 5 + 6 * x ^ 4 - 5 * x ^ 3 + 0 * x ^ 2 + 8 * x - 3
### Zadanie 9.
Napisz skrypt, którego wywołanie jest następujące:
$ ./skrypt09.sh <n>
Skrypt wypisuje <n> elementów ciągu Fibonacciego.
## Zestaw zadań 2
## Zestaw zadań 3
## Zestaw zadań 4
## Zestaw zadań 5
