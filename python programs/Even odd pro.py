a = input('enter the value ')
a = int(a)
if a % 2 == 0 :
    print('Even')
else:
    print('odd')

"""
    # formatting
print('the value %f is Even ' %a)
print(f 'the value {a : 3.2f} is even')
print(f 'the value {a} is even')
"""

marks = input('enter the marks')
marks = int(marks)
if marks >= 80 :
    print('A1 grade')
elif marks >= 70 and marks < 80 :
    print ('A grade')
elif marks >= 60:
    print( 'B grade')
else:
    print( 'fail')

