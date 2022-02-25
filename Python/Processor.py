class Processor:
    # kelas yang digunakan untuk mengimplementasikan Processor
    # private attribute dari kelas disk
    __name = ""
    __price = 0

    def __init__(self, name="", price=0):
        # konstruktor
        self.__name = name
        self.__price = price

    # mengeset nilai atribut name
    def setName(self, name):
        self.__name = name

    # mengembalikan nilai atribut name
    def getName(self):
        return self.__name

    # mengeset nilai atribut price
    def setPrice(self, price):
        self.__price = price

    # mengembalikan nilai atribut price
    def getPrice(self):
        return self.__price

    # menampilkan atribut Processor
    def printProcessor(self):
        print("Processor name : " + self.getName())
        print("Processor Price : " + str(self.getPrice()))
