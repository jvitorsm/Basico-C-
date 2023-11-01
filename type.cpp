#include <iostream>
#include <vector>

        // typedef é uma forma de facilitar a leitura e a escrita de um codigo aplicando certos "apelidos" para keywords
//typedef std::string text_t;
//typedef int number_t;
        // using é melhor para templates e por minha experiencia é mais usado
using namespace std;
using text_t = std::string;
using number_t = int;

int main(){
    // typedef = reserved keyword used to create an additional name
    //          (alias) fot another data type.
    //          New identifier for an idendifeir for existing type 
    //          Helps with readability and reduces typos
    //          Use when is clear benefit 
    //          Replace with 'using' (Work better with templates)
    
    text_t First_name = "João";
    number_t age = 23;


    cout << First_name << '\n' << age<< '\n';
    
    return 0;
}