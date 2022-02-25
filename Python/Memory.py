import imp
from Hardware import Hardware

class Memory(Hardware):

    def __init__(self):
        self.freq = 0
        self.memo = 0
        self.supp = "blank"

    def setFreq(self, freq):
        self.freq = freq
    
    def getFreq(self):
        return self.freq

    def setMemo(self, memo):
        self.memo = memo

    def getMemo(self):
        return self.memo

    def setSupp(self, supp):
        self.supp = supp

    def getSupp(self):
        return self.supp