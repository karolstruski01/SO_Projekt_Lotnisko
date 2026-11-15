**Link do repozytorium GitHub:** https://github.com/karolstruski01/SO_Projekt_Lotnisko

---

# Temat 16 – Lotnisko

## 1. Opis ogólny zadania

Lotnisko w Krakowie posiada jeden pas startowy i obsługuje przyloty oraz odloty samolotów z kilkudziesięciu krajów świata. Większość przylotów i odlotów (ok. 80%) dotyczy krajów strefy Schengen. W systemie mieszanym (gdzie na jednym pasie na przemian odbywają się starty i lądowania, jak w podkrakowskich Balicach) minimalny odstęp między startującym a lądującym samolotem wynosi zazwyczaj około 1,5 do 2 minut. Port lotniczy Kraków Airport w Balicach obsługuje średnio około 200 do 240 operacji lotniczych w ciągu doby. W terminologii lotniczej „operacja” oznacza jedno lądowanie lub jeden start, co oznacza, że każdego dnia na lotnisku ląduje i startuje łącznie od 100 do 120 samolotów.

Po wylądowaniu czas pobytu samolotu na ziemi zależy m.in. od wielkości i trasy samolotu:
- **Wąskokadłubowe** (np. Boeing 737, Airbus A320): zabierają ok. 150–200 pasażerów. Ich obsługa jest szybka (pobyt na ziemi trwa 25–60 minut).
- **Szerokokadłubowe** (np. Boeing 787 Dreamliner, Airbus A350): latają na trasach transoceanicznych i zabierają 300+ osób. Tutaj proces trwa minimum 90–180 minut.

Wieża kontroli lotów (WKR) kieruje ruchem samolotów na terenie lotniska oraz w jego bezpośredniej przestrzeni powietrznej, nadzorując bezpieczne starty, lądowania i manewry naziemne.

### Główne zadania kontrolerów na wieży
- **Zarządzanie pasem startowym:** Kontroler decyduje, kiedy dany samolot może wjechać na pas, oderwać się od ziemi lub bezpiecznie wylądować.
- **Nadzór nad ruchem naziemnym:** Każdy ruch maszyny lub pojazdu technicznego po drogach kołowania wymaga zgody i wyznaczenia bezpiecznej trasy, aby uniknąć kolizji.
- **Utrzymanie bezpiecznych odległości:** Kontrolerzy dbają o zachowanie odpowiednich odstępów między startującymi i lądującymi samolotami, biorąc pod uwagę m.in. zawirowania powietrza (tzw. turbulencje w śladzie aerodynamicznym).

### Kluczowe stanowiska na wieży kontroli lotów
- **Kontroler naziemny (Ground Control):** Odpowiada za ruch wszystkich maszyn i aut obsługi na drogach kołowania i płytach postojowych, aż do linii oczekiwania przed pasem startowym.
- **Kontroler pasa startowego (Local Control):** Zarządza samym pasem startowym, wydaje ostateczne zezwolenia na start lub lądowanie oraz monitoruje sytuację wzrokowo i za pomocą radarów bliskiego zasięgu.
- **Szef zmiany / Koordynator:** Nadzoruje płynność pracy całego zespołu, współpracuje z meteorologami oraz służbami technicznymi i ratowniczymi lotniska.

### Harmonogram i kategorie opóźnień
Na lotnisku obowiązuje harmonogram przylotów i odlotów. Różnice między planowanymi (rozkładowymi) a rzeczywistymi czasami przylotów i odlotów na lotnisku w Balicach wynikają ze specyfiki ruchu lotniczego i dzieli się je na trzy główne kategorie statusów:
- **Loty o czasie (większość operacji):** Za zgodne z planem (*on-time*) w lotnictwie uznaje się rejsy, których przesunięcie wynosi maksymalnie +/- 15 minut od rozkładu:
  - *W odlotach:* Samoloty starają się startować precyzyjnie w wyznaczonej godzinie (lub kilka minut po niej), aby nie stracić swojego tzw. slotu (okienka czasowego na start).
  - *W przylotach:* Ze względu na tzw. *schedule padding* (dodawanie przez linie lotnicze zapasu czasu do rozkładu), samoloty przy sprzyjających wiatrach bardzo często lądują od 5 do 15 minut przed planowaną godziną.
