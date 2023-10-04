
Overview
Notes of how the 6502 CPU works


## Learning about the MOS-6502 CPU Arch
- 6502 is an 8-bit architecture, with an 8-bit accumulator register. Can access max of 64k bytes of random accessed memory.
- Memory addresses are exactly 16-bits in length because => 2^16 = 65536 = 64k.
- 

## Information about 6502



## Memory - How 6502 handles memory, includes initialization, allocating, using memory



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
