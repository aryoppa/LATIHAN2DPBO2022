class Product:

    def __init__(self):
        self.idProduct = "blank"
        self.price = 0

    
    def setIdProduct(self, idProduct):
        self.idProduct = idProduct

    def getIdProduct(self):
        return self.idProduct

    def setPrice(self, price):
        self.price = price
    
    def getPrice(self):
        return self.price