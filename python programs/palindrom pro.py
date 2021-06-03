palindrom = input('Enter any sequence ')
checker = palindrom[::-1] # this statement create opposite of palindrom and store it in checker
if palindrom == checker:   # check if sequence in palindrom are equal to that of checker
    print('its palindrom')
else:
        print('its nor Palindrom')  

"""
x = input('enter the first number')  # input from user are String by default
y = input('enter the second number')
sum = int(x) + int(y)  # type casting from string to int
print(sum)

"""
