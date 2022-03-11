#include <iostream>
#include <string> //treba zahrnut aby sme mohli pouzivat string

int main() {        //vo funkcii su lokalne premenne, vidiet je len vo funkcii main

    //Napiste program pre vypocitanie BMI. Sptajte sa uzivatela na hmotnost a vysku, ktore jednotlivo nacitate.
    //Po vypocitanie BMI vytvorte podmienky, ktore vypisu ci ma uzivatel podvahu, normalnu vahu, nadvahu alebo obezitu.

    double BMI, vyska, hmotnost; //premenne, ktore budete potrebovat

    //Aka je vasa hmotnost
    //nacitam
    //Aka je vasa vyska
    //nacitam
    
    BMI = hmotnost / (vyska*vyska);

     //menej ako 18 vratane = podvaha
     //medzi 18-25 (bez 18 ale vratane 25) = normal
     //medzi 25-30 (bez 25 ale vratane 30) = nadvaha
     //nad 30 (bez 30) = obezita



    std::string name = "Valeria ", surname = "Taskova";

    std::cout << name << ", ahoj!"<< std::endl;
    std::cout << name + surname << std::endl;       //pouzivame na spajanie retazcov

    std::string name1;
    std::cin >> name1;      //nacita retazec, ale konci, ked dame medzeru

    std::string fullname;
    getline (std::cin, fullname);   //nacita retazec aj medzerami, konci, ked dame enter
    std::cout << fullname << std::endl;


    //Napiste aplikaciu na overenie uzivatela. Zadajte si meno a heslo a potom uzivatela vyzvete, aby zadal
    //meno a heslo. Pokial su oba udaje spravne, tak vypiste, ze je prihlaseny. Pokial bol jeden udaj zly (je jedno ktory),
    //tak vypiste, ze meno alebo heslo je nespravne. Pouzite zlozenu podmienku.
    //TIP: porovnavanie 2 stringov je rovnake ako porovnavanie 2 cisel

    std::string meno = "admin", heslo = "heslo", p_meno, p_heslo;

    
  
   
    return 0;
}
