#include <iostream>

namespace first{int x = 0;}
namespace second{int x = 2;}
namespace third{int x = 3;}

void FA(){
using namespace second;

std :: cout << x + x <<"\n";
}
//void stablish a function that is a block of code that shall be executed when is call

int main(){
        // Namespace = provides a solution for preventing name conflicts in large projects. Each entity needs a unique name. 
        //             A namespace allows for identically named entities as long as the namespace are different.


    using namespace first; // this will set localy a value that is global
    std :: cout << x << "\n"; 
    
    int x = 1;

    std :: cout << x << "\n";
    std :: cout << first::x + second::x << "\n";
    std :: cout << third::x << "\n";

    FA(); 

    return 0;
}