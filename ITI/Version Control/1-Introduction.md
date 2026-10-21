
---

## 1-Intro in git

الgit عبارة عن cross platform هيشتغل معاك كده كده سواء انت Linux او windows  

لما انزل على Linux الgit بينزل command apt الapt ده عبارة عن store زيه زي windows store

الwindows بنزله ك exe عادي

الapplication نفسه اسمه git bash ليه اسمه bash ؟

الgit اصلا معمول للLinux اللي عمله project اسمه GNU 

الbash دي لLinux الbatch دي لwindows 

الشاشة السوده الshell اسمها bash في الLinux في الwindows اسمها batch 

اسمه git bash لانه هو اصلا بيشتغل على الbash 

![[Pasted image 20261016212825.png]]

لما الterminal بتفتح دي بتكون bash ده bash موجود في الwindows لكن لما بجي اكتب الحاجة في الterminal دي بتترجم ل batch ويحصل لها run على الmachine بتاعتي 

الterminal دي كانها gateway يعني بكتب bash لكن مش بيحصل run as bash لانه الbash للLinux اصلا هو بيعمل بس محاكاه للLinux الcommand اللي بتشتغل هنا هيا نفسها بتاعت Linux 

الgit bash هو application , الgit hub ده عبارة عن server 

الgit bash هو الclient والgit hub هو الserver الclient ده ممكن يشتغل مع كذا server 

![[Pasted image 20261016213629.png]]

عندي bitbucket و GitLab دي عبارة عن servers 

![[Pasted image 20261016214128.png]]


مهمه الgit الاساسية هيا tracking version system و save spaces in local Hard disk 

![[Pasted image 20261016214400.png]]


عند رقم 1 عندي 2 version الفكرة هنا git بيشوف بس الchanges في الlines 

![[Pasted image 20261016214619.png]]


عند رقم 2 دي خطوات استخدام git 

الgit application ثابت اسمه على طول git bash 

الhistory بتاع git كلها موجودة جوه ال folder اللي اسمه .git اللي بيظهر بعد ما تعمل git init او git clone 

وده اكتر file بياخد مساحه في الrepo لو مسحته كانك مسحت الHistory كله هيكون معاك الlast version بس 

![[Pasted image 20261018112842.png]]


كل واحد هيقدر ياخد instance من الrepo الموجودة على الserver 

الbranch معمول بشكل اساسي علشان نحل مشكلة الconflict لو انت شغال local مش هتحتاج branches هو معمول اصلا علشان الservers 

![[Pasted image 20261018114022.png]]


الclone ممكن يحصل بطريقتين طريقة ال SSH وطريقة اسمها HTTPS 

فيه طريقة تالته اسمها download دي مختلفه بتعمل download ل zip file هنا مش بنزل repo انا بنزل الlasted عندي على الmachine دي بتوفر الspace علشان مش بتجيب history 

ايه الفرق بين الSSH وال HTTPS ؟

## 2-SSH vs HTTPS

الاتنين بيعملوا نفس الحاجة بالظبط: بينزّلوا نسخة من الـ Repository على جهازك، لكن الفرق الأساسي بينهم هو طريقة الاتصال والـ Authentication (إثبات هويتك).

![[Pasted image 20261018120236.png]]

### 1-SSH

ده ممكن تعمل clone بيه لو انت مش عامل login وانت مش user على GitHub اصلا  لو الrepo دي public ال SSH اعملها CLONE وهتشتغل معاك على طول مش لازم تكون عامل login على GitHub

لو عايز تعمل push لازم تعمل login 
### 2-HTTPS 

هنا اجباري انك تكون عامل LOGIN على GitHub او الserver 

في الاول والاخر مفيش فرق كبير بينهم فيه شركات بتشتغل كده وشركات بتشتغل كده 

### 3-How does it work ?


