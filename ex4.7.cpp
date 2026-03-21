#include <iostream>

int main(){

    float salario;

    std::cout << "Digite o salario do funcionario: ";
    std::cin >> salario; 
    
    


    if (salario <=  500 ){
        float salarionovo = salario + salario * 0.3;
        std::cout << "seu novo salario reajustado e: " << salarionovo;
    }else {
        std::cout << "voce nao tem direito ao aumento";
    }

   


}

