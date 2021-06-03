import itertools
num = [ 1,2,3]
colour = [ 'white', 'black', 'red']
value = [344,22]
for(a,b,c) in itertools.zip_longest(num, colour, value):
    print(a,b,c)