الHTTPS علشان يشتغل لازم تعمل حاجه اسمها TOKEN خد بالك ال TOKEN ده بيظهر مره وحده بس لو انت عايز تحفظه ممكن تحطه على notepad وتحفظه عندك لكن طبعا ابعد عن كده علشان لو حد سرقه منك الموضوع هيكون خطير 

الSSH علشان يشتغل معاك لازم تعمل Two key واحد اسمه public key وواحد تاني اسمه private key علشان تعمل key في المكان الصح لازم تعرف git bash بيروح يعمل read للkey ده منين بيروح ل path معين بيكون C:\Users\TECHNO ZONE\.ssh بيروح يدور هنا لو مش موجود .ssh روح اعمله تروح عند الfolder ده وتفتح git bash وتكتب command اسمه ssh-keygen ده بيطلع two Key واحد public وواحد private 

![[Pasted image 20261018123141.png]]


الpubic هيروح للserver والprivate هيكون على الlocal machine  كده هيكون ليك Access على الrepo تعمل push و pull براحتك 

لو الـ Repository هي Public، تقدر تعملها Clone باستخدام SSH حتى لو مش بتاعتك، بشرط:

- تكون عامل SSH Key على جهازك.
    
- تكون ضايف الـ Public Key على حسابك في GitHub.
    

مش لازم تعمل Login كل مرة.

أما لو الـ Repository هي Private، فلازم صاحبها يكون مديك صلاحية الوصول ليها.

الـ SSH Key مش مربوط بـ Repository معينة، هو بيستخدم عشان GitHub يتعرف عليك.

تعالى نمشيها واحدة واحدة:

1. أنت بتعمل Generate للـ SSH Keys على جهازك مرة واحدة.

- Private Key بيفضل على جهازك.
    
- Public Key بتحطه على حسابك في GitHub.
    

2. لما تعمل `git clone` باستخدام SSH لأي Repository، جهازك بيستخدم الـ Private Key عشان يثبت هويتك لـ GitHub.

3. GitHub بيتعرف على حسابك من الـ Public Key اللي أنت ضايفه.

4. بعد كده GitHub بيشوف هل حسابك عنده صلاحية الوصول للـ Repository دي ولا لأ.

- 🔴 Private Key: ده سري جدًا، ممنوع تبعته لأي حد نهائيًا.
    
- 🟢 Public Key: ده عادي تشاركه مع أي حد لو محتاجه، ومش خطر إنه يكون معروف.
    

في حالتك مع GitHub:

1. بتحتفظ بالـ Private Key على جهازك.
    
2. بتضيف الـ Public Key لحسابك على GitHub.
    
3. مش محتاج تبعت أي Key لصاحب الـ Repository عشان تعمل Clone.
    

الخلاصة: الـ Private Key سري، أما الـ Public Key فمش سري.

ولو صاحب Repository عايز يديك صلاحية على مشروع Private، بيدعو حسابك على GitHub، مش بيطلب منك مفاتيحك.

الـ `clone` مش معناه إن عندك صلاحية تعمل `push`.

فيه حالتين:

1. لو الـ Repository مش بتاعتك وصاحبها مش مديك صلاحية: ✅ تقدر تعمل Clone لو هي Public، لكن ❌ مش هتقدر تعمل Push عليها.

2. لو صاحب الـ Repository مديك صلاحية كتابة (Write Access): ✅ تقدر تعمل Clone وPush.

خد بالك: الكلام ده سواء بتستخدم SSH أو HTTPS.

يعني:

- SSH Key: بيثبت أنت مين.
    
- Write Access: بيحدد هل مسموح لك ترفع تعديلات ولا لأ.
    

الخلاصة: إنك تقدر تنزّل مشروع مش معناه إنك تقدر تعدّل عليه في GitHub.

لو الـ Repository Private ومش بتاعتك، فيه حالتين:

1. ❌ صاحبها مش مديك صلاحية: مش هتقدر تعمل `clone` ولا `push`، حتى لو عندك SSH Key.

2. ✅ صاحبها مديك صلاحية:

