#include <iostream>

int main(){

    float saldo;

    std::cout << "Digite seu saldo medio: ";
    std::cin >> saldo; 
    
    


    if (saldo >=  400 ){
        float credito = saldo * 0.3;
        std::cout << "seu credito disponivel e: " << credito;
    }else if (saldo >=  300 && saldo < 400 ){
        float credito = saldo * 0.25;
        std::cout << "seu credito disponivel e: " << credito;
    }else if (saldo >=  200 && saldo < 300 ){
        float credito = saldo * 0.2;
        std::cout << "seu credito disponivel e: " << credito;

    }else{
        float credito = saldo * 0.1;
        std::cout << "seu credito disponivel e: " << credito;
    }


}