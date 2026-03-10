#include <iostream>

int main (){

    int salario;
    std::cout << "Digite seu salario:";
    std::cin >> salario;
    
    float aumento = 0.25;
    float novosa =  salario + salario * aumento;

    std::cout << "Seu novo salario apos um aumento de 25%: "<< novosa;





    return 0;
}