- Read Access: تقدر تعمل `clone`، لكن مش `push`.
    
- Write Access: تقدر تعمل `clone` و`push`.
    

الخلاصة: الـ SSH Key بيثبت هويتك، لكن الصلاحيات هي اللي بتحدد تقدر تعمل إيه.

يعني SSH مش بيديك صلاحية على أي Repository لوحده.

لو الـ Repository بتاعتك أنت، سواء Public أو Private:

- ✅ تقدر تعمل `clone`.
    
- ✅ تقدر تعمل `pull`.
    
- ✅ تقدر تعمل `push`.
    

بشرط:

1. تكون عامل إعداد للـ SSH Keys صح.
    
2. تكون ضايف الـ Public Key لحسابك على GitHub.
    
3. مفيش قواعد حماية للـ Branch تمنع الـ Push المباشر.
    

الخلاصة: بما إن الـ Repository بتاعتك، فعندك صلاحية الكتابة عليها عادةً، والـ SSH بيستخدم لإثبات هويتك.

### 1. في SSH كان عندنا Private Key وPublic Key، طب HTTPS عنده إيه؟

في HTTPS مش محتاج تعمل SSH Keys.

بدل كده، GitHub ممكن يتأكد من هويتك عن طريق Token.

تخيل الـ Token زي تصريح إلكتروني بيثبت إنك مسموح لك تتعامل مع GitHub.

وممكن برنامج اسمه Git Credential Manager يساعدك تسجل دخول مرة واحدة ويحتفظ بالتصريح بشكل آمن.

### 2. هل بعمل Login لكل Repository؟

لأ.

زي SSH تقريبًا، ممكن تسجل دخول بحساب GitHub بتاعك مرة واحدة على الجهاز، وتستخدم بيانات الدخول المحفوظة مع مشاريع متعددة.

لكن أحيانًا هتحتاج تصريح جديد، خصوصًا لو الـ Token انتهت صلاحيته أو مش مسموح له يوصل لمشروع معين.

![[Pasted image 20261018130943.png]]

### 4. هل صاحب الـ Repository لازم يبعتلي Token؟

لأ، خالص.

زي ما قلنا إن صاحب المشروع مش بيبعتلك الـ Private Key بتاعه في SSH، هو كمان مش بيبعتلك الـ Token بتاعه في HTTPS.

لو عايز يديك صلاحية على مشروع خاص، بيدعو حسابك على GitHub، وأنت بتستخدم بيانات دخولك أنت.

والـ Token تعتبر سرية، زي الـ Private Key، ومينفعش تشاركها مع حد.

![[Pasted image 20261018131048.png]]


### أهم حاجة عايزك تفهمها

فيه فرق بين 3 حاجات:

- HTTPS أو SSH: هتتصل بـ GitHub إزاي؟
    
- Authentication: GitHub هيعرف أنت مين إزاي؟
    
- Authorization (Permissions): GitHub هيسمح لك تعمل إيه في المشروع؟
    

يعني سواء استخدمت SSH أو HTTPS، صلاحياتك على الـ Repository مش بتتغير بسبب طريقة الاتصال


أنت مش لازم تعمل Generate للـ Token كل مرة تستخدم فيها HTTPS.

الـ Token بتحتاجه لما GitHub يطلب منك تثبت هويتك، زي لما تعمل `push`.

1. بتستخدم Git Credential Manager: بتسجل دخول لحساب GitHub من المتصفح، والبرنامج بيدير التصريح ليك تلقائيًا. مش محتاج تعمل Generate للـ Token بنفسك في العادة.

2. بتستخدم Token يدويًا: بتدخل GitHub وتعمل Generate للـ Personal Access Token، وتستخدمه بدل باسورد الحساب لما Git يطلب بيانات الدخول عبر HTTPS.
![[Pasted image 20261018131605.png]]

### 1. يعني إيه Token؟

