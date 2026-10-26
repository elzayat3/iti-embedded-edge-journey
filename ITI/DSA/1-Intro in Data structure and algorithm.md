
---

## Lecture map

1-[[#1-Intro]]
2-[[#2-Types of data structure]]
3-[[#3-Abstract Data Type (ADT)]]
4-[[#4-Time & Space complexity]]
5-[[#5-Recursion]]
6-[[#6-Recursion Type]]

---

## 1-Intro

![[Pasted image 20261026021044.png]]

اي Application في الدنيا هو عبارة عن data وحبة instructions والinstructions دي ب Apply operation على الdata 

الdata structure هو طريقة تنظيم وترتيب الdata في الmemory العلم ده موجود اصلا علشان يرتب وينظم الdata دي في الRAM فلما تجي تعمل ACCESS للmemory توصلها بسرعة ومتخدش مكان كبير في الmemory العلم ده بيطبق على الdata الكبيرة اوي 

![[Pasted image 20261026021934.png]]

طريقة تنظيم وتخزين الdata في الpermanent storage دي اسمها Database 

## 2-Types of data structure

![[Pasted image 20261026022139.png]]

### 1-Physical Data Structure 
انا هنا عارف هيا متخزنه ازاي في الmemory جوه الRAM

### 2-Logical Data Structure 
![[Pasted image 20261026022855.png]]

انا هنا مش مهتم هيا متخزنه ازاي في الmemory هكون مهتم ايه الoperations اللي هيقدر اعملها على الdata دي ايه الoperation اللي الdata structure بتعمل ليها provide 


![[Pasted image 20261026113440.png]]

## 3-Abstract Data Type (ADT)

![[Pasted image 20261026113803.png]]


الADT هو عبارة عن logical representation of data type 

انا هنا مليش دعوة الData type ده عبارة عن ايه او متخزن ازاي بس عايز اعرف الrepresentation هعمله ازاي للdata يعني لو array مثلا لازم اكون عارف الsize بتاع الarray والcapacity بتاعت الarray وايه الoperations اللي هعملها على الdata

بالمختصر هيا بتشرح الdata اللي معاك دي عبارة عن ايه وايه الoperation اللي اقدر اعملها عليها 

الList اللي هو container فيه مجموعة من العناصر

الADT بتهتم بحاجتين 
1-Date representation 
2-operations on this data
ال Date representation  مثلا هتكون "arr" اللي هو هنا pointer على اول element و size و capacity 

![[Pasted image 20261026114938.png]]


## 4-Time & Space complexity

![[Pasted image 20261026115036.png]]

![[Pasted image 20261026115236.png]]


### 1-Time Complexity

![[Pasted image 20261026120300.png]]

![[Pasted image 20261026120841.png]]

بنركز مع اعلى اس للn على طول ويكون ده هو الTime complexity وبنهمل الثابت الي جنب الn

![[Pasted image 20261026121229.png]]

![[Pasted image 20261026121515.png]]

### 2-Space Complexity

![[Pasted image 20261026121943.png]]

ال auxiliary space هيا المساحة اللي الalgo بتاعي استهلكها مليش دعوة بالinput space ايه انا مش عايز اقيس الspace اللي فيها الdata structure 

![[Pasted image 20261026122706.png]]


![[Pasted image 20261026122826.png]]

![[Pasted image 20261026122955.png]]

![[Pasted image 20261026123022.png]]

![[Pasted image 20261026123504.png]]


## 5-Recursion 

![[Pasted image 20261026124512.png]]

![[Pasted image 20261026124756.png]]

![[Pasted image 20261026124914.png]]

![[Pasted image 20261026125114.png]]

![[Pasted image 20261026125210.png]]

![[Pasted image 20261026125247.png]]


الspace complexity لاي recursion function هو عدد الstack frames اللي هتتعمل من الrecursion 

تعتمد على **أقصى عدد من الـ Stack Frames المتواجدة في الذاكرة في نفس الوقت (Maximum Depth of the Recursion Tree)**

## 6-Recursion Type


![[Pasted image 20261026130652.png]]

الtail recursion اخر حاجه في الfunction هيا الrecursion والhead الrecursion بيكون اول حاجة 

![[Pasted image 20261026133209.png]]


![[Pasted image 20261026130826.png]]



![[Pasted image 20261026133723.png]]

![[Pasted image 20261026134026.png]]

![[Pasted image 20261026134127.png]]


![[Pasted image 20261026143701.png]]


![[Pasted image 20261026164924.png]]


![[Pasted image 20261026165341.png]]

![[Pasted image 20261026165536.png]]


![[Pasted image 20261026170023.png]]

![[Pasted image 20261026170453.png]]

![[Pasted image 20261026172341.png]]

حل سؤال الpower 2 على الورق 
![[Pasted image 20261026175953.png]]

![[Pasted image 20261026180636.png]]

![[Pasted image 20261026180655.png]]

![[Pasted image 20261026181352.png]]