Source: "Operating Systems: Three Easy Pieces" by Andrea Arpaci-Dusseau & Remzi Arpaci-Dusseau
Description: This directory containing the code examples presented in OSTEP, potentially separate examples or experiments, and a README file that describes what each file does and how to execute them. 

/simple_example (Simple Example: Code That Loops and Prints)
  Execution:
    prompt> gcc -o cpu exe/cpu.cc -Wall
    prompt> ./exe/cpu A
    A
    A
    A
    A
    ^C
    prompt>

  Execution:
    prompt> gcc -o cpu exe/cpu.cc -Wall
    prompt> exe/cpu A & exe/cpu B 
    [1] 7536
    [2] 7534
    A
    B
    A
    B
    ^C
    prompt>
   
/access_memory (A Program that Accesses Memory)


