"""
#using for loop
h_letter = []
for letter in 'human':
    h_letter.append(letter)  # append work as add()
print(h_letter)    """

"""
#List Comprehension
h_letter = []
h_letter = [letter for letter in 'human']
print(h_letter) 
"""

# print only Even form 0 10
num_list = [ x for x in range(20) if x % 2 == 0]
print(num_list);

#print values divisable by 2 and 5
num = [x for x in range(100) if x % 2 == 0  if x % 5 == 0]
print(num);


# Transposed a Matrix through for loop
transposed = []
matrix = [1,2,3,4],[4,5,6,7]
for i in range(len(matrix[0])):
                   transposed_row = []
                   for row in matrix:
                       transposed_row.append(row[i])
                       transposed.append(transposed_row)

                   print(transposed)


# Transposed through List Comprehension
matrix = [ [1,4],[2,5],[3,6],[4,7] ]
transposed = [[row[i] for row in matrix] for i in range(2)]
print(transposed)
