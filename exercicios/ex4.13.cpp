#include <iostream>

int main(){

    float preco, aumento;
    std::string classificao;
    

    std::cout << "Digite o preco bruto do produto: ";
    std::cin >> preco; 
    
    if (preco > 100){
        aumento = preco * 0.15;
    } else if (preco >= 50 && preco <= 100){
        aumento = preco * 0.1;
    } else if (preco < 50){
        aumento = preco * 0.05;
    }


    if (preco >  200 ){
        
        classificao = "muito caro";
        std::cout << "o preco final do produto e: " << preco + aumento << " e sua classificacao e: " << classificao;
    }else if (preco >  120 && preco <= 200 ){
        classificao = "caro";
        std::cout << "o preco final do produto e: " << preco + aumento << " e sua classificacao e: " << classificao;
    }else if (preco > 80 && preco <= 120 ){
        
        classificao = "normal";
        std::cout << "o preco final do produto e: " << preco + aumento << " e sua classificacao e: " << classificao;
    }else{
        classificao = "barato";
        std::cout << "o preco final do produto e: " << preco + aumento << " e sua classificacao e: " << classificao;
    }


}