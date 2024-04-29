# HackThebox-Kernel-Adventures-Part-1
# Group-10 : Csce-5552

# Introduction:
This repository contains the materials and documentation for completing Kernel Adventures Part-1. The main objective of this project is to gain a deep understanding of kernel exploitation and its implications. Through this exercise, participants will interact with a vulnerable kernel module ('mysu.ko') and learn various aspects of system exploration, administration, file system manipulation, network operations, security auditing, ethical hacking, and penetration testing.

# Contents:
exploit_program/: Contains the exploit program designed to take advantage of the vulnerabilities present in the vulnerable kernel module.
vulnerable_kernel_module/: Contains the vulnerable kernel module ('mysu.ko') implementing a character device interface with 'dev_write' and 'dev_read' functions.
README.md: This file, providing an overview of the project and instructions for setup and execution.
Setup Instructions:
Environment Setup:
Install QEMU (Quick EMUlator) to create a virtualized environment for analyzing and exploiting kernel vulnerabilities.
Extract the Linux file system.
Reverse Engineering:
Analyze the mysu.ko module using tools like Ghidra to identify vulnerabilities and potential exploits.
Exploit Development:
Run the provided exploit script (run.sh) to exploit the identified vulnerability.
Connecting to Remote Instance:
Verify permissions and tools required for connecting to the remote instance.
Password Hash Cracking:
Obtain the expected hash from notes.txt.
Use hashing functions to find a valid password.
Race Condition Exploitation:
Exploit a Double Fetch using multiple threads to rapidly change UID and escalate privileges.
