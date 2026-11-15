#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
  std::cout << "[Start] Proces poczatkowy PID=" << getpid() << std::endl;

  // TODO 1: Wywołaj fork() i zapisz wynik do zmiennej typu pid_t
  pid_t pid = fork();

  // TODO 2: Sprawdź, czy fork() zwrócił -1.
  // Jeśli tak: wypisz błąd przez std::perror("fork") i zwróć 1.
  if (pid == -1) {
    std::perror("fork");
    return 1;
  }
  // TODO 3: Jeśli wynik == 0 (jesteś w procesie POTOMNYM):
  //   - wypisz swój PID (getpid()) oraz PID rodzica (getppid())
  //   - uśpij proces na 2 sekundy (sleep(2))
  //   - wypisz komunikat, że dziecko kończy pracę
  //   - zakończ proces przez exit(42) (specjalnie podajemy liczbę 42, żeby ją
  //   odczytać u rodzica)
  if (pid == 0) {
    std::cout << "Moj pid: " << getpid() << std::endl
              << "PID rodzica: " << getppid() << std::endl;
    sleep(2);
    std::cout << "Dziecko konczy prace" << std::endl;
    exit(42);
  }

  // TODO 4: W przeciwnym razie (jesteś w procesie MACIERZYSTYM, wynik > 0):
  //   - wypisz swój PID oraz PID utworzonego dziecka (wartość zwróconą przez
  //   fork())
  //   - poczekaj na zakończenie dziecka funkcją wait(&status)
  //   - sprawdź, czy wait() nie zwrócił -1 (jeśli tak: std::perror("wait") i
  //   return 1)
  //   - sprawdź makrem WIFEXITED(status) czy dziecko zakończyło się normalnie
  //     i wypisz kod wyjścia używając WEXITSTATUS(status)
  if (pid > 0) {
    std::cout << "Moj pid: " << getpid() << std::endl
              << "Pid dziecka: " << pid << std::endl;
    int status = 0;
    if (wait(&status) == -1) {
      std::perror("wait");
      return 1;
    }
    if (WIFEXITED(status)) {
      std::cout << WEXITSTATUS(status) << std::endl;
    }
  }

  return 0;
}