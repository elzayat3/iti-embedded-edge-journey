
---
CU has decode circuit 

PC is always auto increment after fetching 

كل مازاد عدد الbits بتاع الinstruction كل ما كان افضل 

7:57-


Async DRAM :
wait time for read and write 10us for ex

SDRAM (sync DRAM):
sync on clock no time to wait give you clock speed  1KHz  for ex 1 clock cycle for read and 1 for write 

DDRAM OR DDRRAM (DOUBLE data rate ) : 
do actions(read or write) in edge falling or raising DDR3 OR DDR4 diff in FREQ and power consumption (optimized volt )
بدل ما يكون 5v يكون 3v مثلا يكون وقت الشحن للنص تقريبا 

8:54-
system bus = data bus +address bus + ctrl bus 

Bus in ARM :

AMBA -> Advanced Microcontroller Bus Architecture 

1-AHB  --> high speed bus 
2-APB  --> peripheral bus  slow speed with peripherals 
3-AXI-4 --> similar to AHB (high speed)--> FPGA
4-AXI-4 lite --> LOW speed -->FPGA
5-AXI - STREAM --> video streaming very high speed 

adaptor= AHB<-->APB 

I-BUS for flash (fetch from flash)
D-BUS for execute 

9:17-->flush is  important  for pipelining with jump 

peripherals = H.W logic + registers (memory)

shadow register 9:25