- **Typowe opóźnienia operacyjne:** Niewielkie przesunięcia (od 15 do 45 minut) są codziennością na każdym dużym lotnisku i wynikają z tzw. efektu domina. Jeśli samolot realizuje w ciągu dnia 4–6 tras, to poranne opóźnienie w innym porcie (np. z powodu kolejki do startu w Londynie czy opóźnionego boardingu w Rzymie) przenosi się na kolejne loty, w tym te realizowane z i do Krakowa.
- **Duże opóźnienia i anomalie (powyżej 45–60 minut):** Balice bywają w czołówce lotnisk zmagających się z większymi opóźnieniami w okresach wzmożonego ruchu letniego oraz jesienno-zimowego. Wynika to z dwóch głównych barier:
  - *Warunki pogodowe (mgły):* Podkrakowska dolina słynie z gęstych mgieł. Kiedy widoczność drastycznie spada, lądowania są wstrzymywane. Powoduje to przesunięcia przylotów o kilka godzin lub konieczność przekierowania samolotów na lotniska zapasowe (najczęściej Katowice-Pyrzowice lub Rzeszów-Jasionkę).
  - *Infrastruktura (jeden pas):* Ponieważ lotnisko obsługuje gigantyczny ruch (ponad 200 operacji na dobę) na jednym pasie startowym, jakakolwiek usterka techniczna samolotu na pasie lub zablokowanie drogi kołowania błyskawicznie wstrzymuje wszystkie inne starty i lądowania, generując lawinowe opóźnienia.

### Przebieg obsługi naziemnej (turnaround)
Symulacja rozpoczyna się od przylotu. Procedura `PRZYLOTY` generuje w losowych momentach czasu (generalnie zbliżonych do harmonogramu przylotów) kolejne samoloty (z określoną liczbą pasażerów) różnych typów, które komunikują się z wieżą kontroli lotów i wykonując polecenia kontrolera: lądują, zjeżdżają z drogi startowej, kołują na stanowiska postojowe, parkują, wysiadają pasażerowie itd.

Od momentu zatrzymania się na stanowisku postojowym do ponownego ruszenia w drogę rozpoczyna się tzw. *turnaround* (obsługa naziemna samolotu). W liniach niskokosztowych (np. Ryanair czy Wizz Air w Balicach) cały ten proces trwa zaledwie 25 do 30 minut, natomiast przy dużych maszynach długodystansowych może zająć około 1,5 do 2 godzin.

Działania podczas obsługi naziemnej odbywają się równolegle, według precyzyjnie rozpisanych procedur, aby samolot jak najkrócej stał na ziemi:
- **Rozładunek (Deboarding) – pierwsze 10 minut:**
  - *Podłączenie zasilania:* Piloci wyłączają silniki, a samolot zostaje podłączony do zewnętrznego zasilania elektrycznego i klimatyzacji lotniskowej (lub korzysta z własnego silnika pomocniczego APU).
  - *Podstawienie schodów/rękawa:* Otwierane są drzwi i pasażerowie opuszczają pokład.
  - *Wypakowanie bagaży:* Ekipy naziemne otwierają luki bagażowe pod pokładem i za pomocą taśmociągów wyładowują walizki oraz cargo.
- **Przygotowanie kabiny i serwis – środek cyklu (10–20 minuta):**
  - *Szybkie sprzątanie:* Personel pokładowy (lub zewnętrzna ekipa) zbiera śmieci z kieszeni foteli i sprawdza, czy nikt niczego nie zostawił.
  - *Katering:* Do samolotów tradycyjnych linii podjeżdżają specjalne ciężarówki z podnośnikami, które wymieniają wózki z jedzeniem i napojami.
  - *Serwis sanitarny:* Druga ekipa opróżnia zbiorniki toalet oraz uzupełnia zapasy czystej wody.
  - *Tankowanie i przegląd techniczny (równolegle do serwisu):*
    - *Tankowanie paliwa:* Pod skrzydło podjeżdża cysterna. Ilość paliwa jest precyzyjnie wyliczona przez pilotów na kolejną trasę (z uwzględnieniem zapasu na ewentualne oczekiwanie nad lotniskiem docelowym).
    - *Przegląd przedlotowy (Walkaround):* Jeden z pilotów schodzi na płytę lotniska i obchodzi samolot dookoła. Wizualnie sprawdza stan opon, hamulców, silników oraz czy kadłub nie został uderzony przez ptaka podczas poprzedniego lotu.
