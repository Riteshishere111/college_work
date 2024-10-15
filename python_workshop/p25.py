#multi level
class a():
  def m1(self):
    print("this is m1 from class a")
class b(a):
  def m2(self):
    print("this is m2 from class b")
class c(b):
  def m3(self):
    print("this is m3 feom class c")
c=c()
c.m3()
c.m2()
c.m1()


