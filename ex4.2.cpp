#include <iostream>

int main(){

    float n1, n2, n3, med;

    std::cout << "Digite a primeira nota: ";
    std::cin >> n1; 
    std::cout << "Digite a segunda nota: ";
    std::cin >> n2; 
    

    med = (n1 + n2) / 2;
    std::string estado;

    if (med >= 7){
        estado = "aprovado";
    }else if (med > 3){ 
        estado = "de exame";
    } else {
        estado = "reprovado";
    }

    std::cout << "sua media e: " << med << " portanto está " << estado;


}
