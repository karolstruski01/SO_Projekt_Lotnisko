/**
 * Ćwiczenie 1: Identyfikatory procesu (PID, PPID) oraz obsługa błędów (errno, perror).
 * Wymaganie projektowe: każde wywołanie funkcji systemowej musi sprawdzać wynik
 * i zgłaszać błąd przez perror() oraz zmienną errno.
 */

#include <cerrno>     // zmienna errno i kody błędów (np. ENOENT)
#include <cstdio>     // perror()
#include <cstring>    // strerror()
#include <fcntl.h>    // open(), O_RDONLY
#include <iostream>   // std::cout
#include <sys/types.h>// pid_t
#include <unistd.h>   // getpid(), getppid(), close()

int main() {
    // pid_t to standardowy typ całkowity dla identyfikatorów procesów w POSIX/Linux
    pid_t moj_pid = getpid();
    pid_t pid_rodzica = getppid();

    std::cout << "=== Cwiczenie 1: Identyfikatory i obsluga bledow ===\n";
    std::cout << "Moj PID (identyfikator tego procesu):  " << moj_pid << "\n";
    std::cout << "PPID (identyfikator procesu rodzica): " << pid_rodzica << "\n\n";

    // Celowo próbujemy otworzyć nieistniejący plik wywołaniem systemowym open(),
    // żeby zobaczyć w praktyce jak działa obsługa błędów (errno + perror).
    const char* nieistniejaca_sciezka = "plik_ktory_nie_istnieje.txt";
    int fd = open(nieistniejaca_sciezka, O_RDONLY);

    if (fd == -1) {
        // Zapisujemy errno od razu, bo kolejne operacje (np. cout) mogą je nadpisać
        int kod_bledu = errno;

        std::cout << "Wywolanie open() zwrocilo -1. Wartosc errno = " << kod_bledu << "\n";
        std::cout << "Opis z strerror(errno): " << std::strerror(kod_bledu) << "\n";

        // perror() wypisuje nasz prefiks, dwukropek i systemowy opis błędu na stderr
        errno = kod_bledu;
        std::perror("Blad open()");
    } else {
        // Gdyby taki plik jednak istniał, zawsze zamykamy deskryptor
        if (close(fd) == -1) {
            std::perror("Blad close()");
            return 1;
        }
    }

    return 0;
}

