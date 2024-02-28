#include "Date.h"
#include "Cake.h"
using namespace std;


Cake :: Cake(Date expiryDate, int diameter, double height, double price, int storage, bool glutenFree ) throw(char*):expiryDate(expiryDate),
            diameter(diameter),height(height),price(price),glutenFree(glutenFree)  
        {
            if(storage != 1 || storage !=2){
                this->storage = storage;
            }else{
            throw "invalid number for storage";
            }

            
        }

ostream& operator << (ostream &os, Cake &cake)
{
    os << "Cake: " << endl;
    os << "diameter: " << cake.diameter << endl;
    os << "height: " << cake.height << endl;
    os << "expiry daye: " << cake.expiryDate << endl;
    if(cake.storage == 1){
          os << "storage: refrigerator" << endl;  
    }else if(cake.storage == 2){
          os << "storage: freezer" << endl;
    }

        if(cake.glutenFree == true){
          os << "without gluten" << endl;  
    }else if(cake.glutenFree == false){
          os << "with gluten" << endl;
    }


    return os;
}