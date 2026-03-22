#include <iostream>

int main(){

    float salario;

    std::cout << "Digite seu salario: ";
    std::cin >> salario; 
    
    


    if (salario >=  1000 ){
        float aumento = salario * 0.05;
        std::cout << "seu aumento foi de: " << aumento << ", portanto seu novo salario e: " << salario + aumento;
    }else if (salario >=  800 && salario < 1000 ){
        float aumento = salario * 0.1;
        std::cout << "seu aumento foi de: " << aumento << ", portanto seu novo salario e: " << salario + aumento;
    }else if (salario >=  700 && salario < 800 ){
        float aumento = salario * 0.2;
        std::cout << "seu aumento foi de: " << aumento << ", portanto seu novo salario e: " << salario + aumento;

    }else if (salario >=  500 && salario < 700 ){
        float aumento = salario * 0.3;
        std::cout << "seu aumento foi de: " << aumento << ", portanto seu novo salario e: " << salario + aumento;
    }else if (salario >=  300 && salario < 500 ){
        float aumento = salario * 0.4;
        std::cout << "seu aumento foi de: " << aumento << ", portanto seu novo salario e: " << salario + aumento;
    }else {
        float aumento = salario * 0.5;
        std::cout << "seu aumento foi de: " << aumento << ", portanto seu novo salario e: " << salario + aumento;
    }


}