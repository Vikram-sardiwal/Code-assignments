#list --


# a = ["vikram","ravi","sahil"]
# print(a)

# a = ["a","b","c","d"]
# print(a)

#Duplicates--
# a = ["apple","banana","apple","mango"]
# print(a)

# a =["a","b","c","a","b"]
# print(a)

#List Length --

# a = ["vikram","radhika","sahil"]
# print(len(a))

# list1 = ["a","b","c"]
# list2 = [1,2,3,4,5]
# list3 =[True , False]
# print(list1)
# print(list2)
# print(list3)

#A list can contain different data types:

# a =["a","b",23,45,True,False]
# print(type(a))

#list() Constructor--

# a = list((12,45,"vikram"))
# print(a)

#Access List Items--

# a = ["a",12,"c",90]
# print(a[2])

#Negative Indexing--
# thislist = ["apple", "banana", "cherry"]
# print(thislist[-1])

#Range of Indexes--
# a =[1,2,3,"vikram","apple"]
# print(a[2:4])

# thislist = ["apple", "banana", "cherry", "orange", "kiwi", "melon", "mango"]
# print(thislist[:4])

# thislist = ["apple", "banana", "cherry", "orange", "kiwi", "melon", "mango"]
# print(thislist[2:])

# thislist = ["apple", "banana", "cherry", "orange", "kiwi", "melon", "mango"]
# print(thislist[-4:-1])

#Check if Item Exists--

# list = ["apple","mango","kiwi"]
# if "kiwi" in list:
#     print("yes ,'kiwi in fruit list")

# list = [1,2,3,4,5,6,7,8,9,10]
# if 1 in list:
#     print("yes , 1 in table list.")


#Change List Items--
# a = ["apple","mango","kiwi"]
# a[2]="grapes"
# print(a)

# b = [1,2,3,"vikram","lenovo"]
# b[1] = "radhika"
# print(b)

#Change a Range of Item Values--
# a = ["a","b","c","d"]
# a[1:3]= "e","f"
# print(a)

# a = ["c","i","o","u","l","s"]
# a[2:5]="q","w","e"
# print(a)

#Add List Items--
# a = ["a","b","c","d"]
# a.append("e")
# print(a)

# list = ["vikram",1,2,"radhika","sahil",True,False]
# list.append("yashika")
# print(list)

#Insert Items--
# a = ["vikram",1,2,3,"radhika"]
# a.insert(1,"iqoo")
# print(a)

# a = [1,2,3,"abc","cbfd"]
# a.insert(3,4)
# print(a)

#Extend List--
# a = [1,2,3,4,5]
# b = [6,7,8,9,10]
# a.extend(b)
# print(a)

# list = [1,2,3,"vikram","abc"]
# list1 = [4,5,6,"radhika","def"]
# list.extend(list1)
# print(list)

#Add Any Iterable--
# thislist = ["apple", "banana", "cherry"]
# thistuple = ("kiwi", "orange")
# thislist.extend(thistuple)
# print(thislist)

#Remove List Items--
# a = [1,2,3,"bdbeied"]
# a.remove(1)
# print(a)

# ab = ["hbd",2,5,"loi"]
# ab.remove("loi")
# print(ab)

#Remove Specified Index--
# a =["apple","banana","cheery"]
# a.pop(1)
# print(a)

# a = [1,2,3,4,"vikram"]
# a.pop(3)
# print(a)

#remove last items --
# ab = [1,2,"vikram",9,0]
# ab.pop()
# print(ab)

#del--
# a = [1,2,3,"vhdd"]
# del a[2]
# print(a)

# thislist = ["apple", "banana", "cherry"]
# del thislist

#Clear the List
# thislist = ["apple", "banana", "cherry"]
# thislist.clear()
# print(thislist)

# a =[1,2,3,4,5]
# a.clear()
# print(a)


#loop lists--
# a = ["vikram","radhika","sahil","yashika","parnav"]
# for i in a:
#     print(i)

# list = [1,2,3,4,5,"abc","def","ghi"]
# for i in list:
#     print(i)

#Loop Through the Index Numbers--
# thislist = ["vikram","apple","mango"]
# for i in range(len(thislist)):
#     print(thislist[i])

# ab =[1,2,3,"vikram","abc","def",45,56]
# for i in range(len(ab)):
#     print(ab[i])

#Using a While Loop--
# thislist = ["vikram","a","b","c"]
# i=0
# while i < len(thislist):
#     print(thislist[i])
#     i= i+1


# ab = [1,2,3,4,5,6]
# i=0
# while i < len(ab):
#     print(ab[i])
#     i = i+1

#Looping Using List Comprehension--
# thislist = [1,2,3,4,"ab","cd"]
# [print(x) for x in thislist]

# ab =[1,2,3,5,3,2,34,"apple","mango"]
# [print(z) for z in ab]

#List Comprehension--
# alist = [1,2,3,4,"vikram","apple"]
# newlist = []
# for x in alist:
#   if "a" in x:
#      newlist.append(x)

# print(newlist)

# fruits = ["apple", "banana", "cherry", "kiwi", "mango"]
# newlist = []

# for x in fruits:
#   if "a" in x:
#     newlist.append(x)

# print(newlist)

#Sort Lists--

# thislist = ["orange", "mango", "kiwi", "pineapple", "banana"]
# thislist.sort()
# print(thislist)

# thislist = [100, 50, 65, 82, 23]
# thislist.sort()
# print(thislist)

#Sort Descending--
# thislist = ["apple","mango","banana","kiwi"]
# thislist.sort(reverse=True)
# print(thislist)

#copy list--
# thislist = ["apple","mango","banana"]
# mylist = thislist.copy()
# print(mylist)

# thislist = ["apple",1,2,3,4]
# mylist = thislist.copy()
# print(mylist)

#list copy--
# thislist = ["apple","mango",1,2,3]
# mylist = list(thislist)
# print(mylist)

#slice operator copy--
# thislist = ["vikram","radhika","sahil","ridhi"]
# mylist = thislist[:]
# print(mylist)

#Join Two Lists--\
# list1 = [1,2,3,4,5]
# list2 = [3,4,5,6]
# mylist = list1 + list2
# print(mylist)

# list1 = [1,2,3,4,5]
# list2 = [6,7,8,9,10]
# for x in list2:
#     list1.append(x)
  
# print(list1)

# list1 = [1,2,3,4,5,"apple","mango","slice"]
# list2 = [6,7,843,56,"banana"]
# for x in list2:
#     list1.append(x)
# print(list1)

# list1 = ["a", "b" , "c"]
# list2 = [1, 2, 3]

# list1.extend(list2)
# print(list1)

# list1 = [1,2,3,4,"a","b"]
# list2 = [9,8,0,"c","d","e"]
# list1.extend(list2)
# print(list1)