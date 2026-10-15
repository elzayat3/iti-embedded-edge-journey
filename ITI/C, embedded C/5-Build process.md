
---

الpreprocessor كل file.c لوحده ويطلع file.i

الcompiler كل file لوحده برضوا بيدخل file.i ويطلع file.s

الassembler بيحول من file.s لل file.o 

بعد كده الlinker كل الfile.o بتخش مره وحده ويطلع file.exe او file.hex

الcompiler بيشوف الvarible هتنزل فين في الmemory لكل فايل لوحده بتكون virtual addresses 

الlinker يجي يلم كل ال.o ويلم كل الmemory في memory وحده 

الlinker بيكون داخل معايا اي library انا مستخدمها 

الlinker بيطلع الphysical address بيكون فيه offset

الloader بيعمل load للفايل في الRAM 

NRST reset button 