#dictionary in python

#syntax :
#my_dic = {'key1': 'value1','key2' :'value2',...}

#method -1 create dictionary using curly braces
my__data ={'name':'vikram','age':22,'city':'bhdra'}
# print(my__data)
# print(type(my__data))

#method-2 using dict() constructor
person = dict(name="vikram",age =22, grade = "A+")
# print(person)
# print(type(person))

#method--3 using tuples
person2 = dict([('name','vikram sardiwal'),('age','22')])
# print(person2)
# print(type(person2))

 #access dictionary values
student = {
    1: 'class-x',
    'name':'vikram sardiwal',
    'city':'banglore',
    'grade': 'A'
}
# print(student)
# print(type(student))

# print(student['name'])
# print(student['city'])

#dictonary methods
student = {
    1:'class-x',
    'name':'radhika',
    'grade':'A+',
    'city':'banglore'
}
#key
# print(student.keys())
#values
# print(student.values())
#items
# print(student.items())
#get
# print(student.get('name'))
# print(student.get('email','lol bro'))

#add/modify items in dicionary
student = {
    1:'hii',
    'name':'vikram sardiwal',
    'age':'22',
    'city':'bhdra',
    'desg':'software devloper'
}
# print(student)

#add item - assian operator
# student ['email'] = "vikramsardiwal@gmail.com"
# print(student)

#modify item - assign operator
# student ['age'] = 23
# print(student)

#remove items

#del to item
# del student['city']
# print(student)

#pop method
# var1 =student.pop('email')
# print(var1)
# print(student)


#dictionary itertions
student = {
    'name':'vikram',
    'age': 23,
    'city':'moga'
}

#loop through keys
# for keys in student:
#     print(keys)

#loop through values
# for value in student:
#     print(student[value])

# #using .values() method
# for value in student.values():
#     print(value)

#loop through both key-value pair
# for keys,value in student.items():
#     print(keys,value)

#nested dictionary
main_student = {
    'student1':{'name':'vikram','age':23},
    'student2':{'name':'radhika','age':22,'desg':'software devloper'}
}
# print(main_student)
# print(main_student['student1']['name'])
# print(main_student['student2']['name'])

#dictionary comprehension
my_dict = {x:x*x for x in range(1,11)}
print(my_dict)