#include <iostream>
#include <string> 

void opakovanie(int pocet);

int main() {        
   
    int num = 15;
    opakovanie(num);
    
    std::cout << std::endl << "Vnoreny For cyklus" << std::endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
           if (i == j) 
                std::cout << '*';
            else if (i == (10-j-1))
                std::cout << '*';
           else                     //skuste vynechat else a porozmyslajte co sa stalo a preco sa to stalo
                std::cout << '-';
        }
        std::cout << std::endl;
    }
   
    std::cout << std::endl << "While cyklus" << std::endl;
    int j = 0;      //skuste inicializovat k na 10
    while (j < 10) {
        std::cout << "j je: " << j << std::endl;
        j++;
        
    }

    std::cout << std::endl << "Do-while cyklus" << std::endl;
    int k = 0;      //skuste inicializovat k na 10
    do
    {
        std::cout << "k je: " << k << std::endl;
        k++;
    } while (k < 10);       //nie je rozdiel medzi while a tymto do-while cyklom
    
   
    return 0;
}

void opakovanie(int pocet){

    std::cout << "For cyklus" << std::endl << "Pocet iteracii je " << pocet << std::endl;

    for (int i = 0; i < pocet; i++) {
            std::cout << i << std::endl;
        }
}
