# Find min and max value in the list

n = [33,10,34,76,20,8]
# Let's suppos the first index element is the min and max value of the list
max = n[0]
min = n[0]

for i in n:
    if i > max:
        max = i
    elif i < min:
        min = i

print('min value is: ', min , '\nmax value is: ', max)



