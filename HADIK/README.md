# Programko C++ - HADIK

V súbore main.cpp nájdete kód pre hadíka. Je to kód z oboch hodín len s niekoľkými úpravami. Použila som unicode znaky pre všetky prvky - hlava a chvost hadíka, hranice, ovocie.
Zdá sa mi, že vykreslovanie je plynulejšie než pri základných ASCII znakoch, preto som zvýšila hodnotu Sleep funkcie na 100 (to znamená 100 milisekúnd). Zároveň som tam doplnila
podmienky, teda čím je skóre vyššie, tým rýchlejšie ide hra. Doplnila som aj kód pre zmenu farby výpisu na svetlo zelenú, aj keď vo VS Code je ta farba trochu tmavšia. Ak by
ste si chceli zmeniť farbu tak tu nájdete ako: https://www.geeksforgeeks.org/how-to-print-colored-text-in-c/
<br/><br/>
Čo sa týka vykreslovania ovocia, generovanie súradníc by som dala následovne:
<code>fruitX = (rand() % (width - 3) + 1);
    fruitY = (rand() % (height - 3) + 1);</code>
