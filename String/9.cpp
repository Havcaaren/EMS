#include <iostream>
#include <string>
#include <sstream>
#include <chrono>
#include <ctime>
#include <iomanip>

auto main(int argc, const char** argv) -> int {
    auto t_t = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    std::stringstream ss;
    ss<<std::put_time(std::localtime(&t_t), "%Y%m%d");
    auto teraz = std::stoi(ss.str());

    std::string a, b;
    std::cout<<"Zadaj rodne cislo RRMMDD: ";
    std::getline(std::cin, a);
    b = a;
    if(std::stoi(a.substr(0,2)) < 21){
        std::string q;
        std::cout<<"20"<<a.substr(0,2)<<" ? (Ano/Nie): ";
        std::cin>>q;
        if (q == "Ano" || q == "ANO" || q == "ano" || q == "AnO" || 
            q == "ANo" || q == "aNo" || q == "anO" || q == "aNO"){    
                b = "20" + a;
        } else {
            b = "19" + a;
        }
    } else {
        b = "19" + a;
    }

    if(teraz - std::stoi(b) > 900000) {
        std::cout<<"Nositel rodneho cisla "<<a<<" ma viac ako 90"<<std::endl;
    } else {
        std::cout<<"Nositel rodneho cisla "<<a<<" ma menej ako 90"<<std::endl;
    }
    if (std::stoi(b.substr(4,1)) == 5 || std::stoi(b.substr(4,1)) == 6) {
        std::cout<<"Drzitel tohto rodneho je zenskeho pohlavia."<<std::endl;
    } else {
        std::cout<<"Drzitel tohto rodneho je muzskeho pohlavia."<<std::endl;
    }
    return 0;
}