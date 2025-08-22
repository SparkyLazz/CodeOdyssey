#Day 1 learning from beginning again
#22 Agustus 2025 | Simple Calculator

#What I do not like about python is the function must write earlier to get exist
#Or maybe I lack of information

#Function Session
def Add(a, b) :
    print("===================================================================")
    print(f"{a} + {b} = {a + b}")

def Subtract(a,b) :
    print("===================================================================")
    print(f"{a} - {b} = {a - b}")

def Multiply(a, b) :
    print("===================================================================")
    print(f"{a} x {b} = {a * b}")

def Divided(a, b) :
    if b == 0 :
        print("===================================================================")
        print("Undefined Result")
    else :
        print("===================================================================")
        print(f"{a} / {b} = {a / b}")

#Getting Input from user
number_input1 = float(input("Enter the first number : "))
number_input2 = float(input("Enter the second number : "))

#Chosing the type of execution
execution_select = str(input("Choose the execution method [Add | Subtract | Multiply | Divided] : "))
match execution_select :
    case "Add" :
        Add(number_input1, number_input2)
    case "Subtract" :
        Subtract(number_input1, number_input1)
    case "Multiply" :
        Multiply(number_input1, number_input2)
    case "Divided" :
        Divided(number_input1, number_input2)
    case _:
        print("Non of it is a available execution")