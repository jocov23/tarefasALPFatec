#include <iostream>

int main(){

    int tipo;
    float inv;

    std::cout << "1.Poupanca\n 2.Fundos de renda fixa\n ";
    std::cout << "Digite o tipo do seu investimento [1/2]: ";
    std::cin >> tipo; 
    std::cout << "Digite o quanto deseja investir: ";
    std::cin >> inv;
    
    


    if (tipo == 1 ){
        std::string descricao = "Poupanca"; 
        std::cout << "Apos um mes seu investimento de " << descricao << "rendeu " << inv * 0.03 << " reais";
    }else if (tipo == 2 ){
        std::string descricao = "Fundos de renda fixa"; 
        std::cout << "Apos um mes seu investimento de " << descricao << " rendeu " << inv * 0.04 << " reais";
    }


}