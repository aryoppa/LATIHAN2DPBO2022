#include <iostream>
#include <string>

using namespace std;

class Product
{
    private:
        int price;
        string idProduct;
    
    public:

        //constructor to set the value of an object
        Product(int price, string idProduct)
        {
            setPrice(price);
            setIdProduct(idProduct);
        }

        Product()
        {
            this->price = 0;
			this->idProduct = "";
        }

        void setPrice(int price)
        {
            this->price = price;
        }

        int getPrice()
        {
            return price;
        }

        void setIdProduct(string idProduct)
        {
            this->idProduct = idProduct;
        }

        string getIdProduct()
        {
            return idProduct;
        }

        ~Product()
        {

        }
};
