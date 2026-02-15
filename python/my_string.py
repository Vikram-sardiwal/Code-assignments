#string
#formating strings
#1. old style formating_ % operator

name = "vikram sardiwal"
age = 21
# print("my name is %s and i`m %d" %(name,age))

#2. str.formt() method
name = "vikram sardiwal"
age = 21
# print("my name is {} and i`m {}".format(name,age))

#you can refrence variables by index or keyword
# print("my name is {0} and i`m {1}".format(name,age))

#f string
name = "vikram sardiwal"
age = 22
# print(f"my name is {name} and i`m {age}")
# print(f"my age after 5 years will be {age +5}")

# print("hello\nworld") #new-line
# print("hello\t world") #new tab


# string operators in python
a = "vikram"
b =  "sardiwal"
# print(a+b) #concatenate
# print(a*3) #multiple copies

#[] -slice, [:] - range 

#string indexing
name = "vikram"
print(name[-1])
print(name[2])