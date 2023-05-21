#include <iostream>
using namespace std; 

//Creación de clase madre

class Beverage
{
    //Método púlico 
    public: 
    void drinks()
    {
        cout<<"All drinks are availabe"<<endl; 

    }
   
};

// Clase derivada
class coffee: public Beverage
{
    public:
    void mocha()
    {
        cout<<"Mocha is the best"<<endl; 

    }

};

int main()
{
    //Creación de objeto en main 
    coffee c;
    // Llamara función drinks()
    c.drinks();
    c.mocha();
    return 0;

};


