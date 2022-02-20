#include <iostream>
#include <string>

using namespace std;

class Hardware : public Product
{
    private:
        string brand;
        string model;

    public:

        //constructor to set the value of an object
        Hardware(string brand, string model)
        {
            setBrand(brand);
            setModel(model);
        }
        
        Hardware()
        {
            this->brand = "";
            this->model = "";
        }

        void setBrand(string brand)
        {
            this->brand = brand;
        }

        string getBrand()
        {
            return brand;
        }

        void setModel(string model)
        {
            this->model = model;
        }

        string getModel()
        {
            return model;
        }

        ~Hardware()
        {

        }

};