#include <stdio.h>
struct Cinema
{
    int zarfiat;
    char *sans;
};
struct Film
{
    int zaman;
    char *sabk;
    char *kholase;
    char *kargardan;
    char *bazigaran;
};
int main()
{
    int shomareFilm;
    int edameYaBazgasht;

    struct Cinema Royal;
    Royal.zarfiat = 300;

    struct Film Motreb;
    Motreb.sabk = "Tanze Ejtemaei";
    Motreb.kargardan = "Mostafa Kiaei";
    Motreb.zaman = 107;
    Motreb.bazigaran = "Elnaze Shakerdoust, Mehrane Ahmadi, Hoseine Omidi Va Parvize Parastouei!";
    Motreb.kholase = "Ina Aslan Maro Ghabul Nadaran; Behemun Migan 'MOTREB'!";

    struct Film Zire_Nazar;
    Zire_Nazar.sabk = "Tanz";
    Zire_Nazar.kargardan = "Majide Salehi";
    Zire_Nazar.zaman = 90;
    Zire_Nazar.bazigaran = "Amire Ja'fari, Mehrane Ahmadi, Soroushe Jamshidi Va Reza Attaran!";
    Zire_Nazar.kholase = "Khanumha! Aghayan! Moragheb Bashid; Hame Ja 'ZIRE NAZAR' Ast!";

    struct Film Cheshmo_Gush;
    Cheshmo_Gush.sabk = "Tanz";
    Cheshmo_Gush.kargardan = "Farzade Motamen";
    Cheshmo_Gush.zaman = 95;
    Cheshmo_Gush.bazigaran = "Bahrame Afshari, Anahita Dargahi, Mas'oude Keramati Va Amine Hayaei!";
    Cheshmo_Gush.kholase = "Yeki Sahneye Ghatl Ra Nadide Chon Nabinast Va Digari Sahne Ra Faghat Dide Chon Nashenavast!";

    printf("\n      Be CinemaTicket Khosh Amadid!\n\n");
    Bargasht:
    printf("\tBaraye Reserve e Ticket Yeki Az Film Haye Zir Ra Entekhab Namaeid: \n\t1. Motreb\n\t2. Zire Nazar \n\t3. Cheshmo Gush Basteh\n\t");
    scanf("%d" , &shomareFilm);
    if(shomareFilm == 1)
    {
        printf("\tMotreb! Filmi Az Noe %s Be Kargardanie %s:\n\tModdat Zaman: %d Daghighe\n\tBazigaran: %s\n\t%s\n\n" , Motreb.sabk, Motreb.kargardan, Motreb.zaman, Motreb.bazigaran, Motreb.kholase);
        printf("      Jahate Edameye Farayande Reserve In Film Adade 1 Va Dar Gheyre In Surat Adade 0 Ra Vared Namaeid:\n\t");
        scanf("%d" , &edameYaBazgasht);
    if(edameYaBazgasht == 0)
    {
        goto Bargasht;
    }
    }

    if(shomareFilm == 2)
    {
        printf("\tZire Nazar! Filmi Az Noe %s Be Kargardanie %s:\n\tModdat Zaman: %d Daghighe\n\tBazigaran: %s\n\t%s\n\n" , Zire_Nazar.sabk, Zire_Nazar.kargardan, Zire_Nazar.zaman, Zire_Nazar.bazigaran, Zire_Nazar.kholase);
        printf("      Jahate Edameye Farayande Reserve In Film Adade 1 Va Dar Gheyre In Surat Adade 0 Ra Vared Namaeid:\n\t");
        scanf("%d" , &edameYaBazgasht);
    if(edameYaBazgasht == 0)
    {
        goto Bargasht;
    }
    }

    if(shomareFilm == 3)
    {
        printf("\tCheshmo Gush Basteh! Filmi Az Noe %s Be Kargardanie %s:\n\tModdat Zaman: %d Daghighe\n\tBazigaran: %s\n\t%s\n\n" , Cheshmo_Gush.sabk, Cheshmo_Gush.kargardan, Cheshmo_Gush.zaman, Cheshmo_Gush.bazigaran, Cheshmo_Gush.kholase);
        printf("      Jahate Edameye Farayande Reserve In Film Adade 1 Va Dar Gheyre In Surat Adade 0 Ra Vared Namaeid:\n\t");
        scanf("%d" , &edameYaBazgasht);
    if(edameYaBazgasht == 0)
    {
        goto Bargasht;
    }
    }
    return 0;
}
