# class Person:
#     def __init__(self,firstname,lastname,sex,dob,mobile,city,state,email):
#         self.firstname = firstname
#         self.lastname = lastname
#         self.sex = sex
#         self.dob = dob
#         self.mobile = mobile
#         self.city = city
#         self.state = state 
#         self.email = email

#     # def person_detaile(self):
#     #     print(f"{self.firstname} is in state {self.state}")
#         # print(f"{self.city} and mobile {self.mobile}")
# person1 = Person("vikram ","sardiwal","male","23-07-2005",6367656922,"bhadra","rajasthan","vikramsardiwal22@gmail.com")
# # print(person1.firstname,person1.lastname,person1.sex,person1.dob,person1.mobile,person1.city,person1.state,person1.email)
# # person1.person_detaile()

# class Company:
#     def __init__(self,companyname,companyproduct,companymobile,companyemail,companystate,companywebsite):
#         self.companyname = companyname
#         self.companyproduct = companyproduct
#         self.companymobile = companymobile
#         self.companyemail = companyemail
#         self.companystate = companystate
#         self.companywebsite = companywebsite

#     def company_details(self):
#         print(f"{self.companyname} and {self.companyproduct}")
# company1 = Company("evocative","nike",6367656922,"evocative@gmail.com","rajasthan","evocative.com")
# # print(company1.companyname,company1.companyproduct,company1.companymobile,company1.companyemail,company1.companystate,company1.companywebsite)
# # company1.compaany_details()

# class Employee (Company): 
#     def __init__(self,compnayname,companyproduct,companymobile,companyemail,companystate,companywebsite,name,department,desg):
#         super().__init__(compnayname,companyproduct,companymobile,companyemail,companystate,companywebsite)
#         self.name = name
#         self.department = department
#         self.desg = desg

#     def employee_details(self):
#         super().company_details()
#         # print(f"{self.name} and department {self.department} desg = {self.desg}.")
#         # print(f"{self.name} {self.department} {self.desg}")

# Employee1 = Employee("evocative","nike",6367656922,"evocative@gmail.com","rajasthan","evocative.com","vikram","tech","software developer")
# # print("Name :",Employee1.name)
# # print("Department :",Employee1.department)
# # print("Desg :",Employee1.desg)
# # print("Company Name",Employee1.companyname)
# # print("Company Product :",Employee1.companyproduct)
# # print("Company Mobile :",Employee1.companymobile)
# # print("Company Email :",Employee1.companyemail)
# # print("Company State :",Employee1.companystate)
# # print("Company Website :",Employee1.companywebsite)
# # Employee1.employee_details()

# class Manager(Employee):
#     def __init__(self,compnayname,companyproduct,companymobile,companyemail,companystate,companywebsite,name,department,desg,bs,ta,da,hra,pf):
#         super().__init__(compnayname,companyproduct,companymobile,companyemail,companystate,companywebsite,name,department,desg)
#         self.bs = bs
#         self.ta = ta
#         self.da = da
#         self.hra = hra
#         self.pf = pf

#     def employee_details(self):
#          super().employee_details()
#          print(f"{self.bs}")
#          print(f"{self.ta}")
#          print(f"{self.da}")
#          print(f"{self.hra}")
#          print(f"{self.pf}")
#          ta_amount = self.bs * self.ta
#          da_amount = self.bs * self.da
#          hra_amount = self.bs * self.hra
#          pf_amount = self.bs * self.pf

#          total_salary = self.bs + ta_amount + da_amount + hra_amount
#          net_salary = total_salary - pf_amount
#          print("Basic Salary:", self.bs)
#          print("TA:", ta_amount)
#          print("DA:", da_amount)
#          print("HRA:", hra_amount)
#          print("PF:", pf_amount)
#          print("Total Salary:", total_salary)
#          print("Net Salary:", net_salary)

# Manager1 = Manager("evocative","nike",6367656922,"evocative@gmail.com","rajasthan","evocative.com","vikram","tech","software developer",2000000,0.10,0.08,0.12,0.05)

# print("Name :",Manager1.name)
# print("Department :",Manager1.department)
# print("Desg :",Manager1.desg)
# print("Company Name",Manager1.companyname)
# print("Company Product :",Manager1.companyproduct)
# print("Company Mobile :",Manager1.companymobile)
# print("Company Email :",Manager1.companyemail)
# print("Company State :",Manager1.companystate)
# print("Company Website :",Manager1.companywebsite)
# # print("bs :", Manager1.bs)
# # print("ta :",Manager1.ta)
# # print("da :",Manager1.da)
# # print("hra :",Manager1.hra)
# # print("pf :",Manager1.pf)
# Manager1.employee_details()



