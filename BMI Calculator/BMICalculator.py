#Day 1 learning from beginning again
#22 Agustus 2025 | BMI Calculator

#Get the data from Input
print("Please input based on unit")
print("==========================")
height = float(input("Height (m) : "))
weight = float(input("Weight (kg) : "))

#It's time to calculate the Data
bmi = weight / height**2
print(f"Your BMI is: {bmi:.2f}")

if bmi < 18.5 :
    print("The result is Underweight")
elif 18.5 < bmi < 24.9:
    print("The result is Normal Weight")
elif 25.0 < bmi < 29.9:
    print("The result is Overweight")
elif 30 < bmi < 34.9 :
    print("The result is Obesity (I)")
elif 35 < bmi < 39.9 :
    print("The result is Obesity (II)")
elif bmi > 40 :
    print("The result is Obesity (III)")