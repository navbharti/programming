'''
This module implements singleton class 
'''
class Master:
    #instance = __Master()
    class __Master:
        def __init__(self, arg):
            self.val = arg
        def __str__(self):
            return repr(self) + self.val
    instance = __Master(arg)

   
    

    def __getattr__(self, name):
        return getattr(self.instance, name)

class Student:
    def __init__(self):
        pass
    def callme(self):
        c = Master("one")
        d = Master('two')
        print(c)
        print(d)

if __name__ == '__main__':
    o = Student()
    o.callme()
    a = Master("three")
    b = Master("four")
    print(a)
    print(b)