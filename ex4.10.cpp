#include <iostream>

int main(){

    float custoF;

    std::cout << "Digite o custo de fabrica do carro: ";
    std::cin >> custoF; 
    
    


    if (custoF <  12000 ){
        float custoC = custoF + custoF * 0.05;
        std::cout << "o custo para o consumidor do carro e : " << custoC;
    }else if (custoF >=  12000 && custoF < 250000 ){
        float custoC = custoF + (custoF * 0.1 + custoF * 0.15);
        std::cout << "o custo para o consumidor do carro e : " << custoC;
    }else if (custoF >= 250000 ){
        float custoC = custoF + (custoF * 0.15 + custoF * 0.2);
        std::cout << "o custo para o consumidor do carro e : " << custoC;

    }

}