'''
Requirements:
- Name, Age, Height, Student Status;
- Greetings;
- Print Input;
- type() & Casting.



print('===== PERSONAL INFORMATION PROGRAM =====')
print('Greetings!: ')

#User Input:
name = input('Enter your NAME: ')
age = int(input('Enter you AGE: '))
height = float(input('Enter your HEIGHT: '))
studentStatus = input('Are you a STUDENT? (Y/N): ').upper()

#Output:
if len(studentStatus) == 1:
    print('===== YOUR PERSONAL INFORMATION =====')
    print(f'     Name: {name}')
    print(f'     Age: {age}')
    print(f'     Height: {height}')
    print(f'     Student Status: {studentStatus}')
else:
    print('Invalid Input...')


#type(.) & Casting
print('\n')
print(type(name))
print(type(age))
print(type(height))
print(type(studentStatus))

'''

'''
Simple Grade Calculator: 
    Requirements: 
        - Student's Information: (name, age, grade level, grades(math, science, english));
        - Type Casting;
        - Calculate the Average;
        - Conditional Statement: 
            = Average 90 or higher → Excellent
            = Average 80–89.99 → Very Good
            = Average 75–79.99 → Passed
            = Average below 75 → Failed
'''

print('===== STUDENT GRADE CALCULATOR =====')
print('Please enter your STUDENT INFORMATION before you proceed: ')
name = input('  1)  NAME: ')
age = int(input('  2)  AGE: '))
grade_level = input('  3)  EDUCATIONAL ATTAINMENT: ')
print('= Now, enter your GRADE for each SUBJECT =')
math = int(input('  1)  MATHEMATICS: '))
sci = int(input('  2)  SCIENCE: '))
eng = int(input('  3)  ENGLISH: '))

average = float((math + sci + eng)/3)

if average >= 90:
    print('Excellent!')
elif average >= 80:
    print('Very Good!')
elif average >= 75:
    print('Passed.')
else:
    print('Failed.')

#Output: 
print('===== STUDENT INFORMATION =====')
print(f'    Name: {name}')
print(f'    Age: {age}')
print(f'    Grade Level: {grade_level}\n')
print('===== STUDENT GRADE =====')
print(f'    Mathematics: {math}')
print(f'    Science: {sci}')
print(f'    English: {eng}')
print(f'        Average: {average}\n')
print('===== TYPE CASTING =====')
print(type(name))
print(type(age))
print(type(grade_level))
print(type(math))
print(type(sci))
print(type(eng))
print(type(average))








