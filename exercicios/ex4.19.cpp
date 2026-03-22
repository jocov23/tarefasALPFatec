#include <iostream>

int main(){

    float altura;
    std::string sexo;
    

    std::cout << "Digite sua altura: ";
    std::cin >> altura; 
    std::cout << "digite seu sexo[homem/mulher]: ";
    std::cin >> sexo;
    
    


    if (sexo == "homem" ){
        float pesoIdeal = (72.7 * altura ) - 58;
        std::cout << "seu peso ideal e: " << pesoIdeal;
    } else {
        float pesoIdeal = (62.1 * altura) - 44.7;
        std::cout << "seu peso ideal e: " << pesoIdeal;
    }

}