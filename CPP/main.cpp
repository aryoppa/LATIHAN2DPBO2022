#include <iostream>
#include <string>

using namespace std;

// call the class files
#include "Product.cpp"
#include "Hardware.cpp"
#include "Memory.cpp"

int main()
{
    cout << "Masukkan banyaknya item: ";
    int n;
    cin >> n;

    Memory order[n];

    int price, freq, memo;
    string idProduct, brand, model, supp;

    for(int i=0; i<n; i++)
    {
        cout << "====================" << endl;
        cout << "Data pesanan ke-" << (i+1) << endl << endl;

        cout << "Harga          : ";
        cin >> price;
        order[i].setPrice(price);

        cout << "Id-Product     : ";
        cin >> idProduct;
        order[i].setIdProduct(idProduct);

        cout << "Merek          : ";
        cin >> brand;
        order[i].setBrand(brand);
        
        cout << "Model          : ";
        cin >> model;
        order[i].setModel(model);

        cout << "Frekuensi (MHz): ";
        cin >> freq;
        order[i].setFreq(freq);

        cout << "Memori (GB)    : ";
        cin >> memo;
        order[i].setMemo(memo);

        cout << "Cuda Support (Y/N): ";
        cin >> supp;
        order[i].setSupp(supp);
        cout << endl;
    }


    cout << "====================" << endl;
    cout << "Data Pesanan VGA : " << endl << endl;
    for(int i=0; i<n; i++)
    {
        cout << endl << i+1 << ".";
        cout << "ID Product: " << order[i].getIdProduct() << endl;
        cout << "  ";
        cout << "Harga     : " << order[i].getPrice() << endl; 
        cout << "  ";
        cout << "Merek     : " << order[i].getBrand() << endl;
        cout << "  ";
        cout << "Model     : " << order[i].getModel() << endl;
        cout << "  ";
        cout << "Frekuensi : " << order[i].getFreq() << " MHz" << endl;
        cout << "  ";
        cout << "Memori    : " << order[i].getMemo() << " GB" << endl;
        cout << "  ";

        if (order[i].getSupp() == "Y")
        {
            cout << "VGA ini Cuda Support." << endl;
        }
        else
        {
            cout << "VGA ini tidak Cuda Support." << endl;
        }
    
    }

}