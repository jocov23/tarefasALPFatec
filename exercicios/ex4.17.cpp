#include <iostream>

int main(){

    int senha = 4531;
    int senhaF;

    std::cout << "Digite a senha: ";
    std::cin >> senhaF; 
    
    


    if (senhaF == senha ){
        std::cout << "voce possui permissao de acesso";
    } else {
        std::cout << "voce nao possui permisao de acesso";
    }

}