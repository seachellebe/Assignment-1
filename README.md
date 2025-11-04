**Lab 1 – Exploring Relational Operators**
Objective: Understand how relational operators work in C++ and how they evaluate Boolean expressions.

Instructions:
1. Create a C++ file named RelationalOperators.cpp.
2. Declare integer variables a = 5, b = 10, and c = 5.
3. Test the following expressions and display the results using cout:
    ○ a == b
    ○ a != c
    ○ a < b
    ○ b > c
    ○ (a + c) <= b
4. Add an example using character comparison ('A' < 'a') and explain why.

Guide Questions:
- What data types can be compared using relational operators?
- How does ASCII value affect character comparisons?
- Why does C++ return 1 for true and 0 for false?



**Lab 2 – One-Way Selection (if Statement)**
Objective: Apply the if statement to execute code based on a single condition.

Instructions:
1. Create IfStatementDemo.cpp.
2. Ask the user to input a number.
3. Display a message only if the number is positive.

Guide Questions:
- What happens if the input is 0 or negative?
- How does the program decide whether to execute the statement?



**Lab 3 – Two-Way Selection (if...else Statement)**
Objective: Use the if…else statement to choose between two alternatives.

Instructions:
1. Create IfElseGrade.cpp.
2. Ask for a student’s grade (0–100).
3. Display “Pass” if the grade is ≥ 75, otherwise “Fail.”

Guide Questions:
- What happens if you remove the else part?
- Can you nest another if inside this structure?



**Lab 4 – Compound Statements**
Objective: Learn to group multiple statements into one logical block.

Instructions:
1. Modify Lab 3 so that if the student passes, it displays:
    ○ “Congratulations!”
    ○ “Keep up the good work.”
2. Use braces {} to create a block of statements.

Guide Questions:
- What error occurs if braces are omitted?
- Why are compound statements useful in decision-making?



**Lab 5 – Nested if Statements**
Objective: Implement multiple selections using nested if statements.

Instructions:
1. Create NestedIfGrade.cpp.
2. Ask for a student’s grade and display the equivalent remark:
    ○ 90–100 → Excellent
    ○ 80–89 → Very Good
    ○ 75–79 → Satisfactory
    ○ Below 75 → Fail

Guide Questions:
- How does nesting differ from a simple if-else chain?
- What’s the advantage of using nested conditions?



**Lab 6 – Switch Structure**
Objective: Use the switch statement to handle multiple alternatives cleanly.

Instructions:
1. Create SwitchMenu.cpp.
    Display a simple menu:
    1. Compute Area of Circle
    2. Compute Area of Rectangle
    3. Exit
2. Based on user choice, perform the corresponding calculation.

Guide Questions:
- What happens if you omit a break statement?
- When would you prefer a switch over nested ifs?



**Lab 7 – Combined Practice**
Objective: Integrate all control structures in a single program.

Instructions:
1. Create DecisionPractice.cpp.
2. Ask the user to enter a grade (0–100) and a course code (1–3).
3. Use if, else if, and switch to:
    ○ Determine the student’s remark (Pass/Fail).
    ○ Display the course name based on the code entered.
