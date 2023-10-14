
Overview
Notes of how the 6502 CPU works


## Learning about the MOS-6502 CPU Arch
- 6502 is an 8-bit architecture, with an 8-bit accumulator register. Can access max of 64k bytes of random accessed memory.
- Memory addresses are exactly 16-bits in length because => 2^16 = 65536 = 64k.

## CPU Logic
1.) Initially a cpu is a state machine. It is internally like running an internal loop that handles how much clock cycles each instruction takes.
- These cycles vary from different instructions, as these instructions also take different op-codes (operation-codes), and are placed in different spots in memory

2.) Each instruction has these information, an op-code, amount of cycles it takes for each instruction. Including the amount of time it takes to finish these instructions


## Resource Links
https://people.cs.umass.edu/~verts/cmpsci201/spr_2004/Lecture_02_2004-01-30_The_6502_processor.pdf

https://people.cs.umass.edu/~verts/cmpsci201/cmpsci201.html


`https://www.masswerk.at/6502/6502_instruction_set.html` - this is the 6502 reference link. What this link has is at the bottom of the page. A link that redirects you to other source links to archived pdf's, datasheets, etc. Containing information about the 6502 cpu.

`http://6502.org/documents/datasheets/` - Reference link to datasheets, and other information in related to micro-controllers. To better understand how cpu's work, by starting with understanding how the 6502 cpu operates.

`http://archive.6502.org/datasheets/gte_microcircuits_data_book_jan_1984.pdf` - this is one of the archived PDF's from the link on the bottom page in the previous link shown above. This link redirects you to a PDF containing information about microprocessors, microcomputers, peripherals, and etc.

`https://www.princeton.edu/~mae412/HANDOUTS/Datasheets/6502.pdf` - Another reference PDF, to learn about 6502 from another perspective. This explains the same thing, but just another way of explaining and going through how the 6502 cpu works.



### NOTES (This is for documentation, once project expands)

## Peripherals: directory
# Overview \

Containing standard protocols in handling I/O from different devices. Peripherals will essentially be how the CPU is going to \
get Input and Output, from the device (whether emulated or the OS itself, and the OS-part is a maybe). Though am planning once \
this project is up and going is to finish it up, then move onto another project once thihs emulation works fully, and can almost \
emulate how entirely the  6502 CPU works. \


## Order of Operations for implementing Memory mappers Registers Maps

1.)  Defining Memory Areas
 - If we were to code this, it'd prob be something like having eachh memory area or device as a seperate class.
 - Example, hhaving a class called "ROMMemory" representing ROM memmory, and another class called "RAMMemory" for RAM memory, and additionally other 
 classes for other external devices.












## Implementation Walkthrough and Thought Process

1.) Implementing classes Instruction.h, CPUState.h

1.1.) Instruction.h
- Templated and defaulted to 1 byte (8 bits), this is because in case we may want to have this instruction              \
because in case we have an instruction that might be 16 bytes. May change in the future tho.                            \
- Essentially is a class that will handle information related to the corresponding instructions. Knowing                \
the Register ID (which is the name of the Register being used), op-codes, address mode, Amount cycle instruction takes, \
amount of bits instruction is going to be.                                                                              \

- Instruction class contains two enums one for the ID's of the register called registerTypes, and an enum for the type of AddressModes \
instructions can have.

1.2.) CPUState.h
- Knows the current state the CPU is in, including the state each instruction are in.
- Idea is to use the CPUState to handle how the instructions are working, when we look them up based on op-codes.

The implementation NOTES above are just a rough draft, and now I'm thinking that this might be totally over-complicating, and unecessary.