- **Załadunek (Boarding) – ostatnie 10–15 minut:**
  - *Nowi pasażerowie:* Podczas gdy do luków trafiają bagaże rejestrowane pasażerów kolejnego lotu, na pokład wpuszczani są nowi podróżni.
  - *Przygotowanie kokpitu:* Piloci wprowadzają trasę lotu do komputera pokładowego (FMC), sprawdzają aktualną pogodę i uzyskują od kontroli lotów zgodę na start.
  - *Zamknięcie drzwi:* Szefowa pokładu zgłasza gotowość, drzwi zostają zaryglowane, a ruchome schody lub rękaw odjeżdżają od kadłuba.
  - *Wypychanie i uruchomienie silników (Pushback):* Samolot nie potrafi samodzielnie cofać (użycie biegu wstecznego silników na płycie jest zabronione). Specjalny ciągnik lotniskowy (*pushback tug*) wypycha maszynę ze stanowiska tyłem na drogę kołowania. W trakcie wypychania piloci, za zgodą kontrolera, uruchamiają po kolei główne silniki. Gdy ciągnik się odłącza, samolot jest gotowy do kołowania na pas startowy.

### Przekierowania i zasady działania symulacji
Procedura `PRZYLOTY` co jakiś czas generuje „samolot”, który jest znacząco przed czasem lub znacznie opóźniony. Wówczas kontrola lotów musi tak poustawiać sloty dla wszystkich samolotów, aby mogły bezpiecznie wylądować i wystartować. Jeżeli to nie jest możliwe (np. z powodu braku wolnych stanowisk postojowych, wyczerpania rezerwy paliwa w kolejce do lądowania, kolizji z lądowaniem awaryjnym lub zamknięcia pasa), niektóre z samolotów zostają skierowane na lotnisko zapasowe. Przed każdym startem piloci mają obowiązek wpisać do planu lotu tzw. *alternate airport* (lotnisko zapasowe – `KTW`, `WAW`, `RZE`). Wpływ na ostateczny wybór ma ilość paliwa: samolot musi mieć tzw. rezerwę dywersyjną – paliwo pozwalające na dolot z Krakowa do lotniska zapasowego i dodatkowe 30 minut krążenia nad nim.

Zasady działania symulacji:
- Procedura `PRZYLOTY` generuje kolejne samoloty (procesy) zgodnie z harmonogramem.
- Co jakiś czas generowany jest samolot znacząco przed czasem lub znacznie opóźniony.
- Sporadycznie zdarzają się sytuacje, w których samolot (niekoniecznie ten, który zgodnie z planem miał lądować w Balicach) musi lądować awaryjnie – wówczas kontrolerzy tak ustawiają sloty, aby wszystko przebiegło bez zakłóceń.
- Samoloty, które lądują awaryjnie, nie odlatują w tym samym dniu.
- Samolot po wylądowaniu (i wykonaniu czynności związanych z obsługą naziemną) zabiera kolejnych pasażerów z hali odlotów i startuje.
- Samoloty latające w strefie Schengen mogą wykonać od 4 do 6 lotów w ciągu doby (mogą kilka razy w tym samym dniu lądować na lotnisku w Balicach), pozostałe (długodystansowe) lądują i startują tylko raz na dobę.
- Symulacja trwa ok. 24 godziny (w przeskalowanym czasie symulacyjnym) i kończy się po odlocie ostatniego samolotu lub zamknięciu pasa/lotniska i przekierowaniu pozostałych samolotów na inne lotniska.
- **Sygnał 1 (polecenie Zarządcy):** Pas startowy zostaje czasowo zamknięty – samoloty w powietrzu muszą zostać przekierowane na lotniska zastępcze.
- **Sygnał 2 (polecenie Zarządcy):** Pas startowy zostaje otwarty – samoloty mogą ponownie lądować i startować.
- **Sygnał 3 (polecenie Zarządcy):** Lotnisko w danym momencie/dniu zostaje zamknięte. Samoloty, które wylądowały, przechodzą obsługę naziemną, ale już nie startują; samoloty, które są w powietrzu, muszą zostać przekierowane na lotniska zastępcze.

