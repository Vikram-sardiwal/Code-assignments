 #create a function--
def greeting():
    print("welcome vikram sardiwal")

#call function (use function)
# greeting()

#craete a function to add 2 numbers--
def add2number(number1,number2): #parameter(number1,number2)
    result = number1 + number2
    print("sum of add2numbers :",result)

#call above sum function
# add2number(25,25) #arguments(25,25)

#function with return statements--
def add2num (a,b):
    return a+b
sum2num = add2num(10,10)
# print(sum2num)

#example with a return value 
def celsius_to_faherenheit(celsius):
    fahrenheit = (celsius * 9/5) +32
    return fahrenheit
#calling this function to return a value
temp_f = celsius_to_faherenheit(30)
print(temp_f)