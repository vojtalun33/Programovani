#include <iostream>
#include <Windows.h>
using namespace std;
int Peneza = 500;

int Penezb = 15000;

int Penezc = 16;


int main () {
    odhlasit:
    system("cls");



cout << "Vitejte v bance, vyberte uzivatele "<< endl;
cout << "1) Pan Novak"<< endl;
cout << "2) Pan Vesely"<< endl;
cout << "3) Pan Dvorak"<< endl;


int PINa;                  // Pan Novak - PINa
PINa = 123;
int PINb;                  // Pan Vesely - PINb
PINb = 456;
int PINc;                  // Pan Dvorak - PINc
PINc = 789;

int Va;
Va = 1;
int Vb;
Vb = 2;
int Vc;
Vc = 3;

int a;
cin >> a;
int b;
int c;
int d;
int e;

int Zka;
Zka = 1;
int Ppa;
Ppa = 2;
int Vpa;
Vpa = 3;


switch (a) {
    case 1: {
        if (Va==1) {
            cout << "Vybral jste pana Novaka, zadejte PIN pro vstup do uctu "; }

            cin >> PINa;
        if (PINa==123) {
            hlavnimenu:
            system("cls");
            cout << "Vitejte ve vasem uctu pane Novak" << endl;
            cout << "Napiste 1 pro zobrazeni konta" << endl;
            cout << "Napiste 2 pro poslani penez na jiny ucet" << endl;
            cout << "Napiste 3 pro vyber penez" << endl;
            cout << "Napiste 4 pro odhlaseni" << endl;
            cin >> d;
            switch (d){
                    case 1: {
                    if (Zka==1) {
                        cout << "Stav vaseho konta je " << Peneza << "Kc";}
                        Sleep(2600);
                        goto hlavnimenu;
                        } break;
                    case 2: {
                    if  (Ppa==2) {
                        cout << "Vyberte ucet na ktery chete penize poslat" << endl << "1) Pan Dvorak" << endl << "2) Pan Vesely" << endl;
                        //peneza - novak, penezb - vesely, penezc - dvorak
                        int komuchci;
                        cin >> komuchci;
                        switch(komuchci){
                            case 1:
                            cout << "Zadejte castku kolik chcete poslat: " << endl;
                            int castka;
                            cin >> castka;
                            if(castka <= Peneza){
                                Peneza -= castka;
                                Penezc += castka;
                                cout << "Penize byly uspesne poslany!" << endl << "Vas zustatek cini: " << Peneza << endl;
                                Sleep(2600);
                        goto hlavnimenu;
                            }else {
                                cout << "Nemate dostatek penez" << endl;
                                Sleep(2600);
                        goto hlavnimenu;
                            }
                            break;

                            case 2:
                            cout << "Zadejte castku kolik chcete poslat: " << endl;
                            cin >> castka;
                            if(castka <= Peneza){
                                Peneza -= castka;
                                Penezb += castka;
                                cout << "Penize byly uspesne poslany!" << endl << "Vas zustatek cini: " << Peneza << endl;
                                Sleep(2600);
                        goto hlavnimenu;
                            }else {
                                cout << "Nemate dostatek penez" << endl;
                                Sleep(2600);
                        goto hlavnimenu;
                            }
                            break;
                        }

                        }
                        } break;
                    case 3: {
                    if (Vpa==3) {
                        int vyber;
                        cout << "Zadejte castku pro vyber" << endl;
                        cin >> vyber;
                        if(Peneza >= vyber){
                            Peneza -= vyber;
                            cout << "Prave jsi vybral: " << vyber << " ze sveho uctu" << endl << "Vas zustatek cini: " << Peneza << endl;
                            Sleep(2500);
                            system("cls");
                            Sleep(2600);
                        goto hlavnimenu;
                        }else {
                            cout << "Nemate dostatek penez" << endl;
                            Sleep(2600);
                        goto hlavnimenu;
                        }

                        }
                        } break;
                     case 4: {
                        Sleep(2600);
                        goto odhlasit;
                     }  break;
                }
        } else {
            cout << "Spatne heslo";
            }

        } break;

    case 2: {
        if (Vb==2) {
            cout << "Vybral jste pana Veseleho, zadejte PIN pro vstup do uctu "; }
            cin >> PINb;
        if (PINb==456) {
                hlavnimenub:
            system("cls");
            cout << "Vitejte ve vasem uctu pane Vesely"<< endl;
            cout << "Napiste 1 pro zobrazeni konta" << endl;
            cout << "Napiste 2 pro poslani penez na jiny ucet" << endl;
            cout << "Napiste 3 pro vyber penez" << endl;
            cout << "Napiste 4 pro odhlaseni" << endl;
            cin >> d;
            switch (d){
                    case 1: {
                    if (Zka==1) {
                        cout << "Stav vaseho konta je " << Penezb << "Kc";}
                        Sleep(2600);
                        goto hlavnimenub;
                        } break;
                    case 2: {
                    if  (Ppa==2) {
                        cout << "Vyberte ucet na ktery chete penize poslat" << endl << "1) Pan Novak" << endl << "2) Pan Dvorak" << endl;

                        int komuchci;
                        cin >> komuchci;
                        switch(komuchci){
                            case 1:
                            cout << "Zadejte castku kolik chcete poslat: " << endl;
                            int castka;
                            cin >> castka;
                            if(castka <= Penezb){
                                Penezb -= castka;
                                Peneza += castka;
                                cout << "Penize byly uspesne poslany!" << endl << "Tvuj zustatek cini: " << Penezb << endl;
                                Sleep(2600);
                        goto hlavnimenub;
                            }else {
                                cout << "Nemate dostatek penez" << endl;
                                Sleep(2600);
                        goto hlavnimenub;
                            }
                            break;

                            case 2:
                            cout << "Zadejte castku kolik chcete poslat: " << endl;
                            cin >> castka;
                            if(castka <= Penezb){
                                Penezb -= castka;
                                Penezc += castka;
                                cout << "Penize byly uspesne poslany!" << endl << "Vas zustatek cini: " << Penezb << endl;
                                Sleep(2600);
                        goto hlavnimenub;
                            }else {
                                cout << "Nemate dostatek penez" << endl;
                                Sleep(2600);
                        goto hlavnimenub;
                            }
                            break;
                        }

                        }
                        } break;
                    case 3: {
                    if (Vpa==3) {
                        int vyber;
                        cout << "Zadejte castku pro vyber" << endl;
                        cin >> vyber;
                        if(Penezb >= vyber){
                            Penezb -= vyber;
                            cout << "Prave jsi vybral: " << vyber << " ze sveho uctu" << endl << "Vas zustatek cini: " << Penezb << endl;
                            Sleep(2500);
                            system("cls");
                            Sleep(2600);
                        goto hlavnimenub;

                        }else {
                            cout << "Nemate dostatek penez" << endl;
                            Sleep(2600);
                        goto hlavnimenub;
                        }

                        }
                        } break;
                     case 4: {
                        Sleep(2600);
                        goto odhlasit;
                     }  break;
                }
        } else {
            cout << "Spatne heslo";
            }

        } break;

    case 3: {
        if (Vc==3) {
            cout << "Vybral jste pana Dvoraka, zadejte PIN pro vstup do uctu "; }
            cin >> PINc;
        if (PINc==789) {
                hlavnimenuc:
            system("cls");
            cout << "Vitejte ve vasem uctu pane Dvorak" << endl;
            cout << "Napiste 1 pro zobrazeni konta" << endl;
            cout << "Napiste 2 pro poslani penez na jiny ucet" << endl;
            cout << "Napiste 3 pro vyber penez" << endl;
            cout << "Napiste 4 pro odhlaseni" << endl;
            cin >> d;
            switch (d){
                    case 1: {
                    if (Zka==1) {
                        cout << "Stav vaseho konta je " << Penezc << "Kc";}
                        Sleep(2600);
                        goto hlavnimenuc;
                        } break;
                    case 2: {
                    if  (Ppa==2) {
                        cout << "Vyberte ucet na ktery chete penize poslat" << endl << "1) Pan Novak" << endl << "2) Pan Vesely" << endl;
                        //peneza - novak, penezb - vesely, penezc - dvorak
                        int komuchci;
                        cin >> komuchci;
                        switch(komuchci){
                            case 1:
                            cout << "Zadejte castku kolik chcete poslat: " << endl;
                            int castka;
                            cin >> castka;
                            if(castka <= Penezc){
                                Penezc -= castka;
                                Peneza += castka;
                                cout << "Penize byly uspesne poslany!" << endl << "Vas zustatek cini: " << Penezc << endl;
                                Sleep(2600);
                        goto hlavnimenuc;
                            }else {
                                cout << "Nemate dostatek penez" << endl;
                                Sleep(2600);
                        goto hlavnimenuc;
                            }
                            break;

                            case 2:
                            cout << "Zadejte castku kolik chcete poslat: " << endl;
                            cin >> castka;
                            if(castka <= Penezc){
                                Penezc -= castka;
                                Penezb += castka;
                                cout << "Penize byly uspesne poslany!" << endl << "Vas zustatek cini: " << Penezc << endl;
                                Sleep(2600);
                        goto hlavnimenuc;
                            }else {
                                cout << "Nemate dostatek penez" << endl;
                                Sleep(2600);
                        goto hlavnimenuc;
                            }
                            break;
                        }

                        }
                        } break;
                    case 3: {
                    if (Vpa==3) {
                        int vyber;
                        cout << "Zadejte castku pro vyber" << endl;
                        cin >> vyber;
                        if(Penezc >= vyber){
                            Penezc -= vyber;
                            cout << "Prave jsi vybral: " << vyber << " ze sveho uctu" << endl << "Tvuj zustatek nyni cini: " << Penezc << endl;
                            Sleep(2500);
                            system("cls");
                            Sleep(2600);
                        goto hlavnimenuc;
                        }else {
                            cout << "Nemate dostatek penez" << endl;
                            Sleep(2600);
                        goto hlavnimenuc;
                        }

                        }
                        } break;
                     case 4: {
                        Sleep(2600);
                        goto odhlasit;
                     }  break;
                }
        } else {
            cout << "Spatne heslo";
            }

    } break;
}
}
