
# AnujOS

## About the Project

**AnujOS is a learning-focused operating system project developed to understand how operating systems work internally.**

The primary reason for developing AnujOS is to gain practical, hands-on knowledge of **Operating System concepts** instead of learning them only through theory. Through this project, I aim to explore how a computer starts, how the kernel works, how hardware and software interact, and how the fundamental components of an operating system are designed and implemented.

This project is part of my learning journey into **Operating Systems, low-level programming, system programming, and computer architecture**.

> **Note:** AnujOS is an educational project and is not intended to replace general-purpose operating systems such as Linux, Windows, or macOS.

---

## 📁 Project Structure

The AnujOS project is organized into different files and directories, with each component having a specific responsibility in the operating system development process.

```text
AnujOS/
│
├── boot/
│   └── boot.asm
│
├── kernel/
│   ├── kernel.c
│   └── kernel.h
│
├── linker.ld
├── Makefile
├── README.md
└── .gitignore
```

### `boot/`

This directory contains files related to the **booting process** of AnujOS.

The boot code is responsible for the initial startup process and helps transfer control to the operating system kernel.

* `boot.asm` — Contains low-level Assembly code used during the boot process.

---

### `kernel/`

This directory contains the main **kernel source code** of AnujOS.

The kernel is the core part of the operating system. It is responsible for controlling the basic operations of the OS and will eventually handle tasks such as memory management, hardware interaction, interrupts, processes, and system calls.

* `kernel.c` — Contains the main kernel implementation and the entry point for the kernel.
* `kernel.h` — Contains declarations, definitions, and functions used by the kernel.

---

### `linker.ld`

The **linker script** defines how different compiled parts of AnujOS are arranged in memory.

It tells the linker where different sections of the kernel, such as code and data, should be placed when creating the final kernel binary.

---

### `Makefile`

The `Makefile` automates the process of building AnujOS.

Instead of manually running multiple compilation and linking commands, the Makefile can be used to:

* Compile source code.
* Assemble Assembly files.
* Link object files.
* Generate the kernel or OS image.
* Clean previously generated build files.

This makes the development and testing process easier and more organized.

---

### `README.md`

This file contains the documentation for the AnujOS project.

It explains:

* Why AnujOS was created.
* What I implemented.
* What I learned from the project.
* The project structure.
* Future development goals.

---

### `.gitignore`

The `.gitignore` file tells Git which files and directories should not be uploaded to the GitHub repository.

This is generally used to exclude automatically generated files such as:

* Build files
* Object files
* Binary files
* Temporary files
* IDE or editor-specific files

---

## 🔄 Basic Working Flow

The basic flow of the project can be understood as:

```text
Computer Starts
      ↓
Boot Code
      ↓
Kernel is Loaded
      ↓
Kernel Starts Execution
      ↓
OS Initializes Basic Components
      ↓
AnujOS Starts Running
```

As AnujOS continues to develop, more directories and components can be added for features such as memory management, interrupt handling, device drivers, process management, file systems, and a basic shell.


## What I Did in This Project

In the AnujOS project, I worked on building the basic foundation of a small operating system from scratch.

The project involves understanding and implementing the different stages required to start and run a minimal operating system environment.

Through the development process, I explored concepts such as:

### 1. Boot Process

I learned about what happens when a computer starts and how control is eventually transferred to the operating system.

This helped me understand the early stages of system initialization and the role of the boot process in loading an operating system.

### 2. Kernel Development

I worked on the basic structure of the **AnujOS kernel**.

The kernel is the core component of an operating system and is responsible for managing communication between software and computer hardware.

Working on the kernel helped me understand the importance of low-level system programming.

### 3. Low-Level Programming

While developing AnujOS, I explored programming concepts that are closer to the hardware.

This helped me better understand:

* Memory
* CPU execution
* Hardware interaction
* System-level programming
* How programs run without depending on a complete existing operating system

### 4. Building and Compiling the OS

I learned how different source files of an operating system project are compiled and linked together to create a bootable system.

This gave me practical experience with the build process involved in low-level software development.

### 5. Testing and Debugging

I tested the operating system during development and debugged problems that occurred during compilation, linking, and execution.

This process helped improve my understanding of debugging low-level software and identifying issues that are different from normal application development.

---

## What I Learned

Developing AnujOS helped me gain a better understanding of several important concepts:

* Operating System fundamentals
* Kernel architecture
* Computer boot process
* Low-level programming
* System programming
* Memory concepts
* Hardware and software interaction
* Compilation and linking
* Debugging low-level programs
* Git and GitHub for version control

Most importantly, this project helped me understand that an operating system is built from multiple components that work together to manage the computer's hardware and provide an environment for programs to run.

---

## Project Goal

The long-term goal of **AnujOS** is to continue expanding it as I learn more about Operating Systems.

Possible future areas of exploration include:

* Keyboard input
* Screen/terminal output
* Interrupt handling
* Memory management
* Process management
* CPU scheduling
* File systems
* System calls
* Basic shell
* Hardware drivers

These features will be explored and implemented gradually as part of my learning journey.

---

## Project Status

🚧 **AnujOS is currently under development.**

This is an educational project, and new features will be added as I continue learning more about operating systems and low-level programming.

---

## Purpose

The purpose of AnujOS is not to create a production-ready operating system.

The purpose is to **learn how operating systems work by actually building one**.

This project represents my journey of moving from theoretical OS concepts to practical implementation and understanding what happens at the lowest levels of a computer system.

---

## Author

**Anuj Ghadge**

AnujOS — *Learning Operating Systems by Building One.*
