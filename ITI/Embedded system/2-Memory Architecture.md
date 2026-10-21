
---


## 1-introduction in Memory Architecture

### Harvard Architecture 

![[Pasted image 20261020085408.png]]

اي واحد بيجي يعمل memory بيفكر في حاجتين :

1-Adress space 
2-integration between RAM / FLASH / Peripheral 

الشكل ده بتاع Harvard بيحقق الpipeline 

### Modified Harvard Architecture 


![[Pasted image 20261020090026.png]]

الI-Bus مهمته انه يعمل fetch لل instruction 

الport map بتحتاجه لو معنديش memory كفايه بحتاج address space زيادة بس بخسر انه يكون عندي instruction زيادة 

ليه أصلًا ممكن مهندس يختار Port-Mapped I/O؟

![[Pasted image 20261020091405.png]]

![[Pasted image 20261020091452.png]]


### History of ARM 
![[Pasted image 20261020091832.png]]

في 1990 طلع اول processor arm تحت اسم advanced RISK Machine اسمه ARM 610

### Category of Processor 

![[Pasted image 20261020092253.png]]

الR-Family اي حاجه فيها خطير على حياة الانسان 

الA-Family زي Raspberry pi 

ال Infotainment system الشاشه بتاعت العربية 

الCluster system هيا الشاشة بتاعت السواق 

![[Pasted image 20261020093238.png]]

الAURIX ده الcontroller والtri-core ده الprocessor 

الtricore الي عملته شركة Infineon 

الpower train system هيا الحاجات اللي تحت الكابوت بتاع العربية 

![[Pasted image 20261020093718.png]]

ده بيستخدم اقل

الnxp قايم على arm 

## 2-Cortex m4 

![[Pasted image 20261020094427.png]]


الـ MAC في ARM Processor اختصار لـ:

Multiply and Accumulate

يعني الضرب والتجميع، ودي عملية مهمة جدًا في الـ Digital Signal Processing (DSP).

## 1. الـ MAC بتعمل إيه؟

الـ MAC بتنفذ عمليتين:

1. Multiply: تضرب رقمين في بعض.
    
2. Accumulate: تجمع ناتج الضرب على قيمة موجودة مسبقًا.

![[Pasted image 20261020094721.png]]

![[Pasted image 20261020094806.png]]


هيكون فيه بFPU لو الprocessor مكتوب عليه Cortex -F كده تعرف انه فيه FPU مش كل الM4 فيها ال FPU 

![[Pasted image 20261020095037.png]]

عند رقم 1 الfloat بيستهلك time كتير اوي لو عملت عليه عمليات من غير الFPU بال FPU ممكن يعملها في 1 clock cycle 

DAP : debug access point 

انا ممكن استخدم الMPU انه اعمل filter لل access بتاع الmemory واقله الprocessor هيعرف يروح يكلم الmemory دي ولا لا  بقول لل MPU مثلا عايز address 2000 محدش يعرف يكتب فيه مثلا او يعمله read وعلى كده 

الBus matrix هو اللي بيعمل route بيحدد انت عايز تروح فين على الbus بالظبط 

اي OS بيكون محتاج :

1-Timer 
2-Interrrupt controller 
3-memeory protection unit 

OS always runs in Handler

الOS بيحتاج الMPU علشان يضمن نفسه لما يكون شغال محدش يروح يوصل الconfigration اللي هو عملها 

![[Pasted image 20261020100327.png]]

عند رقم 2 المشكلة انه الtimer كان بره فبياخد وقت لل Access اصلا وكمان لما اغير الprocessor هحتاج اروح اكتب code تاني من الاول لانه الtimer كان external 

الCMSIS دي عبارة عن Library بتديك شوية drivers تعرف تشغل بيها الperipherals اللي جوه الprocessor 

## 3- Floating Point Unit 

![[Pasted image 20261020110701.png]]

### 1. يعني إيه Single Precision؟

معناها إن الـ Processor بيخزن الأرقام العشرية (Floating-Point Numbers) باستخدام 32 bits.

لما تتعمل H.W بتكون اسرع بكتير من الS.W

## 4- Memory Protection Unit 

لو حاولت اعمل Access ل Address هو حاميه هيعمل Exception 

بيستخدم بشكل اساسي مع ال OS

او لو عملت Configuration لل GPIO مثلا ومش عايز حد يغيرها 

## 5- Systick Timer 

![[Pasted image 20261020111807.png]]

لو معاي الاربع حاجات اللي عند رقم 1 اقدر اعمل اي حاجه من اللي عند رقم 2 

## 6-NVIC 

![[Pasted image 20261020111915.png]]

![[Pasted image 20261020112421.png]]

![[Pasted image 20261020112434.png]]

## 7- MAC

![[Pasted image 20261020112752.png]]


## 8-Breakpoint and Watch point 

![[Pasted image 20261020112920.png]]

الdebugger بيترجم الUSB لل JTAG or SWD  

انا دلوقت عملت break point في السطر ده مثلا هيروح يبعت اول line في الassembly بتاع السطر ويتخزن في الbreak point اللي جوه ال processor اول ما الprocessor يوصل لل line ده هيعمل halt 

هتقدر تعمل watch point برضوا هقدر اتابع الvariable وهو بيتغير في الrun time  

الـ Watchpoint بتخليك تراقب Variable أثناء الـ Runtime، ولما قيمتها تتغير بسبب عملية كتابة، الـ Debugger يوقف تنفيذ البرنامج عند العملية دي.

الtrace بتستخدم الprintf هيطبع على الPC بتاعي الرساله اللي هكتبها جوه printf  

الشركات بتعرف تلغي الpins بتاعت الDAP 

## 9-Bus matrix 

![[Pasted image 20261020114751.png]]


ليه عندي الI-BUS وال D-BUS ؟

الflash بطيئة لو عندي code critical عايزه يتنفذ بسرعة مش معنى انه CODE Area انه فيها flash بس ممكن تلاقي RAM عادي 

الinstruction اللي انا عايزها critical هعمل ليها copy في الRAM من الFlash وقت الstartup code 

هتعمل write على الRAM الموجودة في الCODE من ال D-bus 

![[Pasted image 20261020120042.png]]

منطقة الRAM اللي في الcode دي ممكن احط فيها Instructions عادي او variable 

