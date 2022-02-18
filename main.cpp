#include <iostream>
#include<cmath>

const int x = 6;    //globalna premenna, je vidiet v celom programe

int main() {        //vo funkcii su lokalne premenne, vidiet je len vo funkcii main

    //inicializovane premenne
    int cislo = 1;
    double cislo2 = 1.5;
    char znak = 'c';
    bool hodnota = true;

    //deklarovane premenne
    int premenna;
    double premenna2;
    char c;

    premenna = 8;


    int e, d, w, w2; 

    e = 5 + znak;       //v premennej znak je ulozena hodnota 'c', ktora ma ascii hodnotu 99
    std::cout << e << std::endl; 

    unsigned char z = 129;      //vypise hodnotu 129, pokial odstranime unsigned, tak vypise hodnotu -127 
    std::cout << int(z) << std::endl; 

    cislo = 3;
    e = 9;
    d = 5;

    //Inkremntacie: premenna++, ++premenna
    //Dekremntacia: premenna--, --premenna
    w = e + d++ - cislo--; // 8 + 2++ - 3-- = 7 => d =3, cislo = 2
    w2 = 11 - ++d * e; // 11 - 4 * 8 = -21

    std::cout << w << std::endl;
    std::cout << w2 << std::endl;


    std::cin >> z;      //nacita zadanu klavesu do premennej z
    if(e > d) {         //porovnava ci hodnota v premennej e je vacsia nez v premennej d
        int t = 6;      //lokalna premenna, ktora je vidiet len v tejto podmienke if
        std::cout << "Zadali ste: " << z << " a jeho je " << int(z) << std::endl; //vypise sa, ak je podmienka e>d pravdiva
    }
    else {
        std::cout << "Nebola to pravda" << std::endl; //vypise sa, ak je podmienka e>d nepravdiva
    }

    
    double k = 6.8, l;
    e = 9;
    d = 5;

    l = round(k); //round() => funkcia v cmath, ktora zaokruhluje
    w = e % d; // 9/5 
     
    std::cout << l << std::endl;
    std::cout << round(k) << std::endl;
    std::cout << w << std::endl;


    std::cout << 4 + 5 << std::endl;
    std::cout << 4 - 5 << std::endl;
    std::cout << 4 * 5 << std::endl;
    std::cout << 4 % 5 << std::endl;
    std::cout << int(c) << std::endl;

    cislo = 10;
    std::cout << cislo << std::endl;

    cislo += 5; //k premennej cislo sa pripocita hodnota 5 a ulozi sa do premennej cislo
    std::cout << cislo << std::endl;

    cislo -= 7;
    std::cout << cislo << std::endl;

    cislo *= 2;
    std::cout << cislo << std::endl;

    cislo /= 2;
    std::cout << cislo << std::endl;

    cislo %= 6;
    std::cout << cislo << std::endl;
     
    
    std::cout << "Toto je retazec so specialnymi znakmi: \"Valika\", \\" << std::endl;

   
    return 0;
}