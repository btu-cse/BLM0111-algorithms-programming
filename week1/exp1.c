#include <stdio.h>
#include <stdlib.h>

/*
    Algoritmalar ve Programlama dersi, hafta 1 lab. materyali. Kod kacis karakterlerinin kullanimini icerir.
    \n : Alt satira gec
    \t : Tab karakterini simüle eder.
    \r : Imleci satir basina tasir.
    \b : Sola dogru silme islemini gerceklestirir (backspace).
    \a : Alarm sesi cikarir.
    \\ : Sola yatik cizgi cizer.
    \" : Cift tirnak ekler.

    Her satiri ayri ayri, basindaki yorum isaretlerini (iki saga yatik cubuk, //) silerek inceleyiniz.
*/

int main()
{
    printf("Hello\nworld1");
    printf("Hello\tworld2");
    printf("Hello\rworld3");
    printf("Hello\bworld4");
    printf("Hello\aworld5");
    printf("Hello\\world6");
    printf(" Hello\"world7\" ");
    return 0;
}
