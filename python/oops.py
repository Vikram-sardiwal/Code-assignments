
# class employee:
#     empno = None
#     ename = None
#     salary = None

#     def input(self,empno,ename,salary):
#         self.empno = empno
#         self.ename = ename
#         self.salary = salary
#     def display(self):
#         print(self.empno," ",self.ename," ",self.salary)
# e1=employee()
# e1.input(3,"vikram sardiwal",333)
# e1.display()



#using oops-creating student records--
 
#class -blueprint or template
# class Student:  #student class
#     def __init__(self,name,age,address,country,salary,contact_number): #method
#         self.name = name #attribute
#         self.age = age  #attribute
#         self.address = address #attribute
#         self.country = country #attribute
#         self.salary = salary #attribute
#         self.contact_number =contact_number   #attribute    
#     # def student_details(self): #method
#     #     print(f"{self.name} is in country {self.country}")
    

# #object - instance of class
# student1 = Student("vikram sardiwal",22,"biran","india",100000,6367656922)
# print(student1.name,student1.age,student1.address,student1.country,student1.salary,student1.contact_number) 

# student1.student_details()

#modify object property
# print(student1.age)
# student1.age = 21  #modify
# print(student1.age)

#delete object property
# print(student1.__dict__)
# del student1.contact_number
# print(student1.__dict__)

#4 features in oops
#abstraction
#encapsulation
#inheritance
#polymorphism

#abstraction
#hiding unnecesary details from users through class,methods

# class Employee:
#     def __init__(self,name,grade,percentage):
#         self.name = name #attributes
#         self.grade = grade
#         self.percentage = percentage

#     def employee_details(self): #method-abstraction
#         print(f"{self.name} is in the class {self.grade},with {self.percentage+2}%") #hidden from users

# #object-instance of class
# employee1=Employee("vikram",11,96)
# Employee2= Employee("radhika",12,97)
# employee1.employee_details()

#encapsulation
#restrict access to certain attributes or methods to protect data amd enforce controlled access
# class Employee:
#     def __init__(self,name,grade,percentage):
#         self.name = name #attributes
#         self.grade = grade
#         self.__percentage = percentage #double underscore limits access
    
#     def get__percentage(self):
#         return self.__percentage
    

#     def employee_details(self): #method
#         print(f"{self.name} is in the class {self.grade},with {self.percentage+2}%") 

# #object-instance of class
# employee1=Employee("vikram",11,96)
# employee2= Employee("radhika",12,97)
# # print(Employee.__percentage) #error 
# print(employee1.get__percentage())


#inheritance--
#allows one class (child) to reuse the prop and methods of another class(parent).

#parent class 
class Employee:
    def __init__(self,name,grade,percentage):
        self.name = name #attributes
        self.grade = grade
        self.percentage = percentage 
    
    def employee_details(self): #method
        print(f"{self.name} is in the class {self.grade},with {self.percentage+2}%") 

#object-instance of class
employee1=Employee("vikram",11,96)
employee2= Employee("radhika",12,97)
# print(Employee.__percentage) #error 
# print(employee1.get__percentage())

#child class--
class GradutaeEmployee(Employee): #graguatestudents child class inherit prp and methods from student parent class
    def __init__(self,name,grade,percentage,stream): #old parameters from parent class and new parameters in child class
        super().__init__(name,grade,percentage) #call parents class init
        self.stream = stream #new attribute in child class

    def employee_details(self):
         super().employee_details() #method inherit from parent class 
         print(f'stram is {self.stream}')
#object
grad_employee1 = GradutaeEmployee("vikram",12,96,"pcm")
# print(grad_employee1.stream)
# grad_employee1.employee_details()

#polymorphism
class GradutaeEmployee(Employee): 
    def __init__(self,name,grade,percentage,stream): 
        super().__init__(name,grade,percentage) 
        self.stream = stream 

    def employee_details(self):
         super().employee_details() #method 
         print(f'stram is {self.stream}')
#object
grad_employee1 = GradutaeEmployee("vikram",12,96,"pcm")
# print(grad_employee1.stream)
# grad_employee1.employee_details()
