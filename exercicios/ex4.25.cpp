#include <iostream>

int main(){

    float horasE, horasF, H;
    int premio;
    
    

    std::cout << "Digite o numero de horas extras cumpridas: ";
    std::cin >> horasE; 
    std::cout << "digite o numero de horas faltadas: ";
    std::cin >> horasF;
    
    H = horasE - (2/3 *(horasF));


    if (H >=2400 ){
        premio = 500;
    } else if(H >= 1800 && H < 2400 ){
        premio = 400;
    } else if(H >= 1200 && H < 1800 ){
        premio = 300;
    } else if(H >= 600 && H < 1200 ){
        premio = 200;
    } else{
        premio = 100;
    }

    std::cout << "voce recebeu uma gratificaçao de " << premio << "reais" << std::endl;
}