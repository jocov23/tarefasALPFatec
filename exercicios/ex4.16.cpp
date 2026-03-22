#include <iostream>

int main(){

    float preco;
    int codigo;

    std::cout << "Digite o codigo do produto: ";
    std::cin >> codigo; 
    std::cout << "Digite o preco do produto: ";
    std::cin >> preco; 
    
    


    if (preco <=  30 ){
        std::cout << "O produto nao tem descontos";
    }else if (preco > 30 && preco <= 100) {
        preco = preco - (preco * 0.1);
        std::cout << "o preco do produto com descontos e:" << preco;
    } else {
        preco = preco - (preco * 0.15);
        std::cout << "o preco do produto com descontos e:" << preco;
    }

   


}

