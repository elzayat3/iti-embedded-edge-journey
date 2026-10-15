
---

## Lecture Map

1-[[#1-Introduction in Architecture]]
2-[[#2-Instruction set]]
3-[[#3-Control Unit (CU) — Fetch & Decode]]
4-[[#4-Memory]]
5-[[#5-Buses]]
6-[[#6-Peripherals]]

---

## 1-Introduction in Architecture

![[Pasted image 20261013113527.png]]

طريقة تواصل ال Microprocessor مع الMemory مع الPeripherals عن طريق الBus 

![[Pasted image 20261013115620.png]]

الشخص اللي بيعمل الprocessor بيكون عامله انه ينفذ شوية instructions اسمها **ISA**

ال **ISA** دي اختصار لل**Instruction set architecture** هيا الاوامر او العمليات اللي بيعرف ينفذها الprocessor 

الInstruction دي ممكن تكون ADD مثلا بتاخد two arguments وتجمعهم على بعض 

ممكن تكون برضوا LOAD بتاخد two arguments واحد بيكون الsource تنقل منه الdata وواحد بيكون destination بتحط فيه الdata

كل ال instructions دي اللي بيكون عاملها الشخص اللي عمل design للmicroprocessor 

```ad-tip
title: Remember 

الprocessor مش بيفهم غير 0 و 1 لازم حاجه تترجم كود ال c ل machine language 


```

لو تلاحظ في الصوره فوق على اليمين عند رقم (1) هتلاقي الinstruction بتاعك عبارة عن 16-bit وبتاخد two arguments كل argument عبارة عن 4-bits 

## 2-Instruction set

![[Pasted image 20261013115703.png]]

انا مفترض هنا انه الintruction عبارة عن 8-bits دلوقت انا لو جيت قلتله اضرب هل هيفهمني ؟ لا هو مش بيعرف ينفذ اوامر غير الاوامر الموجودة في الجدول دي 

انا لازم استخدم الموجود الضرب في الاول والاخر جمع متكرر 

![[Pasted image 20261013120106.png]]

عند رقم (2) الinstructions بتنزل في الmemory ورى بعض عندك I1 بتدل على الinstruction الاول I2 الinstruction التاني وعلى كده 

الprocessor بيروح يعمل jump على address zero ويشوف address zero ده ايه الinstruction الموجودة فيه ويروح ينفذها 

اول حاجه بيعمل fetch ده معاناه انه اجيب الinstruction 

تاني حاجة بيعمل decode بيروح يفهم الinstruction دي عبارة عن ايه 

```ad-tip
title: Remember

لازم تكون الInstruction دي موجودة عنده في الISA

```

تالت حاجة بيعمل execute بيروح ينفذ الinstruction دي 

ولما يخلص الحاجه دي يروح على اللي بعدها وعلى كده بمشي sequential 

مش على طول همشي sequential 

![[Pasted image 20261013120907.png]]

عند رقم (3) انا ممكن اعمل call function مثلا بيحصل jump ويروح ينفذ كود في حته تانيه مش اللي بعده على طول كده هو مش بيمشي sequentially في الassembly  بنقول عليه branch 

هيروح ينفذ الsum الموجود جنب رقم (2) على اليمين مثلا I2 هتكون Branch يروح ينفذ في I50 الfunction اللي اسمها sum 

![[Pasted image 20261013123215.png]]

على حسب الجدول اللي عنده هنا هو بيروح يعمل decode للinstruction دي ويفهم هيا عبارة عن ايه وبتاخد كام arguments 

عندنا مثلا load0 دي instruction الop-code بتاعها 0000 وبتاخد argument عبارة عن 4-bit 

دائما الCPU بيكون اسرع من اي memory علشان كده بجيب الdata عنده علشان يعمل عليها عمليات يحطها في memory internal جوه الprocessor 

الmemory ي هيا الregisters 

![[Pasted image 20261013123809.png]]

عند رقم 4 دي الregisters بتكون سريعة جدا هيا اسرع حاجة واقرب حاجة للprocessor تقريبا هيا بسرعة الprocessor 

هتلاحظ انه فيها من r0 to r3 مثلا 

الload0 مثلا بتعمل load في الr0 وعلى كده 

![[Pasted image 20261013124305.png]]

عند رقم 1 مثلا عندي ADD هفترض انها بتجمع رقمين وبتحط الناتج في r3

لو عندي

```c

z=x+y;
```

فهو عمل load0 اخد قيمة x في r0 و load1 اخد قيمة y في ق1 وجمع r0 و r1 وحط الناتج في r3 وراح خزن r3 في الmemory في عنوان z

خد بالك مش لازم الexecution يحصل في الALU على طول هو لما عمل Execution لل load0 مفيش داعي انه يستخدم الALU 

![[Pasted image 20261013124959.png]]

عند رقم 5 تعالا نتكلم على الALU 

هيا اختصار ل **Arithmetic logical unit** العمليات الmathematicl او logical بتكون هنا 

هحتاجها بس في العمليات اللي زي ADD بس 

بعد كده عندنا الcontrol unit ال **CU** هو اللي بيفهم الinstruction set الموجودة عندي هو اللي بيبدأ يفهم كل instruction هنفذها ازاي

![[Pasted image 20261013125815.png]]

الCU هو الcontrol هو اللي بيقول الALU والREGISTERS تعمل ايه 

في عملية الdecode الـ Control Unit بتفهم إن الـ Instruction المطلوبة في عملية `ADD` مثلا ، وتحدد الأجزاء اللي هتشارك في تنفيذها.

في عملية الexecution الـ Control Unit بتصدر الـ Control Signals المناسبة عشان الـ ALU تنفذ عملية الجمع على القيمتين.

Control Unit = Decodes instructions and generates control signals to coordinate their execution.

## 3-Control Unit (CU) — Fetch & Decode

الـ **Control Unit (CU)** هي الجزء المسؤول عن **Controlling and Coordinating** تنفيذ الـ Instructions جوه الـ Processor.

الـ CU مش هي اللي بتنفذ العمليات الحسابية، لكنها بتصدر **Control Signals** لباقي أجزاء الـ Processor عشان كل جزء يعرف يعمل إيه وإمتى.

### Internal Logic of the Control Unit

الـ Control Unit مسؤولة عن وظيفتين مهمين:

1. **Fetch Control Logic**
2. **Instruction Decoder**

> [!important] Important
> مش شرط يكون فيه دائرتين منفصلتين حرفيًا اسمهم Fetch Circuit وDecode Circuit.
>
> التقسيم الفعلي بيعتمد على الـ **Processor Architecture**.
>
> لكن بشكل عام، الـ CU بتتحكم في عملية الـ Fetch وبتفك شفرة الـ Instruction أثناء الـ Decode.

### 1. Fetch Control Logic

الـ **Fetch Control Logic** هي الـ Logic المسؤولة عن تنظيم عملية جلب الـ Instruction من الـ Memory.

بتنسق بين مجموعة من الأجزاء، أهمها:

- **Program Counter (PC):** بيحتفظ بعنوان الـ Instruction اللي المفروض تتجاب.
- **Memory Interface:** بتستخدم للوصول للـ Memory وقراءة الـ Instruction.
- **Instruction Register (IR):** بيحتفظ بالـ Instruction اللي اتجابت في التصميمات البسيطة.

**Fetch Process:**

1. الـ PC بيحدد عنوان الـ Instruction.
2. الـ CU بتصدر الـ Control Signals اللازمة لقراءة الـ Instruction.
3. الـ Instruction بتتجاب من الـ Memory.
4. الـ Instruction بتتحفظ في الـ IR في التصميمات التقليدية.
5. الـ PC بيتحدّث عشان يشاور على الـ Instruction التالية، أو يتغير حسب مسار تنفيذ البرنامج.

> [!note] Note
> الـ PC والـ IR والـ Memory Interface مش بالضرورة يكونوا جوه الـ Control Unit نفسها.
>
> الـ CU بتتحكم في العمليات المرتبطة بيهم عن طريق الـ Control Signals.

### 2. Instruction Decoder

الـ **Instruction Decoder** هي دائرة منطقية داخل الـ Control Unit في تصميمات كتير من الـ Processors.

وظيفتها إنها تعمل **Decode** للـ Instruction عشان تحدد العملية المطلوبة.

كل Instruction بتحتوي على **Opcode** بيحدد نوع العملية.

**Examples:**

| Instruction | Operation |
|---|---|
| ADD | Addition |
| SUB | Subtraction |
| AND | Logical AND |
| LOAD | Load Data |
| STORE | Store Data |

بعد ما الـ Decoder يحدد نوع الـ Instruction، الـ CU بتولد الـ **Control Signals** المناسبة لتنفيذها.

### Example — ADD Instruction

```asm
ADD R1, R2
```

نفترض إن:

- `R1 = 5`
- `R2 = 3`

**Execution Steps:**

1. **Fetch:** جلب الـ Instruction من الـ Memory.
2. **Decode:** الـ CU بتحدد إن العملية المطلوبة هي Addition.
3. **Execute:** الـ CU بتوجه الـ ALU لتنفيذ عملية الجمع.
4. **Write Back:** تخزين الناتج `8` في الـ Register `R1`.

> [!tip] CU vs ALU
> **Control Unit:** Decodes the instruction and generates control signals.
>
> **ALU:** Performs arithmetic and logical operations.

### Summary

- الـ **CU** مسؤولة عن تنظيم تنفيذ الـ Instructions.
- الـ **Fetch Control Logic** بتنظم جلب الـ Instructions من الـ Memory.
- الـ **Instruction Decoder** بيفك شفرة الـ Instructions.
- الـ **CU** بتولد Control Signals للتحكم في باقي أجزاء الـ Processor.
- مش كل الـ Hardware المستخدم في عملية الـ Fetch موجود بالضرورة جوه الـ CU.

> [!important] Remember
> **The Control Unit controls instruction fetching, decodes instructions, and generates the control signals needed to coordinate their execution.**

![[Pasted image 20261013132735.png]]

عند رقم 6 هتلاحظ انه الdecode circuit موجوده جوه الCU  

الIR هو المكان اللي بخزن فيه الINSTRUCTION وهو اختصار لل instruction register 

الIR دائما هلاقي فيه الinstruction اللي انا عملتها fetch علشان بعد كده تروح الCU تعمله decode 

الPC اختصار ل program counter اول ما الprocessor بيقوم بيكون على طول ب zero 

لو عملت call function قيمة الPC دي بتتغير بحيث يروح ينفذ الFUNCTION دي  

![[Pasted image 20261013133742.png]]


الtool هنا قصده بيها compiler 

لو انا غيرت الprocessor هغير الcompiler 

هتلاقي هنا الinstruction 8-bit دي هتكون الcost قليل لكن الدنيا بطيئه جدا 

## 4-Memory 

![[Pasted image 20261013134620.png|700]]

في انواع ال non-volatile كل نوع عنده طريقة ما يحافظ على الdata بحيث لما تنقطع الكهرباء مفقدش الdata دي وطبعا بتشيل ال instructions 

لو عايز امسح الdata واكتب data تانيه هتحتاج high voltage و هتكون ابطئ في الكتابة 

ال SRAM بتكون بسرعة الكهرباء كل BIT بتكون عبارة عن شوية transistors والtransistors مش رخيصة بتكون غالية علشان كده هتلاقي اغلب ال RAM اللي هنشتغل عليها بتكون بال KB حجم محدود صغير 


ال Capacitors بتكون عبارة عن جردل مايه بس جردل مخروم انت بتملاه لكن هو بيسرب من تحت 

المفارقة هنا الCapacitors انت بتشحنها كهرباء ولو بطلت تشحنها هتفرغ 

الpower اكتر علشان لازم كل شويه اشحنه علشان ميفرغش 

هو slow مقارنه بال SRAM بس ال COST اقل بكتير من الTRANSISTOR

انواع الDRAM :

1- Asynchronous DRAM 
2-Synchronous DRAM (SDRAM)
3-Double data rate RAM (DDRRAM)

### Asynchronous DRAM 

![[Pasted image 20261013141303.png]]

اللي بيصنع الmemory من ضمن الdatasheet بتاعت الMemory بيقلك لو انت عايز تعمل write بيقلك هتاخد مني العملية دي وقت 10us والread نفس الكلام مثلا في ال DS في اتفاق هتستنى قد ايه على الREAD والWRITE زمان كان محتاج يعمل ins يعمل wait ال 10us دي الموضوع كان ماشي باتفاق بين الprocessor والmemory الفكرة هنا لو عمل WAIT اقل هو خسر الDATA لو wait اكتر هو خسر time 

### SDRAM 

![[Pasted image 20261013143122.png]]

هيديك الclock speed من الdata sheet بتاعت الmemory 

هنعتبر مثلا عملية الwrite وعملية الread كل وحده بتاخد 1 clock cycle 

### DDRRAM
دي هيا الDDR3 و DDR4 و DDR5

![[Pasted image 20261013143505.png]]

```ad-tip
title: tip

الـ DDR RAM بتنقل البيانات مرتين خلال كل Clock Cycle: مرة عند الـ Rising Edge ومرة عند الـ Falling Edge

```


بنفذ عمليتين في نفس الcycle دي اخر حاجه وصلها العلم 

الفرق في بين الDDR3 , DDR4 ,DDR5 الفرق في الfrequancy وال power consumption وال speed

بيعملوا ايه ؟

![[Pasted image 20261013143811.png]]

بيلعبوا انه يعملوا optimized الvolt اللي هيشحنوا بيه ال capacitor كده وفرت time و power


الIR register يعتبر private register وانا عمري ما هعرف اوصله مش هعرف اعمله read و write معنديش اي access عليه.

فيه كمان flags register بيكون فيه flags لو عندي carry من عملة جمع مثلا او حصل exception .

### Word Size vs Data Bus Width

#### 1. الفكرة الأساسية

عندنا حاجتين مختلفتين تمامًا:

- **Word Size:** حجم البيانات اللي الـ CPU يقدر يعالجها كوحدة واحدة.
- **Data Bus Width:** عدد الـ Bits اللي ممكن تتنقل في Transfer واحدة على الـ Bus.

> [!important] احفظ الفرق
> - Word Size → Processing
> - Data Bus Width → Transferring
>
> الـ Word Size مرتبط بقدرة المعالج على معالجة البيانات.
>
> الـ Data Bus Width مرتبط بقدرة مسار النقل على نقل البيانات.


#### 2. مثال عملي بلغة C

افترض عندنا Microcontroller بالمواصفات دي:

- CPU Word Size = 32 bits
- Data Bus Width = 8 bits

وعندنا الكود التالي:

```c
#include <stdint.h>

uint32_t x = 0x12345678;

uint32_t y = x + 1;
```

خلينا نفهم بيحصل إيه.

##### Step 1: تخزين المتغير في RAM

المتغير `x` نوعه `uint32_t`.

يعني حجمه:

32 bits = 4 Bytes

وقيمته:

```text
x = 0x12345678
```

لو افترضنا إن النظام Little Endian، هيكون متخزن في الـ RAM بالشكل ده:

| Memory Address | Value |
|---|---|
| 0x20000000 | 0x78 |
| 0x20000001 | 0x56 |
| 0x20000002 | 0x34 |
| 0x20000003 | 0x12 |

إذن عندنا 4 Bytes في الذاكرة.

##### Step 2: نقل قيمة x من RAM إلى CPU

هنا ظهر دور الـ Data Bus.

إحنا افترضنا إن:

Data Bus Width = 8 bits

يعني الـ Bus يقدر ينقل Byte واحدة في كل Transfer.

وعشان قيمة `x` حجمها 4 Bytes، فهنحتاج نظريًا:

```text
Transfer 1 → 0x78
Transfer 2 → 0x56
Transfer 3 → 0x34
Transfer 4 → 0x12
```

بالتالي محتاجين 4 Transfers لنقل القيمة كلها.

> [!note]
> المثال بيفترض مسار نقل بيانات عرضه 8 bits، بدون Cache أو تحسينات، وبنفترض إن المتغير موجود فعليًا في RAM.
>
> في المعالجات الحقيقية طريقة النقل بتعتمد على تصميم الـ Memory Interface والـ Bus.

##### Step 3: معالجة البيانات داخل CPU

بعد وصول قيمة `x` للمعالج، هننفذ:

```c
uint32_t y = x + 1;
```

بما إن:

Word Size = 32 bits

فالـ CPU مصمم يعالج قيمة 32-bit كحجم طبيعي.

يعني يقدر يعمل عملية جمع 32-bit مباشرة باستخدام عمليات المعالج المناسبة.

```text
        CPU (32-bit)

     x = 0x12345678
            +
          0x1
            |
            v
     y = 0x12345679
```

لاحظ حاجة مهمة جدًا:

الـ Data Bus كان 8 bits فقط، ومع ذلك الـ CPU قدر يعالج رقم 32-bit!

ليه؟

لأن الـ Data Bus مسؤول عن نقل البيانات، مش تحديد حجم العملية الحسابية اللي الـ CPU يقدر ينفذها.


#### 3. طب لو Data Bus Width = 32 bits؟

هنستخدم نفس الكود بالظبط:

```c
uint32_t x = 0x12345678;

uint32_t y = x + 1;
```

لكن هنغير مواصفات الـ Microcontroller:

- Word Size = 32 bits
- Data Bus Width = 32 bits

##### نقل البيانات

قيمة `x` حجمها 32 bits.

والـ Bus عرضه 32 bits.

بالتالي ممكن ننقل القيمة كاملة في Transfer واحدة، بافتراض إنها Aligned والـ Bus بيدعم النقل ده.

```text
RAM                         CPU
 |                           |
 |------ 0x12345678 -------->|
 |                           |
       One Transfer
```

##### معالجة البيانات

الـ CPU هيعمل نفس عملية الجمع:

```c
y = x + 1;
```

النتيجة:

```text
y = 0x12345679
```

إذن الفرق بين الحالتين مش حجم البيانات اللي الـ CPU بيعالجها.

الفرق في عدد عمليات النقل المطلوبة لتوصيل البيانات.


#### 4. مقارنة الحالتين

عندنا نفس الكود:

```c
uint32_t x = 0x12345678;
uint32_t y = x + 1;
```

| Property | MCU A | MCU B |
|---|---|---|
| Word Size | 32 bits | 32 bits |
| Data Bus Width | 8 bits | 32 bits |
| Size of x | 4 Bytes | 4 Bytes |
| Transfers لنقل x | 4 | 1 |
| CPU native operation | 32 bits | 32 bits |
| Result | 0x12345679 | 0x12345679 |

عدد الـ Transfers هنا نظري، مع افتراض نقل القيمة عبر الـ Bus المحدد دون قيود إضافية.

> [!tip] أهم ملاحظة
> تغيير الـ Data Bus Width مش معناه إن حجم المتغير في لغة C اتغير.
>
> `uint32_t` هيفضل 32 bits في الحالتين.
>
> لكن طريقة وعدد عمليات نقل البيانات ممكن تختلف.


#### 5. هل Word Size = sizeof(int)؟

مش بالضرورة.

مثلًا في ARM Cortex-M4:

```c
sizeof(int)       // 4 Bytes
sizeof(uint32_t)  // 4 Bytes
sizeof(uint8_t)   // 1 Byte
```

الـ Word Size للـ Cortex-M4 هو 32 bits.

لكن مش معنى كده إن كل متغير لازم يكون 32 bits.

ممكن تكتب:

```c
uint8_t  a = 10;  // 8 bits
uint16_t b = 20;  // 16 bits
uint32_t c = 30;  // 32 bits
```

كل متغير ليه حجمه المحدد.

والـ Word Size بيوصف الحجم الطبيعي للعمليات داخل المعالج، مش حجم كل Variable في البرنامج.


#### 6. Final Summary

##### Word Size

The number of bits the CPU naturally processes as a single unit.

يعني المعالج مصمم يعالج كام Bit كوحدة واحدة.

##### Data Bus Width

The number of bits that can be transferred over a data bus in one transfer.

يعني الـ Bus يقدر ينقل كام Bit في عملية نقل واحدة.

##### الخلاصة

**Word Size → How much data the CPU naturally processes.**

**Data Bus Width → How much data the bus transfers at once.**

مش شرط الاتنين يكونوا نفس الحجم.


## 5-Buses

![[Pasted image 20261015151300.png]]


الpeer to peer اي حد عايز يتكلم في اي وقت يروح يبعت الdata بتاعته على الbus 

الmaster / slave مينفعش حد يتكلم غير لما الmaster يقلك اتكلم هو اللي يبدأ الcommunication وده اللي احنا شغالين بيه 

![[Pasted image 20261015151558.png]]

ركز على اتجاهات الbus 

هو بيعمل read او write عند الedge 

system bus = data bus + address bus + control bus

![[Pasted image 20261015152437.png]]

الAMBA دي عبارة عن communication protocols مختلفه الcomponant بتكلم بعضها بيه 

الAXI-4 مصمم انه يستخدم اكتر مع الFPGA 

الAXI-4 Lite شبه ال APB شويه 

الFPGA جواها MICROPROCESSOR بياخد الinstruction اللي انت كتبتها ويروح يبرمج الgates اللي جوه اللي هيا عبارة عن flip flop 

![[Pasted image 20261015153240.png]]


ال Adaptor بيحول بين الAHB وال APB 

اللي عملوا design Harvard هدفهم كان نعمل pipeline المشكلة اللي واجهتهم انه فيه bus واحد بس فعملوا اكتر من bus 

هتحصل مشكلة وانا بعمل branch لو كان الexecution هدفه اني اعمل branch كده الinstruction اللي انا عملتلها fetch ملهاش لازمة 

الpipeline هيعمل flush هيشيل الinstruction اللي عملها fetch ويحط الinstruction الجديدة 

الTtri-core بيعرف يتوقع حوار الbranching ده 

## 6-Peripherals 

![[Pasted image 20261015154809.png]]


اي peripheral عباره عن registers و H.W Logic 

انا مش بكلم الH.W logic انا بكلم ال registers 

![[Pasted image 20261015160029.png]]


عند رقم 1 دي مشكلة الshadow register عندي register لما اكتب عليه قيمة واعملها read مش هلاقي نفس القيمة  ال read من مكان تاني 

هنتكلم عنه اكتر قدام 