Napisz procedury symulujące działanie lotniska: `Zarządca`, `Kontroler`, `Samolot`, `Obsługa naziemna` i `Pasażer`. Raport z przebiegu symulacji (logi) zapisać w pliku (plikach) tekstowym.

---

## 2. Doprecyzowanie założeń i parametrów symulacji

W celu usunięcia niejasności z opisu zadania przyjęto następujące założenia konfiguracyjne i projektowe:
1. **Skalowanie czasu:** Jedna minuta czasu symulacyjnego odpowiada konfigurowalnemu interwałowi (np. `20–50 ms` czasu rzeczywistego), dzięki czemu pełna doba operacyjna (24 h = 1440 minut) wykonuje się w kilkadziesiąt sekund.
2. **Parametry infrastruktury (walidowane na starcie):**
   - liczba stanowisk postojowych na płycie (np. domyślnie `S = 12`, konfigurowalne z zachowaniem limitów),
   - maksymalna liczba jednocześnie aktywnych procesów samolotów i pasażerów (zabezpieczenie przed przekroczeniem limitów systemowych na serwerze `torus.uck.pk.edu.pl`),
   - minimalny odstęp na pasie startowym: `2` minuty symulacyjne między kolejnymi operacjami (start/lądowanie).
3. **Powody przekierowania na lotnisko zapasowe (`KTW`, `WAW`, `RZE`):**
   - czasowe zamknięcie pasa (`sygnał 1`) lub zamknięcie lotniska (`sygnał 3`),
   - zablokowanie pasa przez lądowanie awaryjne lub brak wolnego slotu przed wyczerpaniem rezerwy paliwa na oczekiwanie,
   - brak wolnych stanowisk postojowych na płycie lotniska.
   - Wybór konkretnego lotniska (`KTW`, `WAW`, `RZE`) zależy od pozostałej ilości paliwa samolotu (rezerwa dywersyjna + 30 min krążenia).
4. **Mapowanie sygnałów Zarządcy:**
   - `Sygnał 1` -> `SIGUSR1` (czasowe zamknięcie pasa startowego),
   - `Sygnał 2` -> `SIGUSR2` (ponowne otwarcie pasa startowego),
   - `Sygnał 3` -> `SIGTERM` lub sygnał czasu rzeczywistego `SIGRTMIN` (zamknięcie lotniska na koniec dnia / wygaszenie ruchu).
5. **Walidacja danych wejściowych:** Wszystkie parametry podawane przez użytkownika (liczba operacji, liczba stanowisk, skala czasu, maksymalna liczba procesów) są sprawdzane przed uruchomieniem symulacji. W przypadku błędnych wartości program wyświetla czytelny komunikat i przerywa start.

---

## 3. Dokładny schemat działania lotniska z wykorzystaniem funkcji systemowych

Symulacja jest realizowana w języku C/C++ w modelu **zdecentralizowanym na niezależnych procesach** (bez rozwiązania scentralizowanego w jednym procesie). Wszystkie programy komunikują się ze sobą za pomocą mechanizmów IPC systemu Linux oraz obsługują błędy wywołań systemowych przez `perror()` i `errno`.

### Krok 1: Inicjalizacja środowiska i zasobów IPC (proces główny `lotnisko` / `main`)
1. Proces główny wczytuje oraz waliduje parametry wejściowe symulacji (liczba operacji/samolotów, liczba stanowisk postojowych, limit procesów, skala czasu).
2. Generuje unikalne klucze IPC za pomocą `ftok()`.
3. Tworzy struktury komunikacji i synchronizacji z **minimalnymi wymaganymi prawami dostępu** (`0600`):
   - **Pamięć dzieloną** (`shmget()`, `shmat()`): przechowuje współdzielony stan lotniska (status pasa: otwarty/zamknięty, status lotniska: otwarte/zamknięte, zajętość stanowisk postojowych, aktualny czas symulacji, liczniki operacji i aktywnych procesów).
   - **Zbiór semaforów System V** (`semget()`, `semctl(..., SETVAL/SETALL, ...)`): chroni pamięć dzieloną (wzajemne wykluczanie), kontroluje wyłączność pasa startowego, ogranicza dostęp do stanowisk postojowych, synchronizuje zapisy do pliku logów oraz pilnuje limitu procesów (bez użycia *busy waiting*).
   - **Kolejki komunikatów System V** (`msgget()`):
     - kolejka żądań do wieży kontroli lotów (`Samolot` -> `Kontroler`) i odpowiedzi ze zgodą/odmową/przekierowaniem (`Kontroler` -> `Samolot`, rozróżnianie odbiorców po polu `mtype = PID`),
     - kolejka zleceń obsługi naziemnej (`Samolot` <-> `Obsługa naziemna`),
     - kolejka pasażerów i odprawy/boardingu (`Pasażer` <-> `Samolot`).
