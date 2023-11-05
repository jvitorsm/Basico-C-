#include <iostream>
using namespace std;

int main()
{       
        // type conversion = coversion a value of a data type to another 
        //              Implicit = automatic
        //              Explicit = Precede value with the new data type

    //double x = (int)3.14;


    //Quando castamos um numero em uma variavel do tipo char esse numero é convertido para um caracter equivalente em decimal
    char x = 80;

cout << x << '\n';

    int correct = 8;
    int questions =10;
    double score = correct/(double)questions*100;


cout << "Your score is: "<< score <<" %"<< '\n'; 

    return 0;
} 