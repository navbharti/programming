class Node:
    """This class is for Node of Singly Linked List"""
    def __init__(self, data):
        self.__data = data
        self.__next = None

    def getData(self):
        return self.__data

    def setData(self, data):
        self.__data = data

    def getNext(self):
        return self.__next

    def setNext(self, next):
        self.__next = next

class SinglyLinkedList:
    """This class is for Singly Linked List"""
    def __init__(self):
        self.__head = None
        self.__tail = None

    def insertAtBegin(self, data):
        if self.__head == None:
            self.__head = Node(data)
            self.__tail = self.__head
        else:
            temp = Node(data)
            temp.setNext(self.__head)
            self.__head = temp

    def insertAtEnd(self, data):
        pass

    def insertByPosition(self, data, position):
        pass

    def insertByData(self, data, keyData):
        pass

    def deleteFromBegin(self):
        pass

    def deleteFromEnd(self):
        pass

    def deleteByPosition(self, position):
        pass

    def deleteByData(self, keyData):
        pass

    def modifyBegin(self, newData):
        pass

    def modifyEnd(self, newData):
        pass

    def modifyByPosition(self, position):
        pass

    def modifyByData(self, newData, oldData):
        pass

    def display(self):
        temp = self.__head
        while temp != None:
            print(temp.getData(), end="->")
            temp = temp.getNext()

    def countNodes(self):
        pass

    def firstNode(self):
        pass

    def lastNode(self):
        pass

    def displayRev(self):
        temp = self.__head
        while temp != None:
            print(temp.getData(), end="->")
            temp = temp.getNext()

    def reverse(self):
        pass

    def __str__(self):
        temp = self.__head
        txt = ""
        while temp != None:
            "".join(temp.__data, end="->")
            temp = temp.__next

sll = SinglyLinkedList()
sll.insertAtBegin(12)
sll.insertAtBegin(20)
sll.insertAtBegin(100)
sll.display()

'''
n = Node(12)
print(n.getData(), "->", n.getNext())
n1 = Node(20)
n.setNext(n1)
print(n.getData(), "->", n.getNext().getData())
'''

Draw and Develop a class Circle with instance variable radius through constructor. 
Create an instance variable with name filled of boolean type throught instance method createFilled.
Create an instance variable with name borderWidth of type float through object.


programming/python/code/bubbleSort.py

/Users/navbharti/githubRepo/programming/python/code/bubbleSort.py