تخيل إن GitHub شركة، وأنت عايز تدخل ترفع ملفات على السيرفر بتاعها.

الـ Token عبارة عن تصريح إلكتروني بيستخدمه Git عشان يثبت إن عندك إذن تتعامل مع GitHub.

التصريح ده ممكن يكون ليه تاريخ انتهاء، وممكن تسمح له بعمليات معينة بس.

### 2. إمتى بعمل Generate للـ Token؟

خلينا نفترض إنك لسه منزل Git على جهاز جديد، وعملت Clone لمشروعك باستخدام HTTPS.

بعد كده كتبت: git push 

هنا GitHub محتاج يتأكد من هويتك.

قدامك طريقتين شائعتين:

الطريقة الأولى: تسجيل الدخول من المتصفح

لو Git فتحلك صفحة GitHub وسجلت دخولك ووافقت على الصلاحيات، برنامج زي Git Credential Manager هيدير تصريح الدخول تلقائيًا.

✅ هنا مش محتاج تعمل Generate للـ Token بنفسك.

الطريقة الثانية: إنشاء Token يدويًا

أنت بنفسك بتدخل GitHub، وتعمل Generate لـ Personal Access Token، وتستخدمه بدل الباسورد لما Git يطلب بيانات الدخول عبر HTTPS.

✅ هنا أنت اللي بتنشئ الـ Token وبتحدد صلاحياته ومدة صلاحيته.

يعني أنت مش مطالب تعمل Token جديد لمجرد إنك بدأت مشروع جديد.

### 3. إمتى الـ Token بتنتهي صلاحيته؟

لما تعمل Generate لـ Token يدويًا، ممكن تختار مدة صلاحيته، مثلًا 30 يوم أو 90 يوم، حسب الإعدادات المتاحة.

ويمكن كمان الـ Token يتلغي قبل موعده لو أنت ألغيتَه، أو GitHub ألغاه لأسباب أمنية.

### 4. طيب لو انتهت صلاحيته، إيه اللي يحصل؟

لو بتستخدم Token يدوي:

1. تعمل `git push`.
    
2. GitHub يرفض التصريح القديم لأنه انتهى.
    
3. تدخل GitHub وتعمل Generate لـ Token جديد.
    
4. تستخدم الجديد بدل القديم.
    

مهم: الـ Token مش بيتغير كل مرة تعمل Push. بتستخدم نفس التصريح طول ما هو صالح.

أما لو بتستخدم Git Credential Manager، فالبرنامج بيدير عملية تسجيل الدخول نيابة عنك، وممكن يطلب منك تسجيل الدخول تاني عند الحاجة، من غير ما تنشئ Token يدويًا

### 5. فين بعمل Generate لو احتجته؟

من GitHub:

Settings → Developer settings → Personal access tokens → Fine-grained tokens → Generate new token

هتحدد اسم الـ Token، ومدة صلاحيته، والمشاريع والصلاحيات اللي محتاجها.

ولحد دلوقتي، بما إن الـ Push شغال عندك عادي، مش محتاج تعمل Token جديد.

- SSH Key: بتضيف الـ Public Key لحسابك على GitHub، وبتستخدمه مع أي Repository عندك صلاحية الوصول ليها.
    
- Token: مرتبط بحسابك برضه، لكن ممكن تحدد إنه يشتغل مع Repository واحدة أو مجموعة Repositories معينة فقط.

مثال:

عندك 3 مشاريع على GitHub:

- Repo A
    
- Repo B
    
- Repo C
    

لو عملت Token وسمحت له بالوصول لـ Repo A فقط، مش هتقدر تستخدمه للـ Push على B أو C.

أما الـ SSH Key العادي، فيمكنك استخدامه مع التلاتة طالما حسابك عنده الصلاحيات المناسبة.

الخلاصة: الاتنين بيساعدوا GitHub يتعرف عليك، لكن الـ Token ممكن تقيّد صلاحياته بمشاريع معينة.

