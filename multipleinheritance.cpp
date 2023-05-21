#include <iostream>
using namespace std; 

class party
{
    public: 
    int meals;
    void food()
    {
        cout<<"Enter number of meals"<<endl;
        //input usuario  
        cin>>meals; 

    }
};

class drinks
{
    public:
    int drinks;
    void Liquor()
    {
        cout<<"Enter the number of drinks"<<endl; 
        cin >> drinks; 

    }
};

//clase derivada multiple 

class Bill: public party, public drinks
{
    int total_meals;
    int total_beverages;
    int total_bill;

    public:
    void total()
    {
        int total_meals = meals * 90;
        int total_beverages = drinks * 30;
        int total_bill = total_beverages + total_meals;
        cout<<"The total bill is: "<<total_bill;


    }

};

int main()
{
    Bill b;
    b.food();
    b.Liquor();
    b.total();
    return 0; 
} 

