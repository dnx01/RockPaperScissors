#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int user, computer;
    int castig = 0; // 0 Reprezinta egalitate, 1 reprezinta victorie, -1 reprezinta infrangere

    srand(time(NULL)); // generatorul de numere aleatoare
    computer = rand() % 3 + 1; // Generează un număr aleator între 1 și 3 pentru a reprezenta opțiunea computerului

    // Ieșirea și Intrarea Utilizatorului

    printf("Alege: \n1. Piatra\n2. Hartie\n3. Foarfeca\n");
    scanf("%d", &user);

    // Determinați Câștigătorul

    if(user == computer) {
        castig = 0; // Egalitate
    } else if ((user == 1 && computer == 3) || (user == 2 && computer == 1) || (user == 3 && computer == 2)) {
        castig = 1; // Userul castiga
    } else {
        castig -1; // Userul pierde
    }

    if (castig == 0) {
        printf("Egalitate");
    } else if (castig == 1) {
        printf("Ai Castigat\n");
    } else {
        printf("Ai pierdut\n");
    }
    

    return 0;
}

// by dnz