#include <iostream>

int main(){

    float preco, precoT, precoF;
    int codigo, qnt;
    

    std::cout << "Digite o codigo do produto[1-40]: ";
    std::cin >> codigo; 
    std::cout << "Digite a quantidade ccomprada do produto: ";
    std::cin >> qnt; 
   

    if (codigo >=  31 && codigo <=40 ){
        
        preco = 40;
    } else if (codigo >=  21 && codigo <=30 ){
        
         preco = 20;
    }else if (codigo >=  11 && codigo <=20 ){
        
         preco = 15;
    }else if (codigo >=  1 && codigo <=10 ){
        
         preco = 10;
    }

    precoT = qnt * preco;

    if (precoT > 500   ){
        precoF = precoT - (precoT * 0.15);
    }else if (preco >= 250 && preco <= 500) {
        precoF = precoT - (precoT * 0.1);
    } else {
        precoF = precoT - (precoT * 0.05);
    }

    std::cout << "o preco final da sua compra e: " << precoF;

}