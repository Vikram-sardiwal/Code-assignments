#loops in python-while &for loop

#while loop
i= 0
while i <5: #condition
    # print(i)
    i = i+1

i=1
while i < 10:
    # print(i)
    i = i+2

# i=5
# while i > 0:
#     # print(i)
#     i-=1
# else :
#     # print("while loop ended !")

#for loop
# language = 'python'
# for i in language:
#     print(i)

# data = ["vikram","radhika","sahil","yashika"]
# for i in data:
#     print(i)

#range function
# for i in range(11):
#     print(i)

# for i in range (1,6):
#     print(i)

#one value jump
# for i in range(1,10,2):
#     print(i)

# for i in range(10):
#     print(i)
# else:
#     print("loop ended !")

#pass 
# for i in range(10):
#     pass

# i = 5
# while i >0:
#     if i == 3:
#         pass
#     else:
#         print(i)
#     i-=1

#break statement
# for i in range(33):
#     if i==9:
#         break
#     print(i)

#continue statement
# for i in range(10):
#     if i == 6:
#         continue
#     print(i)

# while True:
#      user_input = input("enter exists :")
#      if user_input == 'exit':
#          print("congrats!")
#          break
#      print("sorry , you entered :",user_input)


while True:
    user_input = input("Enter the ok :")
    if user_input == 'ok':
        print("congratulations !")
        break
    print("sorry try again :",user_input)