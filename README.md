🎯 Number Guessing Game in C

A simple terminal-based number guessing game built using the C programming language.
The program randomly generates a number between 1 and 10, and the player must guess it.
After each guess, the game provides hints — whether the guessed number is too high or too low — until the correct number is found.

🧩 Features

Random number generation using rand() and time()

Interactive gameplay through user input

Feedback after each guess

Tracks the total number of attempts

Beginner-friendly C program demonstrating:

Loops (while)

Conditional statements (if-else)

Random number generation

Standard I/O handling

🖥️ How to Run
1. Clone the Repository
git clone https://github.com/<your-username>/<your-repo-name>.git
cd <your-repo-name>

2. Compile the Code

Use a C compiler like GCC:

gcc guess.c -o guess

3. Run the Game
./guess

🎮 Example Gameplay
Welcome to the Guessing Game!

Guess a number between 1 and 10: 5
Too low! Try again with higher number: 8
Too high! Try again with lower number: 7
Congratulations!!
You guessed the number (7) in 3 attempts...
<----Thanks for playing---->

🧠 Concepts Used

rand() and srand() for random number generation

time(NULL) to seed the random generator

Input handling with scanf()

Conditional logic for comparisons

Loops for repeated guessing
