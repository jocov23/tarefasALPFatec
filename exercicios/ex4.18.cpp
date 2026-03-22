#include <iostream>

int main(){

    int idade;
    

    std::cout << "Digite sua idade: ";
    std::cin >> idade; 
    
    


    if (idade >= 18 ){
        std::cout << "voce é um adulto";
    } else {
        std::cout << "voce nao e um adulto";
    }

}