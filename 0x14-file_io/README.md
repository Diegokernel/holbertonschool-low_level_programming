## 0x14. C - File I/O

### Description
Learning how to use file descriptors and system call functions `open`, `close`, `read`, `write`.

### Concepts Learned
At the end of this project you are expected to be able to explain to anyone, without the help of Google:

- Look for the right source of information online
- How to create, open, close, read and write files
- What are file descriptors
- What are the 3 standard file descriptors, what are their purpose and what are their `POSIX names
- How to use the I/O system calls `open`, `close`, `read` and `write`
- What are and how to use the flags `O_RDONLY`, `O_WRONLY`, `O_RDWR`
- What are file permissions, and how to set them when creating a file with the open system call
- What is a system call
- What is the difference between a function and a system call

### Man Page References
- man 2 open
- man 2 close
- man 2 read
- man 2 write
- man 3 dprintf

### File Content
This repository contains the following files:

| File | Description |
| :--- | :--- |
| 0-read_textfile.c | Reads a text file and prints it the the `POSIX` standard output |
| 1-create_file.c | Creates a new file. |
| 2-append_text_to_file.c | Appends text to end of file. |
| 3-cp.c | Copies content from one file to another file |
| holberton.h | Contains headers and functions |

### Author
Diego Castellanos
