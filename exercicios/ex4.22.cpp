#include <iostream>

int main(){

    int idade;
    float peso;
    int gp;
    

    std::cout << "Digite a idade: ";
    std::cin >> idade; 
    std::cout << "Digite o peso: ";
    std::cin >> peso; 
    
   


    if (idade >  50 ){
        
        if (peso < 60){
            gp = 3;
        } else if (peso <= 90 && peso >=60){
            gp = 2;
        } else{
            gp=1;
        }
       
        std::cout << "o grupo de risco e: " << gp;
    }else if (idade >=  20 && idade <= 50 ){
        
        if (peso < 60){
            gp = 6;
        } else if (peso <= 90 && peso >=60){
            gp = 5;
        } else{
            gp=4;
        }
       
        std::cout << "o grupo de risco e: " << gp;
    }else{
        
        if (peso < 60){
            gp = 9;
        } else if (peso <= 90 && peso >=60){
            gp = 8;
        } else{
            gp=7;
        }
       
        std::cout << "o grupo de risco e: " << gp;
    }


}