تخيل إنك اشتريت Laptop جديد، وعايز تشتغل على نفس حساب GitHub ونفس المشاريع.

### 1. لو كنت شغال SSH

هتعمل إيه على اللابتوب الجديد؟

1. تنزّل Git.
    
2. تعمل Generate لـ SSH Keys جديدة على اللابتوب الجديد.
    
3. تاخد الـ Public Key الجديدة وتضيفها لنفس حسابك على GitHub.
    
4. خلاص! تقدر تعمل `clone` و`push` للمشاريع اللي عندك صلاحيات عليها.
    

طب والـ SSH Keys القديمة؟

هتفضل على اللابتوب القديم، وتقدر تسيب الـ Public Key القديمة والجديدة على نفس حساب GitHub.

يعني حسابك ممكن يكون مرتبط بأكتر من جهاز، وكل جهاز ليه مفاتيحه الخاصة.

### 2. لو كنت شغال HTTPS

هنا الموضوع مختلف شوية.

### الحالة الأولى: كنت بتستخدم Git Credential Manager (زي حالتك غالبًا)

1. تنزّل Git على اللابتوب الجديد.
    
2. تعمل Clone باستخدام HTTPS.
    
3. لما تحتاج تثبت هويتك، البرنامج يطلب منك تسجيل الدخول لـ GitHub.
    
4. تسجل دخولك من المتصفح.
    
5. البرنامج يحتفظ بالتصريح على الجهاز الجديد، وتكمل شغلك عادي.
    

مش محتاج تعمل Generate لـ Token يدويًا.

### الحالة الثانية: كنت عامل Token بنفسك

الـ Token مرتبط بحسابك، مش باللابتوب.

يعني ممكن تستخدم نفس الـ Token على اللابتوب الجديد، بشرط يكون لسه صالح وعنده الصلاحيات المطلوبة.

لكن أمنيًا الأفضل تعمل Token جديدة للجهاز الجديد، وتلغي القديمة لو مش محتاجها.

![[Pasted image 20261018132802.png]]

لو انا معايا الprivate key وحد اخده وحطه على الmachine بتاعته هيكون عنده الACCESS انه يعمل read / write عادي طالما الpublic موجود لسه على الgithub بتاعك  علشان كده بعض الشركات بتبعد عن الSSH 


ال Authentication Key ده عندك صلاحية تعمل كل حاجة fetch , clone , update 

ال Signing Key ده عندك صلاحية انك تعمل merge تعمل approve للحاجه انها تخش على الrepo  

في الSSH علشان نعمل الKey  بنروح لل.ssh ونفتح الgit bash 

![[Pasted image 20261018135832.png]]

علشان يظهرك الcommand كده اعمل tab 

![[Pasted image 20261019194952.png]]

افتح ده بNOTEPAD++ هتلاقي الPublic key اعمله نسخ وحطه في الgithub 

![[Pasted image 20261019195141.png]]

في الLinux مفيش command فيه space

## 3-git commands

![[Pasted image 20261019195911.png]]

git add . all files to staging phased

![[Pasted image 20261019234620.png]]


اعمل كده وانت بتثبت ال VS Code 

![[Pasted image 20261019235435.png]]

ال untracked file ده ملف جديد اصلا لسه معمول فهو مش متابعه من الاول اصلا مش بيقلك ايه السطر اللي اتغير لانه هو مش عارف ايه الملف ده اصلا 

علشان يبقى tracked لازم ادخله مرحلة الstaging 

التغير التاني هيكون في ملف موجود عندي اصلا هيطلعلي change in tracked file 

الgit clone بتحصل مره وحده في الproject كله 

### 1. يعني إيه `git revert`؟

الأمر `git revert` بيستخدم علشان تلغي التغييرات اللي عملها Commit معين، من غير ما تمسح الـ Commit نفسه من الـ History.

يعني بدل ما Git يمسح الـ Commit الغلط، بيعمل Commit جديد يعكس التغييرات بتاعته.

