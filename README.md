# C-Command-Line-Calculator

A simple command-line calculator written in C. It performs basic arithmetic on decimal numbers and lets you run multiple calculations in one session.

## Features

- Addition, subtraction, multiplication, and division
- Supports decimal numbers
- Checks for invalid input and unsupported operators
- Prevents division by zero
- Repeats calculations until you choose to stop

## Requirements

A C compiler, such as GCC or Clang.

## Build

Save `calculator.c` in your repository, then compile it with GCC:

```bash
gcc calculator.c -o calculator
```

On Windows with MinGW GCC, use:

```bash
gcc calculator.c -o calculator.exe
```

## Run

On macOS or Linux:

```bash
./calculator
```

On Windows:

```powershell
.\calculator.exe
```

## Usage

Enter a calculation using a number, an operator (`+`, `-`, `*`, or `/`), and another number:

```text
12.5 + 4
```

After the result appears, enter `yes` to calculate again or `stop` to quit. The program also accepts `Yes` and `Stop`.

## Example

```text
Enter the calculation (for example, 12.5 + 4): 12.5 + 4
RESULT: 16.50
Do you want to do more calculations? Enter 'yes' to continue or 'stop' to quit: stop
```
