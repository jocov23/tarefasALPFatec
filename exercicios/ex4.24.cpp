#include <iostream>

int main(){

    float preco, precoF;
    int cat;
    char sit;
    std::string clas;
    
    std::cout << "Digite o preco do produto: ";
    std::cin >> preco;
    std::cout << "Digite a categoria do produto[1-limpeza/2-alimentacao/3-vestuario: ";
    std::cin >> cat; 
    std::cout << "Digite a situacao do produto[R|r - Refrigeracao / N|n - nao-refrigeracao]: ";
    std::cin >> sit; 
   

    if (preco <=  25){
        
        switch(cat){
            case 1:
                precoF = preco + preco *0.05;
                std::cout << "\nO valor do aumento foi 5%";
                break;
            case 2:
                precoF = preco + preco *0.08;
                std::cout << "\nO valor do aumento foi 8%";
                break;
            case 3:
                precoF = preco + preco *0.1;
                std::cout << "\nO valor do aumento foi 10%";
                break;
        }

    }else{
        switch(cat){
            case 1:
                precoF = preco + preco *0.12;
                std::cout << "\nO valor do aumento foi 12%";
                break;
            case 2:
                precoF = preco + preco *0.15;
                std::cout << "\nO valor do aumento foi 15%";
                break;
            case 3:
                precoF = preco + preco *0.18;
                std::cout << "\nO valor do aumento foi 18%";
                break;
        } 
    }

   

    if (cat == 2 || sit == 'R' ){
        precoF = precoF + precoF *0.05;
        std::cout << "\nO valor do imposto foi 5%";
    }else  {
        precoF = precoF + precoF *0.08;
        std::cout << "\nO valor do imposto foi 8%";
    } 

    if (precoF >= 120){
        clas = "Caro";
    } else if (precoF > 50 && precoF < 120){
        clas = "Normal";
    } else {
        clas = "Barato";
    }

    std::cout << "\n\no preco final da sua compra e: " << precoF << " com a classificacao de: " << clas << std::endl;

}