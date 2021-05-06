```python
class Account:
    def __init__(self, id=0, balance=100.0, annualInterestRate=0.0):
        self.__id = id
        self.__balance = balance
        self.__annualInterestRate = annualInterestRate

    #Accessros
    def getId(self):
        return self.__id

    def getBalance(self):
        return self.__balance

    def getAnnualInterestRate(self):
        return self.__annualInterestRate

    #Mutators
    def setId(self, id):
        self.__id = id

    def setBalance(self, balance):
        self.__balance = balance

    def setAnnualInterestRate(self, annualInterestRate):
        self.__annualInterestRate = annualInterestRale
     
    #withdraw method
    def withdraw(self, amount):
        if self.getBalance() < amount:
            print("Insuffient Amount")
        else:
            #self.__balance = self.__balance - amount
            self.setBalance(self.getBalance() - amount)

    def deposit(self, amount):
        if amount < 0:
            print("Negative Amount!!!")
        else:
            self.setBalance(self.getBalance() + amount)
            print("Deposit is Successfully Done!!!")

    def getMonthlyInterestRate(self):
        monthlyInterestRate = self.getAnnualInterestRate() / 12
        return monthlyInterestRate

    def getMonthlyInterest(self):
        monthlyInterest = self.getMonthlyInterestRate() * self.getBalance()
        return monthlyInterest

    
if __name__ == "__main__":
    account = Account(1122, 20000, 4.5)

    print("Id: {}".format(account.getId()) )
    print("Balance: ${}".format(account.getBalance()))
    print("Annual Interest Rate: {}%".format( account.getAnnualInterestRate()))
    print("Monthly Inerest Rate: {}%".format(account.getMonthlyInterestRate()))
    print("Monthly Interest: ${}".format(account.getMonthlyInterest()) )

    account.withdraw(2500)

    print("Id: {}".format(account.getId()) )
    print("Balance: ${}".format(account.getBalance()))
    print("Annual Interest Rate: {}%".format( account.getAnnualInterestRate()))

'''
if __name__ == "__main__":
    main()

'''

#implement the test program as main() method in some class
then calls main() method

```