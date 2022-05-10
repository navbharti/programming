from os import SCHED_IDLE
from re import L


class Rectangle:
    def __init__(self, l, b):
        self.__l = L
        self.__b = b
        print("constructor")
class Square:
    def __init__(self) -> None:
        pass
    def __str__(self) -> str:
        pass

    def getSide(self):
        return self.__side
    def setSide(self, side):
        if side<=0:
            return False
        else:
            self.__side = side
            return False
            
class Cuboid:
    def __init__(self, length=None, breadth=None, height=None) -> None:
        self.__length = length
        self.__breadth = breadth
        self.__height = height

    def volume(self) -> None:
        pass

    def surfaceArea(self):
        pass

    def __str__(self):
        return "__str__"

    def getLength(self) -> None:
        return self.__length
    def setLength(self, length) -> None:
        if length <=0:
            return False
        else:
            self.__length = length
            return True
    def getBreadth(self):
        return self.__breadth
    def setBreadth(self, breadth):
        if breadth<=0:
            return False
        else:
            self.__breadth = breadth
            return True
    def getHeight(self):
        return self.__height
    def setHeight(self, height):
        if height<=0:
            return False
        else:
            self.__height = height
            return True
    
