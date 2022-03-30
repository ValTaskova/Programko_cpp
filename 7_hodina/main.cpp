#include <iostream>
#include <string> 

void opakovanie(int pocet);
int sucet(int a, int b);


int main() {        
   
    int num ;

    num = sucet(5, 6);
    opakovanie(5);


    int pole[5] = {77, 99, 55, 66, 33}, nacitavacie_pole[5];

        //{77, 99, 55, 66, 33}
        // 0  1  2  3   4
    for (int i = 0; i < 5; i++)         //vypise pole
        std::cout << pole[i] << std::endl;
    std::cout << pole[3];       //vypise cislo 66 teda treti prvok v poli


    for (int i = 0; i < 5; i++)         //nacitavanie do nacitavacie_pole
        std::cin >> nacitavacie_pole[i];

    for (int i = 0; i < 5; i++)         //vzpise nacitavacie_pole
        std::cout << nacitavacie_pole[i] << std::endl;

       
    
    int cislo;

    std::cin >> cislo;

    if (cislo <= 0) {       //overujeme ci je cislo kladne, ak nie je program skonci s chybou
        return 1;
    }

    std::cout << std::endl << "Vnoreny For cyklus" << std::endl;
    for (int i = 0; i < cislo; i++) {         //cislo = 3 a ma vystup: 00 01 02 10 11 12 20 21 22
        for (int j = 0; j < cislo; j++) {     //ide o dve premenne VEDLA SEBA, nie je to jedno cislo  

            std::cout << i << j << std::endl;
           
        }
    } 
    
    
    std::cout << std::endl << "While cyklus" << std::endl;
    int j = 0;      //skuste inicializovat k na 10

    while (j < 10) {
         
        j++;
        //getline (std::cin, text);

        if (j == 5) {       //pri cisle 5, cyklus yastavi a hned prejde na dalsiu iteraciu == nevypise sa 5
            continue;
        }
         std::cout << j << std::endl;  
    } 

    std::string text;
    getline (std::cin, text);

    while (text == "siedma kapitola") {     //dokial nenapiseme text "siedma kapitola" tak bude cyklus stale bezat a nacitavat text
         
        getline (std::cin, text); 

        if (text == "odid")    //ak napiseme "odid" tak prikaz break nas vyhodi z cyklu
            break; 
        
    } 

    std::cout << "Dakujem";

     
   
    return 0;
}

void opakovanie(int pocet){

    std::cout << "For cyklus" << std::endl << "Pocet iteracii je " << pocet << std::endl;

    for (int i = 0; i < pocet; i++) {
            std::cout << i << std::endl;
        }
} 

int sucet(int a, int b) {
    return a+b;
}
