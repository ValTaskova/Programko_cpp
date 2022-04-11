# Programko C++ - HADIK

V súbore main.cpp nájdete kód pre hadíka. Je to kód z oboch hodín len s niekoľkými úpravami. Použila som unicode znaky pre všetky prvky - hlava a chvost hadíka, hranice, ovocie.
Zdá sa mi, že vykreslovanie je plynulejšie než pri základných ASCII znakoch, preto som zvýšila hodnotu Sleep funkcie na 100 (to znamená 100 milisekúnd). Zároveň som tam doplnila
podmienky, teda čím je skóre vyššie, tým rýchlejšie ide hra. Doplnila som aj kód pre zmenu farby výpisu na svetlo zelenú, aj keď vo VS Code je ta farba trochu tmavšia. Ak by
ste si chceli zmeniť farbu tak tu nájdete ako: https://www.geeksforgeeks.org/how-to-print-colored-text-in-c/
<br/><br/>
Čo sa týka vykreslovania ovocia, generovanie súradníc v prípade pouźitia ASCII znakov by som dala následovne:</br>
<code>fruitX = (rand() % (width - 2) + 1);</code></br>
<code>fruitY = (rand() % (height - 2) + 1);</code></br>
Týmto spôsobom sa mi vygenerujú súradnice od 1 po 18, čo je presne to, čo chcem, pretože hranice sú na pozíciach 0 a 19. Teda nestane sa, že by sa ovocie stratilo v hraniciach. </br>
V prípade unicode znakov, som zvolila kód pre súradnice takto: </br>
<code>fruitX = (rand() % (width - 4) + 2);</code></br>
<code>fruitY = (rand() % (height - 4) + 2);</code></br>
Týmto spôsobom sa mi vygenerujú súradnice od 2 po 17, pričom hranice sú na pozíciach 0 a 19. Teraz mam odstup 2, lebo unicode znaky sú väčšie a keď ovocie bolo na pozícii 18, tak nebolo možné sa k nemu dostať.
