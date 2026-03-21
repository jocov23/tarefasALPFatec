#include <iostream>

int main (){

    int salario;
    std::cout << "Digite seu salario:";
    std::cin >> salario;
    
    float aumento = salario * 0.25;
    float novosa =  salario + aumento;


    std::cout << "o aumento foi de: "<< aumento;
    std::cout << "\nSeu novo salario apos um aumento de 25%: "<< novosa;
    




    return 0;
}