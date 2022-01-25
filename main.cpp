#include <iostream>
#include "dodawanie.h"
#include "odejmowanie.h"
#include "mnozenie.h"
#include "dzielenie.h"

int main(){
    int znak, liczba1, liczba2;
    printf("Wybierz operacje (1-dodawanie, 2-odejmowanie, 3-mnozenie, 4-dzielenie");
    scanf("%d", &znak);
    printf("Podaj dwie liczby");
    scanf("%d", &liczba1);
    scanf("%d", &liczba2);
    switch (znak){
        case 1;
            dodawanie();
            break;
        case 2;
            odejmowanie();
            break;
        case 3;
            mnozenie();
            break
        case 4;
            dzielenie();
            break;
    }
}
