# sendsignal

->how to use :

$./a.out "pid" "signal"

->example :

$./a.out "4342" "9"

->hint :

you must put the number of the signal

Here's a table listing all the signals in C (as defined in <signal.h>)

| Signal Name   | Signal ID | Description                                   |
|_______________|___________|_______________________________________________|
| SIGHUP        | 1         | Hangup detected on controlling terminal.     |
| SIGINT        | 2         | Interrupt from keyboard (Ctrl+C).            |
| SIGQUIT       | 3         | Quit from keyboard (Ctrl+\).                 |
| SIGILL        | 4         | Illegal Instruction.                         |
| SIGTRAP       | 5         | Trace/breakpoint trap.                       |
| SIGABRT       | 6         | Abort signal from abort().                   |
| SIGBUS        | 7         | Bus error (bad memory access).               |
| SIGFPE        | 8         | Floating-point exception.                    |
| SIGKILL       | 9         | Kill signal (cannot be caught or ignored).   |
| SIGUSR1       | 10        | User-defined signal 1.                       |
| SIGSEGV       | 11        | Invalid memory reference (segmentation fault).|
| SIGUSR2       | 12        | User-defined signal 2.                       |
| SIGPIPE       | 13        | Broken pipe: write to pipe with no readers.  |
| SIGALRM       | 14        | Timer signal from alarm().                   |
| SIGTERM       | 15        | Termination signal.                          |
| SIGSTKFLT     | 16        | Stack fault on coprocessor (unused).         |
| SIGCHLD       | 17        | Child process stopped or terminated.         |
| SIGCONT       | 18        | Continue if stopped.                         |
| SIGSTOP       | 19        | Stop process (cannot be caught or ignored).  |
| SIGTSTP       | 20        | Stop typed at terminal (Ctrl+Z).             |
| SIGTTIN       | 21        | Background process attempting read.          |
| SIGTTOU       | 22        | Background process attempting write.         |
| SIGURG        | 23        | Urgent condition on socket.                  |
| SIGXCPU       | 24        | CPU time limit exceeded.                     |
| SIGXFSZ       | 25        | File size limit exceeded.                    |
| SIGVTALRM     | 26        | Virtual timer expired.                       |
| SIGPROF       | 27        | Profiling timer expired.                     |
| SIGWINCH      | 28        | Window resize signal.                        |
| SIGIO         | 29        | I/O now possible.                            |
| SIGPWR        | 30        | Power failure (System V).                    |
| SIGSYS        | 31        | Bad system call.                             |

