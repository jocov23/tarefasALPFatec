#include <iostream>

int main(){

    float n1, n2, resultado;

    std::cout << "Digite o primeiro numero: ";
    std::cin >> n1; 
    std::cout << "Digite o segundo numero: ";
    std::cin >> n2; 

    int escolha;
    std::cout << "1: media " << std::endl;
    std::cout << "2: diferença " << std::endl;
    std::cout << "3: produto " << std::endl;
    std::cout << "4: divisao " << std::endl;
    std::cout << "Digite qual operação deseja: ";
    std::cin >> escolha;


    if (escolha == 1){
        resultado = (n1 + n2) /2;
        std::cout << "o resultado e: " << resultado;
    }else if (escolha == 2){
        if (n1 >n2){
            resultado = n1 - n2;
        }else {
            resultado = n2 - n1;
        }
        
        std::cout << "o resultado e: " << resultado;
    } else if (escolha == 3){
        resultado = n1 * n2;
        std::cout << "o resultado e: " << resultado;
    } else if (escolha == 4){
        if (n2 == 0){
            std::cout << "segundo numero tem que ser diferente de zero";
            return 0;
        }
        resultado = n1 / n2;
        std::cout << "o resultado e: " << resultado;
    }else {
        std::cout << "resposta invalida";
    }

   


}