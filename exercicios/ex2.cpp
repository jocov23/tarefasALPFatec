#include <iostream>

int main (){

    int n1, n2, n3;

    std::cout << "Digite as notas: \n";

    std::cout << "primeira nota:";
    std::cin >>  n1;

    std::cout << "\nsegunda nota: ";
    std::cin >> n2;
    
    std::cout << "\nerceira nota: ";
    std::cin >> n3;
    
    float media = (n1+n2+n3) / 3;

    std::cout << "a media das notas e: " << media;
    
    return 0;
}