4. Otwiera/tworzy plik raportu tekstowego (`open()` / `creat()`) i zapisuje nagłówek symulacji za pomocą `write()`.

### Krok 2: Uruchomienie głównych procesów lotniska (`fork()` + `exec*()` + `sigaction()`)
1. Proces główny przy użyciu `fork()` i `execl()` / `execvp()` uruchamia osobne programy potomne:
   - **`kontroler`** – proces Wieży Kontroli Lotów (WKR),
   - **`obsluga_naziemna`** – proces (lub pula procesów) obsługujący stanowiska postojowe,
   - **`zarzadca`** – proces sterujący pracą lotniska za pomocą sygnałów,
   - **`przyloty`** – procedura/proces generujący harmonogram przylotów samolotów i grupy pasażerów.
2. Procesy `kontroler`, `przyloty` oraz `obsluga_naziemna` rejestrują procedury obsługi sygnałów (`SIGUSR1`, `SIGUSR2`, `SIGTERM`/`SIGRTMIN`) za pomocą `sigaction()`, dzięki czemu reagują asynchronicznie na polecenia Zarządcy bez przerywania poprawności sekcji krytycznych (użycie flag oraz restart/obsługa `EINTR`).

### Krok 3: Generowanie ruchu lotniczego (procedura `PRZYLOTY` + proces `Samolot`)
1. Proces `przyloty` odczytuje harmonogram dobowy i w odpowiednich momentach czasu (z uwzględnieniem losowych odchyleń: *on-time* ±15 min, opóźnień 15–45 min, anomalii >45 min oraz sporadycznych przypadków awaryjnych) tworzy nowe procesy **`samolot`** przez `fork()` + `execl()`.
2. Przed każdym `fork()` proces sprawdza limit jednoczesnych procesów w oparciu o semafor (`semop()`) oraz zbiera zakończone procesy potomne (`waitpid(..., WNOHANG)`), aby nie powstawały procesy zombie.
3. Proces `samolot` otrzymuje w argumentach `exec` swój typ (wąskokadłubowy/szerokokadłubowy), trasę (Schengen – 4–6 rotacji / poza Schengen – 1 rotacja), planowany czas, status awaryjności, poziom paliwa oraz liczbę pasażerów.
4. Równolegle generowane są procesy **`pasazer`** (`fork()` + `execl()`), które zgłaszają gotowość do odlotu w hali odlotów przez kolejkę komunikatów (`msgsnd()`).

### Krok 4: Lądowanie i zarządzanie pasem startowym (`Samolot` <-> `Kontroler`)
1. Nadlatujący `samolot` wysyła komunikat żądania lądowania do kolejki `Kontrolera` (`msgsnd()`), podając typ operacji, swój `PID`, zapas paliwa oraz flagę ewentualnej sytuacji awaryjnej.
2. `Kontroler` odbiera zgłoszenia przez `msgrcv()` (nadając wyższy priorytet `mtype` lądowaniom awaryjnym oraz samolotom z niską rezerwą paliwa):
   - sprawdza w pamięci dzielonej (`shmat()`, chronione `semop()`), czy lotnisko i pas są otwarte oraz czy jest wolne stanowisko postojowe i bezpieczny odstęp czasowy na pasie (`1,5–2 min` symulacji),
   - jeśli lądowanie jest możliwe – wyznacza slot, rezerwuje stanowisko w pamięci dzielonej i odsyła zgodę przez `msgsnd()` (z `mtype = PID_samolotu`),
   - jeśli pas jest zamknięty lub brak możliwości przydzielenia slotu przed wyczerpaniem paliwa – wyznacza lotnisko zapasowe (`KTW`, `WAW` lub `RZE`) i wysyła nakaz przekierowania (`msgsnd()`).
