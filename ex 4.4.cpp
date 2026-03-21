#include <iostream>

int main(){

    float n1, n2, n3, maior;

    std::cout << "Digite o primeiro numero: ";
    std::cin >> n1; 
    std::cout << "Digite o segundo numero: ";
    std::cin >> n2; 
    std::cout << "Digite o terceiro numero: ";
    std::cin >> n3; 

    

    if (n1 > n2 && n1 > n3){
        maior = n1;
        std::cout << "o maior numero e: " << maior;
    }else if (n2 > n1 && n2 > n3){
        maior = n2;
        std::cout << "o maior numero e: " << maior;
    }else if (n3 > n2 && n3 > n1){
        maior = n3;
        std::cout << "o maior numero e: " << maior;
    } else {
        std::cout << "os numeros sao iguais";
    }

   


}