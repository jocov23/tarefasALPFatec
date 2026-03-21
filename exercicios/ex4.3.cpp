#include <iostream>

int main(){

    float n1, n2, menor;

    std::cout << "Digite o primeiro numero: ";
    std::cin >> n1; 
    std::cout << "Digite o segundo numero: ";
    std::cin >> n2; 

    

    if (n1 > n2){
        menor = n2;
        std::cout << "o menor numero e: " << n2;
    }else if (n1 == n2) {
        std::cout << "os dois numeros sao iguais";
    } else {
        std::cout << "o menor numero e: " << n1;
    }

   


}
