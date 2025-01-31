# Simple Shell

## Overview
The **Simple Shell** project is a UNIX command-line interpreter built in C. It is designed to mimic the basic functionality of the standard shell (`sh`) while demonstrating an in-depth understanding of process creation, execution, and environment manipulation using system calls. The shell was developed as part of the ALX Software Engineering program in collaboration with **Ahmed ELSHARKWAY** and **Wisdom Honest**.

## Features
- Displays a command prompt and waits for user input.
- Executes commands with and without arguments.
- Supports interactive and non-interactive modes.
- Implements essential built-in commands such as `exit` and `env`.
- Searches for executables in the `PATH` environment variable.
- Proper error handling for command execution failures.
- Efficient memory management with no memory leaks.

## Installation
To install and run **Simple Shell**, follow these steps:

### Prerequisites
- Ubuntu 20.04 LTS (or any Linux distribution)
- GCC compiler
- Git

### Steps
1. Clone the repository on your linux terminal:
   ```sh

   git clone https://github.com/wishon1/simple_shell.git
   ```
2. Navigate to the project directory:
   ```sh
   cd simple_shell
   ```
3. Compile the source code:
   ```sh
   gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
   ```

## Usage
### Interactive Mode
Run the shell and type commands interactively:
```sh
./hsh
$ ls -l
$ pwd
$ exit
```

### Non-Interactive Mode
Execute commands from a file or another command:
```sh
echo "/bin/ls" | ./hsh
cat script.sh | ./hsh
```

## Built-in Commands
- `exit` - Exits the shell.
- `env` - Prints the current environment variables.

## System Calls Used
The following system calls are used in **Simple Shell**:
- `fork()`, `execve()`, `wait()`, `access()`
- `open()`, `read()`, `write()`, `close()`
- `malloc()`, `free()`, `getline()`
- `isatty()`, `perror()`, `strtok()`

## Coding Style
The project follows the **Betty coding style** and adheres to best practices for readability and maintainability.

## Contributors
- **Ahmed ELSHARKWAY**
- **Wisdom Honest**

## License
This project is released under the MIT License.

## Acknowledgments
Special thanks to the ALX Software Engineering program for providing guidance and inspiration for this project.


