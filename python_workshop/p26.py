#multiple
class a():
 def m1(self):
  print("this is m1 from class a")
class b():
 def m2(self):
  print("this is m2 from class b")
class c(a,b):
 def m3(self):
  print("this is m3 from class c")
c=c()
c.m3()
c.m2()
c.m1()
