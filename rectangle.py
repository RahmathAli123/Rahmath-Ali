class Rectangle:
    def getdata(self):
        self.a=int(input("Enter Length :"))
        self.b=int(input("Enter Breadth :"))
    def area(self):
        area=self.a*self.b
        print("Area : ",area)
        return(area)
    def perimeter(self):
         perim=2*(self.a+self.b)
         print("Perimeter : ",perim)
         return(perim)
print("1st Rectangle")
ob1=Rectangle()
ob1.getdata()
a1=ob1.area()
p1=ob1.perimeter()
print("\n2nd Rectangle")
ob2=Rectangle()
ob2.getdata()
a2=ob2.area()
p2=ob2.perimeter()
if al==a2:
    print("\nAreas are equal")
elif al>a2:
    print("\nArea of 1st rectangle greater 2nd rectangle ")
else:
    print("\nArea of 2nd rectangle greater 1st rectangle ")