3. Po uzyskaniu zgody `samolot` zajmuje semafor pasa startowego (`semop()`), wykonuje operację lądowania, zwalnia pas po bezpiecznym zjeździe na drogę kołowania (`semop()`) i kołuje na przydzielone stanowisko postojowe.
4. Jeśli samolot wylądował **awaryjnie**, po opuszczeniu pasa i wyjściu pasażerów kończy udział w dalszych lotach w tym dniu (`exit()`).

### Krok 5: Obsługa naziemna (*turnaround*) i obsługa pasażerów (`Samolot` <-> `Obsługa naziemna` <-> `Pasażer`)
1. Po zaparkowaniu na stanowisku postojowym `samolot` powiadamia `Obsługę naziemną` przez kolejkę komunikatów (`msgsnd()`).
2. `Obsługa naziemna` (oraz/lub proces `samolot`) realizuje fazy *turnaround* zgodnie z typem maszyny (`25–60 min` dla wąskokadłubowych, `90–180 min` dla szerokokadłubowych):
   - **Deboarding:** wyjście pasażerów przylatujących (procesy `pasazer` odbierają komunikat opuszczenia pokładu przez `msgrcv()` i kończą działanie przez `exit()`), wyładunek bagaży.
   - **Serwis i tankowanie:** sprzątanie, katering, serwis sanitarny, wyliczenie paliwa wraz z rezerwą dywersyjną na `alternate airport`, przegląd techniczny (*walkaround*).
   - **Boarding:** `samolot` wysyła zapotrzebowanie na nowych pasażerów z hali odlotów; oczekujące procesy `pasazer` przechodzą odprawę i wchodzą na pokład (`msgsnd()` / `msgrcv()`), a jeśli lotnisko zostało w międzyczasie zamknięte (`sygnał 3`), odlot jest odwoływany.
3. Po zakończeniu obsługi naziemnej `Obsługa naziemna` potwierdza gotowość maszyny (`msgsnd()`), następuje *pushback* i uruchomienie silników.

### Krok 6: Start samolotu i rotacje w strefie Schengen (`Samolot` <-> `Kontroler`)
1. Jeśli lotnisko nie zostało zamknięte (`sygnał 3`), gotowy `samolot` prosi `Kontrolera` o slot na start (`msgsnd()`).
2. `Kontroler` weryfikuje status pasa (czy nie jest zamknięty `sygnałem 1`) oraz odstęp czasowy w systemie mieszanym i wysyła zezwolenie (`msgsnd()`).
3. `Samolot` zajmuje semafor pasa (`semop()`), wykonuje start, zwalnia semafor pasa i stanowisko postojowe w pamięci dzielonej.
4. Dla samolotów strefy Schengen proces może wykonać kolejne rotacje (łącznie `4–6` lotów w ciągu doby) po upływie czasu przelotu lub zakończyć dzień po ostatnim rejsie (`exit()`).

### Krok 7: Polecenia Zarządcy – obsługa sygnałów (`Zarządca` -> `Kontroler` / `Przyloty` / `Samolot`)
Proces `zarzadca` (interaktywnie lub według scenariusza czasowego/testowego) wysyła sygnały funkcją `kill()`:
- **`Sygnał 1` (`SIGUSR1`):** `Kontroler` ustawia flagę czasowego zamknięcia pasa w pamięci dzielonej; wstrzymuje nowe lądowania i starty, a samoloty w powietrzu przekierowuje na `KTW`/`WAW`/`RZE`.
- **`Sygnał 2` (`SIGUSR2`):** `Kontroler` przywraca status otwartego pasa w pamięci dzielonej; wstrzymany ruch zostaje wznowiony.
- **`Sygnał 3` (`SIGTERM` / `SIGRTMIN`):** Lotnisko zostaje zamknięte na dany dzień. `Przyloty` przestaje generować nowe samoloty; maszyny w powietrzu są kierowane na lotniska zapasowe; maszyny na ziemi kończą obsługę naziemną, ale nie otrzymują zgody na start i kończą pracę (`exit()`).

