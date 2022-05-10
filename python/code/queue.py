
class Queue:
    def __init__(self, size) -> None:
        self.__size = size
        self.__data = [None for _ in range(self.__size)]
        self.__frontIdx = None
        self.__rearIdx = None

    def getSize(self) -> int:
        return self.__size

    def getRearData(self) -> int:
        return self.__data[self.getRearIndex()]

    def getFrontData(self) -> int:
        return self.__data[self.getFrontIndex()]

    def addData(self, data) -> None:
        if self.__frontIdx == None:
            self.__frontIdx = self.__rearIdx = 0
            self.__data[self.getRearIndex()] = data
        else:
            self.__data[self.getRearIndex()+1] = data

    def removeData(self)->int:
        val = self.__data[self.getFrontIndex()] 
        self.__data[self.getFrontIndex()] = None
        self.__frontIdx += 1
        return val

    def getRearIndex(self)->int:
        return self.__rearIdx

    def getFrontIndex(self)->int:
        return self.__frontIdx
    
    def __str__(self)->str:
        return str(self.__data)

q = Queue(5)
print(q)
q.addData(12)
print(q)
print(q.removeData())
print(q)
