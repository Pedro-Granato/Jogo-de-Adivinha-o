#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(NULL));
    int num_aleatorio = (rand()%100) + 1;
    int tentativas = 0; 
    int guess;
    
    std::cout << "***JOGO DE ADIVINHAÇÃO***" << std::endl;
    
    do{
        std::cout << "Informe um número entre (0-100): ";
        std::cin >> guess;
        tentativas++;
        
        if(guess == num_aleatorio){
            std::cout << "Você acertou!!! # tentativas: " << tentativas << std::endl;
        }else if(guess < num_aleatorio){
            std::cout << "Muito baixo" << std::endl;
        }else if(guess > num_aleatorio){
            std::cout << "Muito alto" << std::endl;
        }
        
    }while(guess!=num_aleatorio);
    
    std::cout << "******************\n";

    return 0;
}
