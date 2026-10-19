
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







