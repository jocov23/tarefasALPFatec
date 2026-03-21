#include <iostream>

int main(){

    float salario;

    std::cout << "Digite o salario do funcionario: ";
    std::cin >> salario; 
    
    


    if (salario <=  300 ){
        float salarionovo = salario + salario * 0.35;
        std::cout << "seu novo salario reajustado e: " << salarionovo;
    }else {
        float salarionovo = salario + salario * 0.15;
        std::cout << "seu novo salario reajustado e: " << salarionovo;
    }

   


}