### Krok 8: Zapis logów, zakończenie symulacji i sprzątanie zasobów
1. Każdy istotny komunikat (przylot, zgoda wieży, faza *turnaround*, przekierowanie, zmiana stanu pasa, błąd) jest zapisywany do pliku tekstowego logów (`write()`, chronione semaforem zapisu, żeby wpisy różnych procesów nie mieszały się) oraz opcjonalnie wyświetlany na terminalu.
2. Proces główny czeka na zakończenie wszystkich procesów potomnych funkcją `wait()` / `waitpid()`, zapobiegając powstawaniu procesów *zombie*.
3. Po zakończeniu pracy przez wszystkie procesy wykonywane jest obowiązkowe sprzątanie zasobów IPC:
   - odłączenie pamięci dzielonej: `shmdt()`,
   - usunięcie segmentu pamięci dzielonej: `shmctl(..., IPC_RMID, NULL)`,
   - usunięcie zbioru semaforów: `semctl(..., 0, IPC_RMID)`,
   - usunięcie kolejek komunikatów: `msgctl(..., IPC_RMID, NULL)`,
   - zamknięcie deskryptorów plików: `close()`.
4. Każde wywołanie funkcji systemowej sprawdza wartość zwracaną (`-1` / `NULL`) i zgłasza ewentualne błędy poprzez `perror()` oraz `errno`.

---

## 4. Plan testów

*(Uwaga: walidacja poprawności danych wprowadzanych przez użytkownika jest realizowana jako osobne wymaganie obowiązkowe i nie stanowi poniższych testów).*

### Test 1: Przeciążenie jednego pasa startowego w systemie mieszanym (brak zakleszczeń)
- **Cel testu:** Sprawdzenie, czy przy dużym natężeniu jednoczesnych przylotów i odlotów na jednym pasie startowym oraz ograniczonej liczbie stanowisk postojowych nie dochodzi do zakleszczenia (*deadlock*) ani naruszenia minimalnych odstępów czasowych.
- **Warunki początkowe i przebieg:** Uruchomienie symulacji ze zmniejszoną liczbą stanowisk postojowych (np. `4` stanowiska) i gęstą falą przylotów (`15–20` samolotów w krótkim oknie czasowym), przy jednoczesnych żądaniach startu samolotów kończących obsługę naziemną.
- **Weryfikowane mechanizmy:** Semafory chroniące pas startowy i pamięć dzieloną (`semop`), kolejki komunikatów do `Kontrolera` (`msgsnd`/`msgrcv`), logika przyznawania slotów.
- **Oczekiwany rezultat:** W każdej chwili na pasie przebywa maksymalnie jeden samolot z zachowaniem odstępu `1,5–2 min`; samoloty na ziemi nie są zablokowane przed startem przez kolejkowane przyloty; nadmiarowe samoloty w powietrzu po wyczerpaniu możliwości oczekiwania zostają bezpiecznie przekierowane na lotniska zapasowe; wszystkie procesy kończą pracę.

### Test 2: Lądowanie awaryjne oraz obsługa samolotów przed czasem i znacznie opóźnionych
- **Cel testu:** Weryfikacja mechanizmu priorytetyzacji w kolejce komunikatów oraz braku zagłodzenia (*starvation*) pozostałych samolotów.
- **Warunki początkowe i przebieg:** W trakcie normalnego ruchu zgodnego z harmonogramem procedura `PRZYLOTY` generuje samolot ze statusem lądowania awaryjnego, a także samoloty przylatujące przed czasem (`-15 min`) oraz znacznie opóźnione (`+60 min`).
- **Weryfikowane mechanizmy:** Filtrowanie i priorytetyzacja typów komunikatów `mtype` w `msgrcv()`, przeliczanie slotów w pamięci dzielonej, aktualizacja stanu samolotu po lądowaniu awaryjnym.
- **Oczekiwany rezultat:** Samolot awaryjny otrzymuje natychmiastowy priorytetowy slot lądowania bez naruszenia bezpieczeństwa trwającej operacji na pasie, po czym pozostaje na ziemi (nie startuje w tym samym dniu). Pozostałe samoloty otrzymują przesunięte sloty lub – przy braku paliwa – przekierowanie na `KTW`/`WAW`/`RZE`.

