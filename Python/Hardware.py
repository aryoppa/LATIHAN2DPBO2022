from Product import Product

class Hardware(Product):

    def __init__(self):
        self.brand = "blank"
        self.model = "blank"

    def setBrand(self, brand):
        self.brand = brand
    
    def getBrand(self):
        return self.brand

    def setModel(self, model):
        self.model = model

    def getModel(self):
        return self.model