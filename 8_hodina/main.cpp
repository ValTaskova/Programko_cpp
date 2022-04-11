#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime> 
#include <climits>

double vypocitaj_priemer(int pole[]);
void vypocitaj_max(int pole[]);
void vypocitaj_min(int pole[]);
void vypocitaj_vacsie_nez_priemer(int pole[], double priemer);
void vypocitaj_mensie_nez_priemer(int pole[], double priemer);

int main() {        
    
    double priemer;
    int pole[100];
    srand((unsigned) time(0));
    
    for (int i = 0; i < 100; i++)
    {
        pole[i] = rand();
        //std::cout << pole[i] << std::endl;
    }
    
    std::cout << "Pole je vygenerovane. Vyberte si z nasledujucich moznosti:" << std::endl;
    std::cout << "1) Vypocitanie priemeru" << std::endl;
    std::cout << "2) Najdenie najvacsieho cisla" << std::endl;
    std::cout << "3) Najdenie najmensieho cisla" << std::endl;
    std::cout << "4) Vypocitanie poctu cisel, ktore su vacsie nez priemer" << std::endl;
    std::cout << "5) Vypocitanie poctu cisel, ktore su mensie nez priemer" << std::endl;
    std::cout << "6) Ukoncenie programu" << std::endl;

    int menu;
    std::cin >> menu;

    while (menu != 6) {

        switch (menu)
        {
        case 1:
            priemer = vypocitaj_priemer(pole);
            break;
        case 2:
            vypocitaj_max(pole);
            break;
        case 3:
            vypocitaj_min(pole);
            break;
        case 4:
            vypocitaj_vacsie_nez_priemer(pole, priemer);
            break;
        case 5:
            vypocitaj_mensie_nez_priemer(pole, priemer);
            break;
        
        default:
            break;
        }

        std::cout << "Vyberte si z nasledujucich moznosti:" << std::endl;
        std::cout << "1) Vypocitanie priemeru" << std::endl;
        std::cout << "2) Najdenie najvacsieho cisla" << std::endl;
        std::cout << "3) Najdenie najmensieho cisla" << std::endl;
        std::cout << "4) Vypocitanie poctu cisel, ktore su vacsie nez priemer" << std::endl;
        std::cout << "5) Vypocitanie poctu cisel, ktore su mensie nez priemer" << std::endl;
        std::cout << "6) Ukoncenie programu" << std::endl;

        std::cin >> menu;
    }
   
    return 0;
}

double vypocitaj_priemer(int pole[]) {
    int sum = 0;
    double priemer;

    for (int i = 0; i < 100; i++)
    {
        sum += pole[i];
    }
    
    priemer = (double)sum / 100;

    std::cout << "Sucet: " << sum << std::endl;
    std::cout << "Priemer: " << priemer << std::endl << std::endl;

    return priemer;
}

void vypocitaj_max(int pole[]) {
int max = INT_MIN;

    for (int i = 0; i < 100; i++)
    {
        if (pole[i] > max) {
            max = pole[i];
        }
    }
    std::cout << "Najvacsie cislo: " << max << std::endl << std::endl;
}
void vypocitaj_min(int pole[]) {
    int min = INT_MAX;

    for (int i = 0; i < 100; i++)
    {
        if (pole[i] < min) {
            min = pole[i];
        }
    }
    
    std::cout << "Najmensie cislo: " << min << std::endl << std::endl;

}
void vypocitaj_vacsie_nez_priemer(int pole[], double priemer) {
    int pocet = 0;

    for (int i = 0; i < 100; i++)
    {
        if (pole[i] > priemer) {
            pocet++;
        }
    }
    
    std::cout << "Pocet vacsich cisle nez priemer: " << pocet << std::endl << std::endl;
}

void vypocitaj_mensie_nez_priemer(int pole[], double priemer) {
    int pocet = 0;

    for (int i = 0; i < 100; i++)
    {
        if (pole[i] < priemer) {
            pocet++;
        }
    }
    
    std::cout << "Pocet mensich cisle nez priemer: " << pocet << std::endl << std::endl;
}
