#Python Tuples--
# thistuple = ("apple","mango","kiwi")
# print(thistuple)

#Allow Duplicates-
# thistuple =("apple","apple","mango","kiwi","kiwi")
# print(thistuple)

#Tuple Length--
# thistuple = ("vikram","radhika","gul","sahil")
# print(len(thistuple))
 
# thistuple = (1,2,3,4,5,6,7,8,9,0)
# print(len(thistuple))

#The tuple() Constructor--
# thistuple = ((1,2,3,4,5,6))
# print(thistuple)

#Access Tuple Items--
# thistuple = ("a","b","c","d")
# print(thitule[3])

#range of index--
# thistuple = ("a","b","c","d","e","f","g","h","i")
# print(thistuple[3:6])

#Check if Item Exists--
# thistuple = ("vikram","mitanshu","himanshu","hemant","karan","sunil")
# if "vikram" in thistuple:
#     print("yes, vikram in this tuple.")

#Change Tuple Values--
# x = ("apple","banana","kiwi")
# y = list(x)
# y[1] = "kiwi"
# x = tuple(y)

# print(x)

# x = (1,2,3,4,5)
# y = list(x)
# y[3] = 9
# x = tuple(y)
# print(x)

#Add Items--
# thistuple =("apple","mango","cherry")
# y = list(thistuple)
# y.append("orange")
# thistuple = tuple(y)
# print(thistuple)

# thistuple = ("a","b","c",1,2,3,4,5)
# y = list(thistuple)
# y.append("vikram")
# thistuple = tuple(y)
# print(thistuple)

#remove items--
# thistuple = ("apple","mango","cherry")
# y = list(thistuple)
# y.remove("cherry")
# thistuple = tuple(y)
# print(thistuple)

# thistuple = (10,20,30,40,50)
# y = list(thistuple)
# y.remove(30)
# thistuple = tuple(y)
# print(thistuple)

#access tuple idexing 

# thistuple = ("apple","mango","cherry")
# print(thistuple[2])

# atuple =(1,2,3,4,5,6)
# print(atuple[1])


#tuple slicing--
# thislist=(10,20,30,40,50)
# print(thislist[0:4:2])  #even odd

# at_tuple = (1,2,3,4,5,6,7,8,9,10)
# print(at_tuple[1:9:2])  #even-odd

#repetitive--
# a_tuple = (1,2,3) *5
# print(a_tuple)

#chechking a tuple in element--
# ab_tuple = (1,2,3,4,5)
# # print(2 in ab_tuple)
# print(10 in ab_tuple)

#count method--
# this_tuple = ("vikram","karan","vikram","ridhi")
# # print(this_tuple.count('vikram'))
# print(this_tuple.index('ridhi'))

#tuple function--
ab_tuple = (1,2,3,4,5,6,7,8)
# print(sum(ab_tuple))
# print(min(ab_tuple))
# print(max(ab_tuple))
# print(len(ab_tuple))
# print(sorted(ab_tuple)) #tuple is now sorted list

# absorted = tuple(ab_tuple)
# print(absorted)

#tple pack and unpack--
# a = 10
# b = "vikram"
# c = "engineer"
# ab_tuple = a,b,c
# # print(ab_tuple)
# name,age,proffesional = ab_tuple
# print(name)
# print(age)
# print(proffesional)

