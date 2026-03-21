#include <iostream>

int main (){

    int n1, n2, n3;
    int p1, p2, p3;

    std::cout << "Digite as notas e seus pesos: \n";

    std::cout << "primeira nota:";
    std::cin >>  n1;
    std::cout << "peso:";
    std::cin >>  p1;        

    std::cout << "\nsegunda nota: ";
    std::cin >> n2;
    std::cout << "peso:";
    std::cin >>  p2; 
    
    std::cout << "\nterceira nota: ";
    std::cin >> n3;
    std::cout << "peso:";
    std::cin >>  p3; 
    
    float media = (n1*p1 + n2*p2 + n3*p3) / 3;

    std::cout << "a media ponderada das notas e: " << media;


    return 0;
}