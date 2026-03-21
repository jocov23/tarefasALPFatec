#include <iostream>
#include <cmath>

int main(){

    float n1, n2, resultado;

    std::cout << "Digite o primeiro numero: ";
    std::cin >> n1; 
    std::cout << "Digite o segundo numero: ";
    std::cin >> n2; 

    int escolha;
    std::cout << "1: O primeiro número elevado ao segundo número. " << std::endl;
    std::cout << "2: Raiz quadrada de cada um dos números " << std::endl;
    std::cout << "3: Raiz cúbica de cada um dos números. " << std::endl;
    std::cout << "Digite qual operação deseja: ";
    std::cin >> escolha;


    if (escolha == 1){
        resultado = std::pow(n1, n2);
        std::cout << "o resultado e: " << resultado;
    }else if (escolha == 2){
        float raiz1 = std::pow(n1, 2);
        float raiz2 = std::pow(n2, 2);
        std::cout << "o resultado e: " << raiz1 << " e " << raiz2;
    } else if (escolha == 3){
        float raiz1 = std::pow(n1, 3);
        float raiz2 = std::pow(n2, 3);
        std::cout << "o resultado e: " << raiz1 << " e " << raiz2;
    
    }else {
        std::cout << "resposta invalida";
    }

   


}