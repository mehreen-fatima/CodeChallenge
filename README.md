# 30-Day C/C++ Coding Challenge: From Beginner to Advanced

| **Day** | **Challenge**                                | **Concepts Covered**                              |
|---------|---------------------------------------------|--------------------------------------------------|
| **Day 1**  | **Basic Calculator**                       | Input/Output, Functions, Switch-Case             |
| **Day 2**  | **Number Guessing Game**                   | Loops, Conditionals, Random Number Generation    |
| **Day 3**  | **Student Report Card Generator**          | Structs, Functions, Arrays                       |
| **Day 4**  | **Bank Account Manager (Simple)**          | Classes, Objects, Encapsulation                  |
| **Day 5**  | **Library Book System**                    | Classes, Constructor, Arrays                     |
| **Day 6**  | **Zoo Management System**                  | Inheritance, Polymorphism, Virtual Functions     |
| **Day 7**  | **Simple To-Do List App**                  | Vectors, Functions, Classes                      |
| **Day 8**  | **Shapes Area Calculator**                 | Polymorphism, Abstract Classes, Function Override|
| **Day 9**  | **Inventory Management System**            | Classes, Arrays, Functions                       |
| **Day 10** | **Employee Management System**             | Classes, Constructor/Destructor, Vectors         |
| **Day 11** | **Advanced Bank System with Transactions** | Inheritance, Encapsulation, Dynamic Memory       |
| **Day 12** | **Car Dealership Simulation**              | Multiple Classes, Interaction Between Objects    |
| **Day 13** | **Online Shopping Cart**                   | Arrays/Vectors, Classes, Functions               |
| **Day 14** | **Mini Quiz App**                          | Input Validation, Classes, Loops                 |
| **Day 15** | **Movie Ticket Booking System**            | Classes, File I/O, Functions                     |
| **Day 16** | **Simple ATM Simulation**                  | Classes, Encapsulation, Menus                    |
| **Day 17** | **Hotel Room Booking System**              | Classes, Vectors, Constructor, Destructor        |
| **Day 18** | **Advanced To-Do List App**                | File I/O, Dynamic Memory, Classes                |
| **Day 19** | **Snake Game (Console)**                   | Loops, Arrays, Basic Game Logic                  |
| **Day 20** | **Battleship Game**                        | 2D Arrays, Loops, Random Numbers                 |
| **Day 21** | **Online Quiz System with Scores**         | Classes, Inheritance, File I/O                   |
| **Day 22** | **Student Management System (File-Based)** | File I/O, Classes, Vectors                       |
| **Day 23** | **Simple Weather App (Mock Data)**         | Structs, File Input, Parsing                     |
| **Day 24** | **File Encryption/Decryption Tool**        | File Handling, Loops, String Manipulation        |
| **Day 25** | **Task Scheduler (Time-Based)**            | Time Functions, Classes, File I/O                |
| **Day 26** | **Text-Based RPG Game**                    | Classes, Inheritance, Game Loops                 |
| **Day 27** | **Tic-Tac-Toe (2 Player)**                 | 2D Arrays, Loops, Conditionals                   |
| **Day 28** | **Simple Chatbot Simulation**              | Functions, String Matching                       |
| **Day 29** | **Car Racing Game (Console)**              | Loops, Classes, Randomization                    |
| **Day 30** | **E-Library System (Final Project)**       | Full OOP: Classes, File I/O, Inheritance, Menus  |

---

# 30-Day C++ Coding Challenge: Detailed Instructions

---

## **Day 1: Basic Calculator**
**Concepts**: Input/Output, Functions, Switch-Case  
### **Steps**:  
1. Create a menu to display operations (`+`, `-`, `*`, `/`).  
2. Take two numbers as input from the user.  
3. Use a `switch-case` statement to select and perform the operation.  
4. Display the result.  
5. Add error handling for division by zero.

---

## **Day 2: Number Guessing Game**
**Concepts**: Loops, Conditionals, Random Number Generation  
### **Steps**:  
1. Use `srand` and `rand` to generate a random number between 0 and 100.  
2. Ask the user to guess the number.  
3. Use a loop to allow repeated guesses until the user gets it right.  
4. Provide feedback ("Too high" or "Too low") for each guess.  
5. End the game if the user guesses correctly or after 5 attempts.

---

## **Day 3: Student Report Card Generator**
**Concepts**: Structs, Functions, Arrays  
### **Steps**:  
1. Create a `struct` named `Student` with attributes like `name`, `grades`, and `average`.  
2. Use an array to store details of multiple students.  
3. Write a function to calculate the average grade for each student.  
4. Write another function to display the report card with all details.  

---

