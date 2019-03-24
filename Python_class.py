class A:
    aaa = 0
    aab = True
    __aac = 3+6j

    def __init__(self, aaa, aab, aac):
        self.aaa = aaa
        self.aab = aab
        self.__aac = aac

    def setaac(self, aac):
        self.__aac = aac

    def result(self):
        print("aaa = ", self.aaa)
        print("aab = ", self.aab)
        print("__aac = ", self.__aac)

class B(A):
    bbb = 0

    def result(self):
        A.result()
        print("bbb = ", self.bbb)

a = A(20, False, 6)
a.result()

b = B(5, True, True)

#output
'''
aaa =  20
aab =  False
__aac =  6
'''