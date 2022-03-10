#include <iostream>
#include<cmath>

const int x = 6;    //globalna premenna, je vidiet v celom programe

int main() {        //vo funkcii su lokalne premenne, vidiet je len vo funkcii main

    int c;

    std::cin >> c;// 'a' 'z' 

  // < > == <= >= !=
  // && -a, || - alebo
    
  if (c < '0' || c > '9') { //cislo od '0' po '9'
       std::cout << "je to cislo" <<std::endl;
   } 
   else if (c >= 'a' && c <= 'z') { //male pismeno od 'a' po 'z' 
       std::cout << "je to male pismeno" <<std::endl;
   }
   else if (c >= 'A' && c <= 'Z') { //velke pismeno od 'A' po 'Z'
        std::cout << "je to velke pismeno" <<std::endl;
   }
    
   else {
       std::cout << "je to nieco ine" <<std::endl;
   }

    switch (c)
    {
    case 1:
        std::cout << "cislo 1" << std::endl;
        //break;
    case 2:
        std::cout << "cislo 2" << std::endl;
        break;
    case 3:
        std::cout << "cislo 3" << std::endl;
        break;
    case 4:
        std::cout << "cislo 4" << std::endl;
        break;
    
    default: std::cout << "default" << std::endl;
        break;
    }
  
    return 0;
}