### Test 3: Czasowe zamknięcie i ponowne otwarcie pasa startowego (`Sygnał 1` i `Sygnał 2`)
- **Cel testu:** Sprawdzenie poprawności asynchronicznej obsługi sygnałów (`sigaction`) oraz zachowania spójności stanu lotniska przy wstrzymywaniu i wznawianiu operacji.
- **Warunki początkowe i przebieg:** Podczas aktywnej symulacji (część samolotów na podejściu, część w trakcie *turnaround* na płycie, część oczekująca na start) `Zarządca` wysyła `SIGUSR1` (`Sygnał 1`). Po upływie ustalonego czasu (np. 30 min symulacyjnych) `Zarządca` wysyła `SIGUSR2` (`Sygnał 2`).
- **Weryfikowane mechanizmy:** Obsługa sygnałów `sigaction()`, obsługa przerwań wywołań blokujących (`EINTR`), synchronizacja dostępu do flag stanu pasa w pamięci dzielonej (`shmget`/`shmat` + semafory).
- **Oczekiwany rezultat:** Po `SIGUSR1` żadna maszyna nie rozpoczyna lądowania ani startu; samoloty w powietrzu zostają przekierowane na lotniska zastępcze, natomiast obsługa naziemna na płycie przebiega bez przerwania. Po `SIGUSR2` samoloty gotowe na stanowiskach otrzymują zgodę na start, a nowo przylatujące normalnie lądują.

### Test 4: Zamknięcie lotniska (`Sygnał 3`) i weryfikacja pełnego usunięcia struktur IPC
- **Cel testu:** Sprawdzenie procedury bezpiecznego zakończenia symulacji w momencie przerwania dnia operacyjnego oraz weryfikacja braku wycieków zasobów systemowych i procesów *zombie*.
- **Warunki początkowe i przebieg:** W środku intensywnego ruchu (aktywne procesy `Samolot` w powietrzu i podczas obsługi naziemnej oraz oczekujące procesy `Pasażer`) `Zarządca` wysyła `Sygnał 3`.
- **Weryfikowane mechanizmy:** Propagacja zakończenia do procesów potomnych, odbiór statusów przez `wait()`/`waitpid()`, zwalnianie zasobów przez `shmdt()`, `shmctl(IPC_RMID)`, `semctl(IPC_RMID)`, `msgctl(IPC_RMID)`.
- **Oczekiwany rezultat:** Samoloty w powietrzu zostają przekierowane na lotniska zapasowe; samoloty na ziemi kończą obsługę naziemną i kończą działanie bez startu; proces główny zbiera wszystkie procesy potomne (brak procesów `Z` w `ps`), a polecenie `ipcs` po zakończeniu programu nie wykazuje żadnych pozostałych segmentów pamięci, semaforów ani kolejek komunikatów.

### Test 5: Limit procesów oraz współbieżny dostęp przy rotacjach Schengen i obsłudze pasażerów
- **Cel testu:** Sprawdzenie ochrony przed przekroczeniem maksymalnej dopuszczalnej liczby procesów w systemie oraz poprawności synchronizacji przy wielokrotnych rotacjach samolotów i równoległej obsłudze pasażerów.
- **Warunki początkowe i przebieg:** Uruchomienie symulacji z ustawionym niskim limitem jednoczesnych procesów potomnych oraz zwiększoną częstotliwością generowania lotów Schengen (`4–6` cykli lądowanie–obsługa–start na dobę) i pasażerów.
- **Weryfikowane mechanizmy:** Semafor limitujący pulę aktywnych procesów (brak *busy waiting*), poprawność zliczania pasażerów wchodzących/wychodzących przez kolejki komunikatów, atomowość zapisu logów do pliku tekstowego.
- **Oczekiwany rezultat:** Liczba równocześnie działających procesów nigdy nie przekracza zadanego limitu; samoloty Schengen poprawnie realizują wielokrotne rotacje bez wyścigu o stanowiska postojowe; liczba pasażerów w samolocie jest spójna z jego pojemnością; plik z raportem nie zawiera uszkodzonych ani przeplecionych linii.
