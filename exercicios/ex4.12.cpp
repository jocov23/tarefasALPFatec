#include <iostream>

int main(){

    float salario;

    std::cout << "Digite seu salario bruto: ";
    std::cin >> salario; 
    
    


    if (salario >=  900 ){
        salario = salario + 35 - salario * 0.07;
        std::cout << "seu salario liquido e: " << salario;
    }else if (salario >=  600 && salario < 900 ){
        salario = salario + 50 - salario * 0.07;
        std::cout << "seu salario liquido e: " << salario;
    }else if (salario >=  350 && salario < 600 ){
        salario = salario + 75 - salario * 0.07;
        std::cout << "seu salario liquido e: " << salario;
    }else{
        salario = salario + 100 - salario * 0.07;
        std::cout << "seu salario liquido e: " << salario;
    }


}