![[Pasted image 20261020000452.png]]


![[Pasted image 20261020000516.png]]

النتيجة:

- A موجود.
    
- B موجود.
    
- C موجود في الـ History رغم إنه غلط.
    
- D موجود، وبيعكس التغييرات اللي C عملها.

![[Pasted image 20261020000611.png]]

![[Pasted image 20261020000652.png]]

![[Pasted image 20261020000716.png]]

`git revert` بتعكس التغييرات اللي عملها الـ Commit اللي إنت اديتها الـ Hash بتاعه.

يعني:

- لو الـ Commit ضاف سطر → `revert` هتحذف السطر.
    
- لو الـ Commit حذف سطر → `revert` هترجع السطر.
    
- لو الـ Commit عدّل سطر → `revert` هتحاول ترجعه لقيمته قبل التعديل.
خد بالك من نقطتين مهمين:

1. الـ `revert` مش بتمسح الـ Commit نفسه من الـ History.
    
2. لو Commit أحدث غيّر نفس السطور، ممكن يحصل `Conflict` وتحتاج تحله.
    

الخلاصة: `git revert` = إلغاء تأثير Commit معين، مش حذف الـ Commit نفسه.

1-git log --oneline

بيستخدم علشان يعرضلك الـ Commits اللي اتعملت في المشروع، وكل Commit في سطر واحد بس.

- `git log`: بيعرض تاريخ الـ Commits بتاعت المشروع.
    
- `--oneline`: بيختصر عرض كل Commit في سطر واحد بدل التفاصيل الكتير.

بتظهر بالشكل ده : 
a1b2c3d (HEAD -> main) Add UART driver
e4f5g6h Fix array bug
i7j8k9l Initial commit

كل سطر فيه حاجتين أساسيتين:

1. Commit Hash: زي `a1b2c3d`، وده معرّف مختصر للـ Commit.
    
2. Commit Message: زي `Add UART driver`، وده وصف التغييرات اللي اتعملت.
    

أما `(HEAD -> main)` فمعناها إنك حاليًا على Branch اسمه `main`، والـ `HEAD` بيشير لآخر Commit عليه.



git commit -m : m for message 


## 4-Server

![[Pasted image 20261021103012.png]]

ال root هوا الinitial commit الشجرة دي عبارة عن linked list مينفعش تروح تمسح commit من النص 

مينفعش root وحده يكون ليها اتنين reference 

خد بالك انت قبل ما تعمل push اول حاجه بيعمل في الbackground بيعمل git fetch  ده بيشوف ايه الجديد اللي حصل بيعمل fetch information هو مجبش الinformation بس بيعرف ايه اللي موجود على الserver 

الgit push -f ده هضيف الحاجات اللي انت عملتها كلها ويرمي القديم 

![[Pasted image 20261021104126.png]]

![[Pasted image 20261021105313.png]]

الفكرة من الbranch نحل الconflict مش عايز كل ما اعمل push اعمل pull 

كل branch لوحده حرفيا علشان كده لو تلاحظ 3 و 3 و 4 و 4 على الbranch الاول والتاني 

الbranch الميزة منه لما اجي اضيف feature جديدة اول واحد هيرجع على الmain ده اللي مش هيحصله conflict 

الpeer review فشوف الbranch التعديلات اللي عليه كويسه ولا لا ومش هيعمل merge غير لما يراجع عليه الاول 

![[Pasted image 20261021105929.png]]

create branch by checkout 

git push -u origin (Branch name): push the branch for the first time 

مفيش حد بيعمل resolve لل conflict على الlocal 

![[Pasted image 20261021121630.png]]

الmerge بيعمل commit جديدة على طول 

![[Pasted image 20261021121830.png]]



بيسهل الdebug والinitialization لل Branch 

بدل ما تعمل `merge` بين فرعين، الـ `rebase` بياخد الـ commits بتاعت فرعك ويحطها بعد آخر commit موجودة في الفرع التاني، كأنك بدأت شغلك من أحدث نسخة منه.

