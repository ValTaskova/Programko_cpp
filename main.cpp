#include <iostream>

int main() {
    int cislo = 1;
    double cislo2 = 1.5;
    char znak = 'c';
    bool hodnota = true;    //najpouzivanie typy premennych v C++


    float cislo3 = 2.5;
    long cislo4 = 3;
    long long cislo5 = 4;
    short cislo6 = 5;        //dalsie, menej pouzivane typy premennych

    unsigned int a = 1;     //neznamienkova premenna len pre kladne cisla a 0
    signed int b = -1;      //znamienkova premenna aj pre zaporne cisla
                            //unsigned a signed mozeme pouzit s akymkolvek datovym typom (int, double, char, float, long, short, long long)
                            //pokial napiseme len "int", tak kompilator k nemu automaticky priradi "signed"

    
   const int vzdialenost = 10;  //konstanta, ktoru uz nemozeme v programe prepisovat
                                //const mozeme pouzit s akymkolvek datovym typom (int, double, char, float, long, short, long long)
                                //cosnst moze byt signed alebo unsigned => unsigned const int cislo = 3;


    std::cout << "Premenna int ma hodnotu: " << cislo << " a zabera " << sizeof(cislo) << " B." << std::endl;
    std::cout << "Premenna double ma hodnotu: " << cislo2 << " a zabera " << sizeof(cislo2) << " B." << std::endl;
    std::cout << "Premenna char ma hodnotu: " << znak << " a zabera " << sizeof(znak) << " B." << std::endl;
    std::cout << "Premenna bool ma hodnotu: " << hodnota << " a zabera " << sizeof(hodnota) << " B." << std::endl;
    std::cout << "Premenna float ma hodnotu: " << cislo3 << " a zabera " << sizeof(cislo3) << " B." << std::endl;
    std::cout << "Premenna long ma hodnotu: " << cislo4 << " a zabera " << sizeof(cislo4) << " B." << std::endl;
    std::cout << "Premenna long long ma hodnotu: " << cislo5 << " a zabera " << sizeof(cislo5) << " B." << std::endl;
    std::cout << "Premenna short ma hodnotu: " << cislo6 << " a zabera " << sizeof(cislo6) << " B." << std::endl;
    std::cout << "Premenna unsigned int ma hodnotu: " << a << " a zabera " << sizeof(a) << " B." << std::endl;
    std::cout << "Premenna signed int ma hodnotu: " << b << " a zabera " << sizeof(b) << " B." << std::endl;
    std::cout << "Premenna const int ma hodnotu: " << vzdialenost << " a zabera " << sizeof(vzdialenost) << " B." << std::endl;

    std::cout << std::endl;


    //Toto je jednoriadkovy komentar

    /* 
    Toto je viacriadkovy komentar - program tieto casti ignoruje
    */ 


    //Vypise len hodnotu premennej
   /* std::cout << cislo << std::endl;
    std::cout << cislo2 << std::endl;
    std::cout << znak << std::endl;
    std::cout << hodnota << std::endl;
    std::cout << cislo3 << std::endl;
    std::cout << cislo4 << std::endl;
    std::cout << cislo5 << std::endl;
    std::cout << cislo6 << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << vzdialenost << std::endl;
    
    std::cout << std::endl;*/


    //Vypise len velkost datoveho typu v B (1 B = 8 bitov)
   /* std::cout << sizeof(cislo) << std::endl;
    std::cout << sizeof(cislo2) << std::endl;
    std::cout << sizeof(znak) << std::endl;
    std::cout << sizeof(hodnota) << std::endl;
    std::cout << sizeof(cislo3) << std::endl;
    std::cout << sizeof(cislo4) << std::endl;
    std::cout << sizeof(cislo5) << std::endl;
    std::cout << sizeof(cislo6) << std::endl;
    std::cout << sizeof(a) << std::endl;
    std::cout << sizeof(b) << std::endl;
    std::cout << sizeof(vzdialenost) << std::endl;
    
    std::cout << std::endl;*/
   
    //Pre vystup "a,1,1.5"
    std::cout << 'a' << ',' << a << ',' << cislo2 << std::endl;
   
    return 0;
}