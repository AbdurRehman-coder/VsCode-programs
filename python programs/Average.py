# Find the average of odd numbers from 37 to 99
sum = 0
total = 0
for i in range(37 , 100):  # numbers from 37 to 99
 if ( i % 2) == 1:
    sum = sum + i
    total = total + 1
#print(total)
#print(sum)
average = sum / total
print(average, ' is the average of odd no from 37 to 99')
