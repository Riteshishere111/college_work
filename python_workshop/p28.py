#EH
try:
 a=eval(input("enter first number="))
 b=eval(input("enter second number="))
 print("sum=",a+b)
 print("sub=",a-b)
 print("mult=",a*b)
 print("div=",a//b)
except NameError:
 print("print number")
except ZeroDivisionError:
 print("do not divide any number from zero")
finally:
 print("hum to ayge br br")