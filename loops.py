'''
#Multiplication Table:
num = int(input('Enter NUMBER: '))

for x in range(1, 11):
    print(x*num)
'''

'''
Number Analyzer:
    - How many NUMBER to ENTER (UserInput).
    - Each Number: If POSITIVE, NEGATIVE, or ZERO;
    - Tell whether it's EVEN or ODD;
    - print How many numbers were EVEN and ODD.

even = 0
odd = 0

print('=======================================')
amount = int(input('Enter NUMBER of DIGITS: '))
print('=======================================')

for x in range(1, amount + 1):
    nums = int(input(f'ENTER NUMBER {x}: '))

    if nums >= 1:
        print(f'Positive: {nums}')
    elif nums == 0:
        print(f'Zero: {nums}')
    elif nums <= -1:
        print(f'Negative: {nums}')
    else:
        print('Invalid Input.')

    if nums % 2 == 0:
        print('Even')
        even += 1
    else:
        print('Odd')
        odd += 1

print('=======================================')
print(f'Even: {even} ')
print(f'Odd: {odd} ')
print('=======================================')
'''






