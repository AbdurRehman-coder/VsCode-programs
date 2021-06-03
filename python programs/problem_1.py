import math
'''
# solve the problem with help of loop
y = []
for i in range(0,8):
    y.append(i**2 - i/(i+3))
print(y)
'''
# With help of comprehension loops
c = [(x**2) - (x/(x+3)) for x in range (8)]
print(c)


# Create a list with following elements
a = [ 9, 1, 3**2, 7/4, 0, 0.25 * 8.5, 0.8, math.sin(3.14/8)]
print(a)

# Create a list with first element 3 and last element 27
# will increment 4 b/w them.
y = []
for n in range(3, 28, 4):
    y.append(n)
print(y)

c = [ n for n in range(3, 28, 4)]
print(c)

# Create a list of 8 equally spaced elements b/w 68 and 12.
#inc = int((68-12)/7)
c = [ n for n in range(68,11, -7)]
print(c)

x = [-4, -1, 2, 5]
y = [8]
z = [14,18,22,26,30]
for a,b,c in zip(x,y,z):
 print(a,b,c)
 
