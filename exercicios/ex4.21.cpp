#include <iostream>

int main(){

    float preco;
    int codigo;
    std::string proc;

    std::cout << "Digite o codigo do produto[1-30]: ";
    std::cin >> codigo; 
    std::cout << "Digite o preco do produto: ";
    std::cin >> preco; 
   


    if (codigo >=  21 && codigo <=30 ){
        
        proc = "Nordeste";
        std::cout << "a procedencia do produto e: " << proc;
    }else if (codigo >=  20 && codigo <=10 ){
        
        proc = "Centro-Oeste";
        std::cout << "a procedencia do produto e: " << proc;
    }else if (codigo >=  7 && codigo <=9 ){
        
        proc = "Sudeste";
        std::cout << "a procedencia do produto e: " << proc;
    }else if(codigo >=  5 && codigo <=6 ){
        
        proc = "Nordeste";
        std::cout << "a procedencia do produto e: " << proc;
    }else if(codigo == 4 ){
        
        proc = "Oeste";
        std::cout << "a procedencia do produto e: " << proc;
    }else if(codigo == 3 ){
        
        proc = "Leste";
        std::cout << "a procedencia do produto e: " << proc;
    }else if(codigo == 2 ){
        
        proc = "Norte";
        std::cout << "a procedencia do produto e: " << proc;
    }else if(codigo == 1 ){
        
        proc = "Sul";
        std::cout << "a procedencia do produto e: " << proc;
    }

}