![[Pasted image 20261021122254.png]]

git switch feature
git rebase main

![[Pasted image 20261021122419.png]]

![[Pasted image 20261021122545.png]]

`git rebase X` معناها: خد الـ commits الخاصة بالفرع اللي أنا واقف عليه، وحطها بعد آخر commit في X.

git pull --prune :

معناه ببساطة: هات آخر التحديثات من GitHub، وامسح عندي أسماء الفروع الremote اللي اتحذفت من GitHub.

![[Pasted image 20261021123718.png]]

![[Pasted image 20261021123736.png]]

![[Pasted image 20261021123839.png]]

مهم: لو إنت عامل فرع محلي بنفس الاسم `feature-B` وعليه شغلك، الـ `--prune` مش هيمسحه.

لو حد مسح فرع من GitHub وإنت عملت `git pull --prune`، إيه اللي هيتمسح من الكمبيوتر؟

الـ Remote-tracking reference القديم

مش هيمسح الفرق الlocal خالص 

- `--prune`: مش فارق معاه إنت واقف على أنهي Branch. هينضّف مراجع الـ Remote Branches المحذوفة.
    
- `pull`: فارق معاه جدًا! لأنه هيجيب التحديثات ويدمجها في الـ Branch اللي إنت واقف عليه، حسب الـ upstream والإعدادات.

![[Pasted image 20261021124245.png]]

![[Pasted image 20261021124305.png]]

![[Pasted image 20261021124548.png]]

![[Pasted image 20261021124624.png]]

يعني:

1. Pull: هيحدّث الـ `main` بتاعك لحد `D`، بافتراض إن التحديث ينفع يتعمل Fast-forward.
    
2. Prune: هيمسح المرجع القديم `origin/feature`؛ لأن الفرع اتحذف من GitHub.
    

لكن لو عندك Local Branch اسمه `feature`، هيفضل موجود ومش هيتمسح.

### أهم نقطة

إنت كده عملت عمليتين مختلفتين بأمر واحد:

- حدّثت الـ `main` المحلي.
    
- نضّفت مراجع الفروع المحذوفة من GitHub.

لو إنت عايز تمسح مراجع الفروع المحذوفة من GitHub، لكن مش عايز تحدّث الـ `main` المحلي بتاعك، تستخدم أنهي أمر؟

git fetch --prune

![[Pasted image 20261021124913.png]]

![[Pasted image 20261021124940.png]]

![[Pasted image 20261021125000.png]]

الخلاصة: الـ `--prune` مش بيمسح الفرع المحلي حتى لو إنت واقف عليه. والـ `pull` مش هيقدر يسحب من فرع بعيد اتحذف.

![[Pasted image 20261021125303.png]]

لحد دلوقت هو لسه موجود على الlocal 

![[Pasted image 20261021125410.png]]

![[Pasted image 20261021125429.png]]


git add . && git commit -m "task" && git push

![[Pasted image 20261021130201.png]]


إنت عندك تعديلات من غير Commit على `feature`، والملفات اللي عدلتها مختلفة أصلًا بين `feature` و `main`.

![[Pasted image 20261021130359.png]]

الGit هيرفض الانتقال!

![[Pasted image 20261021130449.png]]

والنتيجة:

- هتفضل واقف على `feature`.
    
- تعديلاتك هتفضل موجودة زي ما هي.
    
- مش هينتقل لـ `main`.
لو عايز تروح `main` من غير Commit ومن غير ما تضيع شغلك:

git stash
git checkout main

ولما ترجع: 

git checkout feature
git stash pop

الstash هيخزن في الhard بتاعك 

لو عملت git checkout -f هيعمل switch ويضيع كل تعديلاتك 

زمان كانت بتروح الRAM  بس لو قفل اللابتوب هتروح دلوقت بقت في الhard 


## 5-Worktree 

