
---


## Lecture map


1-[[#1-Stack pointer]]
2-[[#2-Memory alignment]]
3-[[#3-Link Register]]
4-[[#4-Bit Band]]
5-[[#5-Debugger]]

---

## 1-Stack pointer 

![[Pasted image 20261025103504.png]]

![[Pasted image 20261025103607.png]]

![[Pasted image 20261025104037.png]]



SFR --> Special function register 

## 2-Memory alignment

![[Pasted image 20261025104134.png]]

![[Pasted image 20261025104421.png]]

## 3-Link Register

![[Pasted image 20261025104458.png]]

![[Pasted image 20261025104607.png]]

عند رقم 1 قصده digital signal processing

## 4-Bit Band

![[Pasted image 20261025104729.png]]

![[Pasted image 20261025104833.png]]

## 5-Debugger 


![[Pasted image 20261025105029.png]]


الdebugger بيعرف يتكلم مع الprocessor ب : 
1-SWD (serial wire debugger)
2-JTAG
in AURIX :
3-DAP 

الDAP اللي جوه الPROCESSOR عنده bus أسمه AHP-AP بيعرف يعمل access للmemory زي الprocessor بالظبط

الcompare اللي موجود جوه الbreakpoint بيقارن الbreakpoint كلها مع الaddress اللي موجود حاليا في نفس الوقت اذا بيساوي واحد فيهم هيعمل HALT

الSW0 ده protocol للtrace والdebug trace ده protocol برضوا 

![[Pasted image 20261025111548.png]]

الJTAG CIRCUIT والSWD Circuit  موجوده جوه الcontroler جوه الDAP Circuit  
اي instruction عايز ابعته بال debugger لل microcontroller ابعته على السلكة دي SWDIO

لازم تاخد بالك من الGND 

الTMS الJTAG ك protocol هتلاقيه قايم على حاجه اسمها state machine علشان اقول للmicro على على انهي state من الstate دي هقله عن طريق pin اسمها TMS 

لو عايز اعمل reset للJTAG من غير ما اعمل RESET للmicro الJTAG هيطلع LOW على الnTRST علشان يعمل reset للstate machine عند الmicro  

اللي عمل الSWD ده ARM والJTAG هتلاقيها في كل مكان  

عن طريق JTAG وحده هعرف اوصل بيها اكتر من MICRO  عن طريق حاجه اسمها daisy chain هنفهمها قدام  

لو عايز تزود الspeed ممكن توصل DAP 2 

الفكرة دي معمولة علشان الAURIX فيه اكتر من CORE 

الprocessor عنده circuit مختلفه(غير الDAP اللي جوه الProcessor) بتتكلم ب protocol DAP بس بيعرف انت عايز تكلم core مين انت بتعرف تختار انت عايز تكلم انهي core 

![[Pasted image 20261025113808.png]]

الSW0 مدعوم بس من الSWD لكن الdebug trace بيدعم الJTAG , SWD ,DAP 

الSW0 بيدعم كل الVariable قيمته تتغير يطبعه بالprintf بس بتاخد وقت من الprocessor بس الwatch point افضل 

طيب ليه مدعومه حاجه شبه دي ؟ علشان لو انت قفلت الdebugger pins

الdebug trace بيطبع الinstructions بال binary 