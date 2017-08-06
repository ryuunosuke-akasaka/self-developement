import math
import time

def add(x, y):
    return x+y
def subtract(x, y):
    return x-y
def multiply(x, y):
    return x*y
def divide(x, y):
    return x/y
def expo(x, y):
    return x**y

print("1)addition")
print("2)subtraction")
print("3)multiplication")
print("4)division")
print("5)base and power-exponent")

choice=input("enter your choice(1/2/3/4/5)Just numbers!!!: ")

if choice=='1':
    Fnum=int(input("enter first number: "))
    Snum=int(input("enter second number: "))
    print(Fnum,'+',Snum,'=', add(Fnum, Snum))
elif choice=='2':
    Fnum=int(input("enter first number: "))
    Snum=int(input("enter second number: "))
    print(Fnum,'-',Snum,'=', subtract(Fnum, Snum))
elif choice=='3':
    Fnum=int(input("enter first number: "))
    Snum=int(input("enter second number: "))
    print(Fnum,'*',Snum,'=', multiply(Fnum, Snum))
elif choice=='4':
    Fnum=int(input("enter first number: "))
    Snum=int(input("enter second number: "))
    print(Fnum,'*',Snum,'=', divide(Fnum, Snum))
elif choice=='5':
    Fnum=int(input("enter the base value: "))
    Snum=int(input("enter the value of: "))
    print(Fnum,'**',Snum,'=', expo(Fnum, Snum))
else:
    print("invalid output")


time.sleep(5.0)


