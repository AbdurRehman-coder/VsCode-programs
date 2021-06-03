import math
m = 0
s = 2
x = 1

square_root = (1 / math.sqrt(2 * math.pi * s))
exponential = math.exp(-1/2 * math.sqrt( x - m))

values = square_root * exponential

print ('the value of square root part is: ' , square_root)
print('the value of exponential part is: ' , exponential)

print('the value of the function is: ' , values)

