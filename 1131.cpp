#include <iostream>

int main()
{
    int a,b,option;
    int Inter = 0;
    int Gremio = 0;
    int Grenal = 0;
    int Empate = 0;

    while(true){
        std::cin >>a>>b;
        if(a > b) Inter++;
        if(a < b) Gremio++;
        if(a == b) Empate++;
        Grenal++;

        std::cout << "Novo grenal (1-sim 2-nao)" << std::endl;
        std::cin >> option;

        if(option == 2)
                        break;
    }

    std::cout << Grenal << " grenais" << std::endl;
    std::cout << "Inter:" << Inter << std::endl;
    std::cout << "Gremio:" << Gremio << std::endl;
    std::cout << "Empates:" << Empate << std::endl;

    if(Inter > Gremio){
        std::cout <<"Inter venceu mais" << std::endl;
    }
     if(Inter < Gremio){
        std::cout <<"Gremio venceu mais" << std::endl;
    }
     if(Inter == Gremio){
        std::cout <<"Nao houve vencedor" << std::endl;
    }

    return 0;
}