![[Pasted image 20261021131348.png]]

عايز اعمل اكتر من local repo من غير ما اعمل clone اكتر من مره 

هنروح نعمل حاجه اسمها worktree 

اول حاجه هروح اعمل clone للrepo بس ما اعمل clone بروح اكتب جوه الrepo دي git worktree add  بديها الdirectory جديدة وbranch مش محتاج انك تعمل stash لو هتنقل من repo للتانيه هنا 

الفكرة ببساطة: بدل ما تفضل تعمل `checkout` وتبدّل بين الـ Branches في نفس الفولدر، Git بيسمحلك تفتح كل Branch في فولدر لوحده، والاتنين تابعين لنفس الـ Repository.

![[Pasted image 20261021134711.png]]

إنت دلوقتي واقف على `main`، وعدلت في `main.c` ولسه معملتش Commit.

وعايز تشتغل على `feature`، من غير ما تعمل Stash ولا Commit للتعديلات الحالية.

![[Pasted image 20261021134918.png]]


![[Pasted image 20261021135027.png]]

![[Pasted image 20261021135310.png]]

![[Pasted image 20261021135523.png]]


![[Pasted image 20261021135621.png]]

![[Pasted image 20261021135638.png]]

![[Pasted image 20261021135715.png]]

كأنك بتفتح كل Branch في Folder لوحده، لكن كل الفولدرات تابعة لنفس الـ Git Repository.

يعني:

- تقدر تشتغل على `main` في فولدر.
    
- وتشتغل على `feature` في فولدر تاني.
    
- تعديلاتك اللي لسه معملتش لها Commit في فولدر مش هتأثر على التاني.
    
- الاتنين بيشاركوا نفس الـ Git History.

بس خلي بالك من نقطة: إنت مش بتنقل الـ Branch نفسه لفولدر، إنت بتعمل Working Directory منفصل للـ Branch.

وده معناه إنك تقدر تشتغل على فرعين في نفس الوقت من غير ما تفضل تعمل `checkout` بينهم.

يعني WorkTree = Folder مستقل للشغل على Branch، داخل نفس الـ Repository

طالما الـ Branch مفتوح في Worktree تاني، Git مش هيسمحلك تعمل له `checkout` في الفولدر الأساسي بشكل طبيعي

![[Pasted image 20261021140406.png]]

![[Pasted image 20261021140432.png]]

مهم: لو في تعديلات غير محفوظة في Commit جوه `Folder2`، Git عادةً هيرفض إزالة الـ Worktree لحمايتها.

الخلاصة: كل Branch بيتفتح في Worktree واحد فقط في نفس الوقت، بشكل افتراضي. لكن تقدر تنقله من Worktree للتاني لما تفضّي مكانه.

![[Pasted image 20261021140659.png]]

![[Pasted image 20261021140716.png]]

![[Pasted image 20261021140759.png]]

![[Pasted image 20261021140829.png]]

![[Pasted image 20261021140910.png]]

## 6-large file system 

![[Pasted image 20261021141632.png]]

لو انا غيرت في ملف pdf سطر واحد الgit هيقلك انت غيرت الملف كله ويرفعه كله من اول وجديد

لما اعمل git clone هتلاقي الpdf مش بتنزل اصلا هتكون في second storage لكن اللي بيعمل Push لسه بيرفع عادي التعديلات 

لما اعمل git lfs pull هينزل اخر التحديثات بتاع الpdf الموجودة على الrepo مش هينزل الHistory كله 

ازاي بنعمل الlfs دي؟

![[Pasted image 20261021142646.png]]

![[Pasted image 20261021142755.png]]

الأوامر دي بتخلي Git يتعامل مع الملفات المطابقة للنوعين دول باستخدام LFS.

![[Pasted image 20261021142845.png]]

![[Pasted image 20261021142914.png]]

كده الملفات الجديدة المطابقة للقواعد هتترفع باستخدام Git LFS.

