#charaterstics of set
# 1. unique values/items
#2. unorderd -no indexing
#3.mutable - add/remove elements
#4.immutable elements - replace/modify existing elements 


#using curley braces--- 
# my_set = {1,2,3,4,5}
# print(my_set)

#using set constructor--
# my_set = set([1,2,3,4,5])
# print(my_set)

#empty-set--
# empty_set = set()
# print(empty_set)

#set operations--
#add elements
# my_set = {1,2,3,4,5,6,"vikram","sahil"}
# my_set.add("radhika")
# print(my_set)

#remove elements--
#two methods
#remove
# number = {1,2,3,4,5}
# number.remove(1)
# print(number)
# number.discard(1)

#set methods--
# set1 = {1,2,3}
# set2 = {3,4,5}
# union_set = set1.union(set2)
# print(union_set)

# set1 = {"a","b","c"}
# set2 = {"d","e","f"}
# data = set1.union(set2)
# print(data)

# #union alternative
# data1 = set1 | set2
# print(data1)

#intersection - common elements

set1 = {1,2,3,4}
set2 = {3,4,5}
inter_set = set1.intersection(set2)
# print(inter_set)

#intersection alternative 
inter_set = set1 & set2
# print(inter_set)

#3.difference - element present first set only
set1 = {1,2,3,4,5,6}
set2 = {3,4,5}
diffset = set1.difference(set2)
# print(diffset)

#diffrenece alternative 
diffset = set1 - set2
# print(diffset)

#4.symmertic diffrenece - elements in either set but not in both--
set1 = {1,2,3}
set2 = {3,4,5}
symset = set1.symmetric_difference(set2)
# print(symset)

#symm diff alternative
symset1 = set1 ^ set2
# print(symset1)

#set iterations --
# numbers = {1,2,3,4,5}
# for i in numbers:
    # print(i)

#while loop-dosnt spot

#set compreshesions--
squares = {x**2 for x in range (1,11)}
# print(squares)