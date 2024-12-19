# Day 3: Student Report Card Generator

## **Concepts**
- Structs
- Functions
- Arrays

---

## **Objective**
Create a program to generate a report card for multiple students. The program will:
- Store student details using a `struct`.
- Calculate the average grade for each student.
- Display all details in a well-formatted report card.

---

## **Step-by-Step Guide**

### **1. Define the `Student` Struct**
The `Student` struct will store the following attributes for each student:
- **Name**: A character array to store the student's name.
- **Grades**: An array to store multiple grades.
- **Average**: A floating-point number to store the average grade.

#### **Example Code:**
```c
struct Student {
    char name[50]; // Character array to store name
    float grades[4]; // Array to store grades (size 4 as an example)
    float average;   // To store the average of grades
};
```

---

### **2. Create an Array of Students**
Use an array of `Student` structs to handle multiple students. For example, an array of size 3 can store details for three students.

#### **Example Code:**
```c
struct Student students[3]; // Array to store 3 students
```

---

### **3. Write a Function to Calculate the Average Grade**
The function should:
1. Take an array of grades as input.
2. Iterate over the grades to calculate the sum.
3. Return the average by dividing the sum by the total number of grades.

#### **Example Code:**
```c
float calculateAverage(float grades[4]) {
    float sum = 0;
    for (int i = 0; i < 4; i++) {
        sum += grades[i];
    }
    return sum / 4; // Return the calculated average
}
```

---

### **4. Write a Function to Display the Report Card**
The function should:
1. Loop through the array of `Student` structs.
2. Display the name, grades, and average for each student in a neat format.

#### **Example Code:**
```c
void displayReportCard(struct Student students[3]) {
    for (int i = 0; i < 3; i++) {
        printf("Student Name: %s\n", students[i].name);
        printf("Grades: ");
        for (int j = 0; j < 4; j++) {
            printf("%.2f ", students[i].grades[j]);
        }
        printf("\nAverage Grade: %.2f\n", students[i].average);
        printf("--------------------------\n");
    }
}
```

---

### **5. Implement the `main` Function**
1. Declare the `Student` array.
2. Input data for each student (name and grades).
3. Calculate the average for each student using `calculateAverage`.
4. Call `displayReportCard` to show the report.

#### **Example Code:**
```c
#include <stdio.h>

// Function declarations
float calculateAverage(float grades[4]);
void displayReportCard(struct Student students[3]);

int main() {
    struct Student students[3];

    // Input data for each student
    for (int i = 0; i < 3; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter 4 grades for %s: ", students[i].name);
        for (int j = 0; j < 4; j++) {
            scanf("%f", &students[i].grades[j]);
        }

        // Calculate average
        students[i].average = calculateAverage(students[i].grades);
    }

    // Display report card
    displayReportCard(students);

    return 0;
}

float calculateAverage(float grades[4]) {
    float sum = 0;
    for (int i = 0; i < 4; i++) {
        sum += grades[i];
    }
    return sum / 4;
}

void displayReportCard(struct Student students[3]) {
    for (int i = 0; i < 3; i++) {
        printf("Student Name: %s\n", students[i].name);
        printf("Grades: ");
        for (int j = 0; j < 4; j++) {
            printf("%.2f ", students[i].grades[j]);
        }
        printf("\nAverage Grade: %.2f\n", students[i].average);
        printf("--------------------------\n");
    }
}
```

---

## **Checklist for Implementation**
- [ ] Define the `Student` struct.
- [ ] Create an array of `Student` structs.
- [ ] Write the `calculateAverage` function.
- [ ] Write the `displayReportCard` function.
- [ ] Input data for multiple students in the `main` function.
- [ ] Call the functions to calculate and display the report card.

---

## **Common Mistakes to Avoid**
1. **Incorrect Array Initialization:** Ensure the grades are assigned properly (individually or using a loop).
2. **Function Usage Errors:** Declare the functions before using them in `main`.
3. **Hardcoding Array Sizes:** Use constants for grades array size to make the code scalable.
4. **Improper Formatting:** Ensure the output is clear and neatly formatted.

---

## **Sample Output**
### **Input:**
```
Enter name for student 1: Alice
Enter 4 grades for Alice: 80 85 90 95
Enter name for student 2: Bob
Enter 4 grades for Bob: 70 75 80 85
Enter name for student 3: Charlie
Enter 4 grades for Charlie: 60 65 70 75
```

### **Output:**
```
Student Name: Alice
Grades: 80.00 85.00 90.00 95.00
Average Grade: 87.50
--------------------------
Student Name: Bob
Grades: 70.00 75.00 80.00 85.00
Average Grade: 77.50
--------------------------
Student Name: Charlie
Grades: 60.00 65.00 70.00 75.00
Average Grade: 67.50
--------------------------
```

