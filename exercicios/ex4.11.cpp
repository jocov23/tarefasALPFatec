#include <iostream>

int main(){

    float salario;

    std::cout << "Digite seu salario: ";
    std::cin >> salario; 
    
    


    if (salario >=  900 ){
        float aumento = salario * 0;
        std::cout << "seu aumento foi de: " << aumento << ", portanto seu novo salario e: " << salario + aumento;
    }else if (salario >=  600 && salario < 900 ){
        float aumento = salario * 0.05;
        std::cout << "seu aumento foi de: " << aumento << ", portanto seu novo salario e: " << salario + aumento;
    }else if (salario >=  300 && salario < 600 ){
        float aumento = salario * 0.1;
        std::cout << "seu aumento foi de: " << aumento << ", portanto seu novo salario e: " << salario + aumento;

    }else{
        float aumento = salario * 0.15;
        std::cout << "seu aumento foi de: " << aumento << ", portanto seu novo salario e: " << salario + aumento;
    }


}