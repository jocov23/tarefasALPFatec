#include <iostream>

int main(){

    int idade;
    std::string categoria;
    

    std::cout << "Digite a idade do nadador: ";
    std::cin >> idade; 
    
   


    if (idade >  30 ){
        
        categoria = "senior";
        std::cout << "a categoria do nadador e: " << categoria;
    }else if (idade >=  16 && idade < 30 ){
        
        categoria = "adulto";
        std::cout << "a categoria do nadador e: " << categoria;
    }else if (idade >=  11 && idade <= 15 ){
        categoria = "adolescente";
        std::cout << "a categoria do nadador e: " << categoria;
    }else if(idade >=  8 && idade <= 10 ){
        
        categoria = "juvenil";
        std::cout << "a categoria do nadador e: " << categoria;
    }else if(idade >=  5 && idade <= 7 ){
        
        categoria = "infatil";
        std::cout << "a categoria do nadador e: " << categoria;
    }else {
        std::cout << "Muito novo para nadar";
    }


}