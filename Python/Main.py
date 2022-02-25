from Memory import Memory

print("Masukkan banyaknya item: ", end = ' ')

n =int(input())

order = [Memory() for i in range(n)]

for i in range(n):
    print("====================")
    print("Data pesanan ke-" + str(i+1))

    print("Harga          : ", end = ' ')
    price = int(input())
    order[i].setPrice(price)

    print("Id-Product     : ", end = ' ')
    idProduct = str(input())
    order[i].setIdProduct(idProduct)

    print("Merek          : ", end = ' ')
    brand = str(input())
    order[i].setBrand(brand)

    print("Model          : ", end = ' ')
    model = str(input())
    order[i].setModel(model)

    print("Frekuensi (MHz): ", end = ' ')
    freq = int(input())
    order[i].setFreq(freq)

    print("Memori (GB)    : ", end = ' ')
    memo = int(input())
    order[i].setMemo(memo)

    print("Cuda Support (Y/N): ", end = ' ')
    supp = str(input())
    order[i].setSupp(supp)

print("====================")

for i in range(n):
    print(str(i+1) + ". " + "ID Product: " + str(order[i].getIdProduct()))
    print("   Harga          : " + str(order[i].getPrice()))
    print("   Merek          : " + str(order[i].getBrand()))
    print("   Model          : " + str(order[i].getModel()))
    print("   Frekuensi (MHz): " + str(order[i].getFreq()))
    print("   Memori (GB)    : " + str(order[i].getMemo()))
    if order[i].getSupp() == "Y":
        print("   VGA ini Cuda Support.")
    
    else:
        print("   VGA ini tidak Cuda Support.")

    print("====================")


    