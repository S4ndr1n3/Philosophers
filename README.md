# Philosophers
![C](https://img.shields.io/badge/language-C-blue)
![Threads](https://img.shields.io/badge/technology-Threads-red)
![Mutex](https://img.shields.io/badge/technology-Mutex-yellow)
![42School](https://img.shields.io/badge/school-42-orange)

## Introduction
This project introduces the concepts of concurrent programming, threading, and synchronization using mutexes through the classic dining philosophers problem.

### 🧠 What is the Philosophers Problem?
The dining philosophers problem is a classic synchronization problem used to illustrate the challenges of resource sharing among multiple processes. It involves philosophers who alternately eat, think, and sleep but need two forks to eat. With only as many forks as philosophers, this problem simulates real-world issues like deadlock and resource contention.

### 💡 Why This Project?
This project will teach you the basics of threading, creating processes, and managing synchronization using mutexes. By simulating the dining philosophers problem, you'll gain practical experience in avoiding common pitfalls in concurrent programming, such as deadlocks, race conditions, and starvation.

### 🎓 Key Learning Outcomes
- **Thread Management**: Learn how to create and manage threads using the pthread library.
- **Mutexes**: Understand how to use mutexes to protect shared resources and ensure synchronized access.
- **Concurrency**: Develop skills to handle concurrent execution and resource sharing efficiently.
- **Problem Solving**: Apply theoretical knowledge to solve practical synchronization problems.

## Project Overview
- **Philosophers at a Round Table**: One or more philosophers sit at a round table with a large bowl of spaghetti.
- **Activities**: Philosophers alternately eat, think, or sleep. They need two forks to eat, one in each hand. After eating, they put the forks back and start sleeping. Upon waking, they begin thinking.
- **Objective**: Prevent philosophers from starving while they eat, think, and sleep.

## Common Instructions
- Your project must be written in C and adhere to the 42 Norm.
- Handle all heap-allocated memory properly to avoid leaks.
- Provide a Makefile with the rules: `$(NAME)`, `all`, `clean`, `fclean`, and `re`.
- Global variables are forbidden.
- Programs should not quit unexpectedly and must manage errors gracefully.

## Program Arguments
Your program should take the following arguments:
1. `number_of_philosophers`: Number of philosophers and forks.
2. `time_to_die`: Time in milliseconds a philosopher can go without eating before dying.
3. `time_to_eat`: Time in milliseconds a philosopher spends eating.
4. `time_to_sleep`: Time in milliseconds a philosopher spends sleeping.
5. `number_of_times_each_philosopher_must_eat` (optional): If all philosophers have eaten at least this many times, the simulation stops.

## Log Format
State changes of philosophers must be logged as follows:
- `timestamp_in_ms X has taken a fork`
- `timestamp_in_ms X is eating`
- `timestamp_in_ms X is sleeping`
- `timestamp_in_ms X is thinking`
- `timestamp_in_ms X died`

## Mandatory Part
- **Program Name**: `philo`
- **Files**: Makefile, `*.h`, `*.c` in the `philo/` directory
- **Functions**: Use `memset`, `printf`, `malloc`, `free`, `write`, `usleep`, `gettimeofday`, `pthread_create`, `pthread_detach`, `pthread_join`, `pthread_mutex_init`, `pthread_mutex_destroy`, `pthread_mutex_lock`, and `pthread_mutex_unlock`.
- **Description**: Implement philosophers with threads and mutexes.

### Compilation and Execution
1. Clone the repository:
    ```sh
    git clone https://github.com/S4ndr1n3/philosophers.git
    cd philosophers/philo
    ```
2. Compile the project:
    ```sh
    make
    ```
3. Run the program:
    ```sh
    ./philo <number_of_philosophers> <time_to_die> <time_to_eat> <time_to_sleep> [number_of_times_each_philosopher_must_eat]
    ```
    Example:
    ```sh
    ./philo 5 800 200 200 3
    ```

## Key Concepts
- **Threads and Mutexes**: Use pthreads and mutexes to manage concurrent access to shared resources.
- **Processes and Semaphores**: Manage synchronization and communication between processes using semaphores.

## Additional Resources
- [Parallel Computing](https://computing.llnl.gov/tutorials/parallel_comp/)
- [POSIX Threads](https://computing.llnl.gov/tutorials/pthreads/)
- [Dining Philosophers Problem](https://en.wikipedia.org/wiki/Dining_philosophers_problem)
