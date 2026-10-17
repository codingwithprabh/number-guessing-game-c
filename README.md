# 🎯 Number Guessing Game in C

A simple, interactive **Number Guessing Game** built using the C programming language. Choose a difficulty level, guess the randomly generated number, and see if you can find the correct answer within five attempts!

## 📌 About the Project

This is my first C programming project, created to practice fundamental programming concepts and improve my problem-solving skills.

The game generates a random number based on the selected difficulty level. The player enters guesses and receives hints indicating whether the guess is too high or too low.

## ✨ Features

- 🎮 Three difficulty levels: Easy, Normal, and Hard
- 🎲 Random number generation
- ❤️ Five attempts per round
- ⬆️ Hints when a guess is too high
- ⬇️ Hints when a guess is too low
- 🛡️ Input validation for invalid entries
- 🔁 Option to play multiple rounds
- 🏆 Displays the correct number when attempts run out

## 🎚️ Difficulty Levels

| Level | Number Range |
|---|---|
| Easy | 1–25 |
| Normal | 1–100 |
| Hard | 1–500 |

## 🛠️ Technologies Used

- **Language:** C
- **Header files:** `stdio.h`, `stdlib.h`, `time.h`
- **Concepts:** Loops, conditional statements, functions from the C standard library, random number generation, and input validation

## 🚀 Getting Started

### 1. Clone the repository

```bash
git clone https://github.com/codingwithprabh/number-guessing-game-c.git
```

### 2. Open the project directory

```bash
cd number-guessing-game-c
```

### 3. Compile the program

Make sure you have a C compiler such as GCC installed.

```bash
gcc number_guessing_game.c -o number_guessing_game
```

### 4. Run the game

**Linux / macOS:**

```bash
./number_guessing_game
```

**Windows:**

```bash
number_guessing_game.exe
```

On Windows, run the executable from the directory where it was compiled.

## 🎮 How to Play

1. Start the program.
2. Select a difficulty level from 1 to 3.
3. Enter your guess when prompted.
4. Follow the hints to narrow down the correct number.
5. Try to guess the number within five valid incorrect guesses.
6. Choose `y` to play again or `n` to exit.

## 📚 What I Learned

While building this project, I practiced:

- Using `if`, `else if`, and `else` conditions
- Implementing `while` and `do-while` loops
- Generating random numbers with `rand()` and `srand()`
- Validating user input using `scanf()` and `getchar()`
- Managing attempts and game state
- Writing a program that handles repeated rounds

## 🔮 Future Improvements

- Add a scoring system
- Add difficulty-based attempt limits
- Track the number of games won
- Improve the user interface
- Add a high-score system

## 👨‍💻 Author

**Prabhjot** — B.Tech CSE student interested in programming, problem-solving, and AI/ML.

- GitHub: [@codingwithprabh](https://github.com/codingwithprabh)

---

⭐ If you find this project interesting, feel free to explore the code and share feedback!

**Learn. Build. Improve. Repeat.**