## **Day 4: Bank Account Manager (Simple)**
**Concepts**: Classes, Objects, Encapsulation  
### **Steps**:  
1. Create a `BankAccount` class with attributes:  
   - `accountNumber`  
   - `balance`  
2. Implement methods for deposit, withdrawal, and balance inquiry.  
3. Use a menu to interact with the user and call the appropriate methods.  

---

## **Day 5: Library Book System**
**Concepts**: Classes, Constructor, Arrays  
### **Steps**:  
1. Create a `Book` class with attributes:  
   - `title`, `author`, `ISBN`  
2. Use an array to store multiple books.  
3. Write methods to add, view, and search books.  
4. Use constructors to initialize book details.  

---

## **Day 6: Zoo Management System**
**Concepts**: Inheritance, Polymorphism, Virtual Functions  
### **Steps**:  
1. Create a base `Animal` class with methods like `eat()` and `makeSound()`.  
2. Derive specific classes (e.g., `Lion`, `Bird`) and override `makeSound()`.  
3. Use polymorphism to create a list of animals and simulate their behavior.  

---

## **Day 7: Simple To-Do List App**
**Concepts**: Vectors, Functions, Classes  
### **Steps**:  
1. Create a `Task` class with attributes:  
   - `description`, `status`  
2. Use a vector to store a dynamic list of tasks.  
3. Implement methods to add, mark as complete, and view tasks.  

---

## **Day 8: Shapes Area Calculator**
**Concepts**: Polymorphism, Abstract Classes, Function Override  
### **Steps**:  
1. Create an abstract base class `Shape` with a pure virtual method `area()`.  
2. Derive classes like `Circle` and `Rectangle`, overriding the `area()` method.  
3. Use polymorphism to calculate areas dynamically.  

---

## **Day 9: Inventory Management System**
**Concepts**: Classes, Arrays, Functions  
### **Steps**:  
1. Create an `Item` class with attributes:  
   - `name`, `price`, `quantity`  
2. Use an array to store multiple items.  
3. Write methods to add, update, and display items.  

---

## **Day 10: Employee Management System**
**Concepts**: Classes, Constructor/Destructor, Vectors  
### **Steps**:  
1. Create an `Employee` class with attributes like:  
   - `name`, `ID`, `position`  
2. Use a vector to manage employees dynamically.  
3. Write methods to add, view, and delete employees.  

---

## **Day 11: Advanced Bank System with Transactions**
**Concepts**: Inheritance, Encapsulation, Dynamic Memory  
### **Steps**:  
1. Extend the `BankAccount` class to include `TransactionHistory`.  
2. Implement features like tracking deposits and withdrawals.  
3. Use dynamic memory to store transaction details.  

---

## **Day 12: Car Dealership Simulation**
**Concepts**: Multiple Classes, Interaction Between Objects  
### **Steps**:  
1. Create classes like `Car`, `Customer`, and `Dealer`.  
2. Implement methods for buying and selling cars.  
3. Simulate the interaction between customers and the dealer.  

---

## **Day 13: Online Shopping Cart**
**Concepts**: Arrays/Vectors, Classes, Functions  
### **Steps**:  
1. Create an `Item` class to represent products.  
2. Use a vector to store items in the cart.  
3. Implement methods to add/remove items and calculate the total.  

---

## **Day 14: Mini Quiz App**
**Concepts**: Input Validation, Classes, Loops  
### **Steps**:  
1. Create a `Question` class with attributes like `questionText` and `answer`.  
2. Use a loop to display questions and validate user input.  
3. Track the user’s score and display it at the end.  

---

## **Day 15: Movie Ticket Booking System**
**Concepts**: Classes, File I/O, Functions  
### **Steps**:  
1. Create a `Movie` class with attributes:  
   - `title`, `showTime`, `price`, `seatsAvailable`  
2. Write methods to book a ticket, view movie details, and display available seats.  
3. Use file I/O to save and retrieve movie information persistently.  

---

## **Day 16: Simple ATM Simulation**
**Concepts**: Classes, Encapsulation, Menus  
### **Steps**:  
1. Create a `BankAccount` class with attributes:  
   - `accountNumber`, `balance`  
2. Implement methods for deposit, withdrawal, and balance inquiry.  
3. Use a menu to allow user interaction.  
4. Add basic error handling (e.g., insufficient balance for withdrawal).  

---

## **Day 17: Hotel Room Booking System**
**Concepts**: Classes, Vectors, Constructor, Destructor  
### **Steps**:  
1. Create a `Room` class with attributes:  
   - `roomNumber`, `type`, `price`, `isAvailable`  
2. Use a vector to store available rooms.  
3. Write methods to book a room, check availability, and cancel bookings.  

---

