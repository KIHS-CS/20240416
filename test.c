#include <stdio.h>

int main()
{
    int d['Z'+1], sum = 0, i;
    char s[11];
    d['A']=1; d['B']=10; d['C']=19; d['D']=28; d['E']=37;
    d['F']=46; d['G']=55; d['H']=64; d['I']=39; d['J']=73;
    d['K']=82; d['L']=2; d['M']=11; d['N']=20; d['O']=48;
    d['P']=29; d['Q']=38; d['R']=47; d['S']=56; d['T']=65;
    d['U']=74;d['V']=83;d['W']=21;d['X']=3;d['Y']=12;
    d['Z']=30;
    scanf("%s", s);
    sum += d[s[0]];
    for (i=1 ; i<9 ; i++)
    {
        sum += (s[i] - '0') * (9 - i);
    }
    sum += (s[9] - '0');
    if (sum % 10 == 0)
        printf("real\n");
    else
        printf("fake\n");
}

