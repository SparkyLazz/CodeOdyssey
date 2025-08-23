# 🖥️ Very Basic C Project: Introduce Yourself

This is a simple beginner-level **C program** that introduces basic **user input** concepts using `scanf` and `printf`.  
It simulates a small "introduction form" where the user provides their **name**, **age**, and **height**, and the program summarizes the information back.

---

## 📌 What You Will Learn
- How to use `printf` to display messages to the console.
- How to use `scanf` to get user input.
- How to handle different types of input (`string`, `int`).
- How to display structured output.

---

## 📂 Project Structure
```
introduce-yourself.c   // Main C program
README.md              // Project documentation
```

---

## ▶️ Example Run

```
[-] Welcome to the most lowest level programming language
[-] Can i have your Name : Rui
[-] Rui , What a nice name
[-] How old are you Rui : 18
[-] 18 Year's old? That's impressive
[-] How tall are you : 180
[-] That's insane! Im so envy with you
======================================
Let's Summary your Data
Name   : Rui
Age    : 18 Year's Old
Height : 180 Cm
======================================
```

---

## ⚙️ How to Run

1. **Compile the program** using GCC or Clang:
   ```bash
   gcc introduce-yourself.c -o introduce
   ```

2. **Run the executable**:
   ```bash
   ./introduce
   ```

---

## 📚 Notes
- `%49s` is used to prevent buffer overflow when entering the name.
- `scanf("%d", &age);` is used for integers like age and height.
- The program ends by printing a **summary** of the user data.

---

## 🚀 Future Improvements
- Add **error handling** for invalid input (e.g., letters instead of numbers).
- Allow **full names with spaces** (using `fgets` instead of `scanf("%s")`).
- Add **gender input** (M/F).
- Store data in a **struct** for cleaner design.