## **Day 18: Advanced To-Do List App**
**Concepts**: File I/O, Dynamic Memory, Classes  
### **Steps**:  
1. Extend the `Task` class to include deadlines and priorities.  
2. Use file I/O to save and load tasks persistently.  
3. Implement methods to filter tasks by status or priority.  

---

## **Day 19: Snake Game (Console)**
**Concepts**: Loops, Arrays, Basic Game Logic  
### **Steps**:  
1. Use a 2D array to represent the game board.  
2. Implement the snake’s movement using a loop and update its position in the array.  
3. Add collision detection (e.g., hitting walls or itself).  
4. Introduce a point system for eating food.  

---

## **Day 20: Battleship Game**
**Concepts**: 2D Arrays, Loops, Random Numbers  
### **Steps**:  
1. Use two 2D arrays for player and computer boards.  
2. Randomly place ships on the computer's board.  
3. Allow the player to guess coordinates to "hit" ships.  
4. Add feedback for hits and misses, and display the updated board after each turn.  

---

## **Day 21: Online Quiz System with Scores**
**Concepts**: Classes, Inheritance, File I/O  
### **Steps**:  
1. Create a base `Quiz` class with methods to load questions and calculate scores.  
2. Derive specialized classes for different quiz topics.  
3. Use file I/O to load questions and save user scores.  

---

## **Day 22: Student Management System (File-Based)**
**Concepts**: File I/O, Classes, Vectors  
### **Steps**:  
1. Create a `Student` class with attributes like `name`, `rollNumber`, `marks`.  
2. Write methods to add, update, and delete student records.  
3. Use file I/O to save and retrieve records.  

---

## **Day 23: Simple Weather App (Mock Data)**
**Concepts**: Structs, File Input, Parsing  
### **Steps**:  
1. Create a `Weather` struct with attributes like `date`, `temperature`, `condition`.  
2. Store mock weather data in a file.  
3. Write functions to parse the file and display the weather for a specific day.  

---

## **Day 24: File Encryption/Decryption Tool**
**Concepts**: File Handling, Loops, String Manipulation  
### **Steps**:  
1. Create a program to read text from a file.  
2. Apply a basic encryption algorithm (e.g., Caesar cipher).  
3. Save the encrypted text to another file.  
4. Implement a decryption function to restore the original text.  

---

## **Day 25: Task Scheduler (Time-Based)**
**Concepts**: Time Functions, Classes, File I/O  
### **Steps**:  
1. Create a `Task` class with attributes like `description` and `dueTime`.  
2. Use time functions (`<ctime>`) to schedule tasks.  
3. Display alerts for overdue tasks.  

---

## **Day 26: Text-Based RPG Game**
**Concepts**: Classes, Inheritance, Game Loops  
### **Steps**:  
1. Create base classes for `Player` and `Enemy` with attributes like `health`, `attack`.  
2. Add methods for attacking and defending.  
3. Implement a game loop to simulate battles.  
4. Introduce levels and rewards for defeating enemies.  

---

## **Day 27: Tic-Tac-Toe (2 Player)**
**Concepts**: 2D Arrays, Loops, Conditionals  
### **Steps**:  
1. Use a 2D array to represent the game board.  
2. Allow two players to take turns marking cells (`X` and `O`).  
3. Add logic to check for a win or a draw after each move.  
4. Display the final result.  

---

## **Day 28: Simple Chatbot Simulation**
**Concepts**: Functions, String Matching  
### **Steps**:  
1. Create a program that responds to user inputs based on keywords.  
2. Use a series of `if-else` or string matching functions to simulate conversation.  
3. Add some predefined responses for common inputs.  

---

## **Day 29: Car Racing Game (Console)**
**Concepts**: Loops, Classes, Randomization  
### **Steps**:  
1. Create a `Car` class with attributes like `speed`, `distance`.  
2. Use random numbers to vary car speeds during the race.  
3. Display the race progress dynamically in the console.  
4. Declare the winner based on the first car to cross a certain distance.  

---

## **Day 30: E-Library System (Final Project)**
**Concepts**: Full OOP: Classes, File I/O, Inheritance, Menus  
### **Steps**:  
1. Create classes like `Book` and `User`.  
2. Use file handling to save and load library data.  
3. Implement features:  
   - Adding books  
   - Borrowing/returning books  
   - Searching for books  
4. Use menus for user interaction.  
5. Apply inheritance to differentiate between user types (e.g., `Student` vs. `Librarian`).  

---

## Tips for Success
1. Start simple; focus on understanding each concept before advancing.  
2. Refactor your code to improve readability and efficiency.  
3. Test your code with various input scenarios.  
4. Document your journey for review and improvement later.  

---



