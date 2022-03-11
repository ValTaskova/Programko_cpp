# Programko C++ - String

V súbore main.cpp nájdete kód, ktorý obsahuje, to čo sme robili na dnešnej hodine:
<ul> 
  <li>Zadanie príkladu pre BMI kalkuačku</li>
  <li>Základne operácie s objektom string</li>
  <li>Zadanie príkladu na prihlasovaciu aplikáciu</li>
</ul>
String slúži na načítanie reťazca do jednej premennej. Od znaku ho odlišujeme úvodzovkami (hovorili sme si, že znak označujeme apostrofmi). 
Operácie s nim sú jednoduché a nie je potrebné používať funkcie, napr. pre spájanie dvoch a viacerých stringov nám slúži +. String môžeme načítať priamo cez objekt cin, avšak len po medzeru, pretože tam sa cin zastaví a ostatné znaky si uloží do pamäte (buffer). Pokiaľ by sme teraz za ním napísali ďalšie načítavanie stringu alebo znaku, program použije znaky v buffery. Ak by sme chceli načítať reťazec aj s medzerou, je potrebné použiť funkciu getline, ktorá sa zastaví až pri odriadkovaní (enter).
<br/><br/>
Kód si môžete skopírovať, vyskúšať alebo uložiť, je to na vás.
Budem sem pridávať všetky kódy z hodín, ktoré nájdete v pomenovaných priečinkoch, pričom kód z poslednej hodiny bude vždy v hlavnom main.cpp.
