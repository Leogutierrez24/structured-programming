#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
/*U81. Desarrollar un programa que permita ingresar la inicial del día de la
semana. La inicial está compuesta de dos caracteres para cada día (LU o lu, Ma
o ma, MI o mi, JU o ju, VI o vi, SA o sa, DO o do). Mostrar el nombre del día
completo*/
int main()
{
    setlocale(LC_ALL,"SPANISH");
    char dia[10]=" ",v_a[4]="LU",v_b[4]="lu",v_c[4]="Ma",v_d[4]="ma",v_e[4]="MI",v_f[4]="mi",v_g[4]="JU",v_h[4]="ju";

    char v_i[4]="VI",v_j[4]="vi",v_k[4]="SA",v_m[4]="sa",v_n[4]="DO",v_o[4]="do";
    int compa=0,compb=0,compc=0,compd=0,compe=0,compf=0,compg=0,comph=0,compi=0,compj=0,compk=0,compm=0,compn=0,compo=0;

    printf("\nIngrese las primeras dos letras del dia de la semana: ");
    fflush(stdin);
    scanf("%s", &dia);

    compa= strcmp(dia,v_a);
    compb= strcmp(dia,v_b);
    compc= strcmp(dia,v_c);
    compd= strcmp(dia,v_d);
    compe= strcmp(dia,v_e);
    compf= strcmp(dia,v_f);
    compg= strcmp(dia,v_g);
    comph= strcmp(dia,v_h);
    compi= strcmp(dia,v_i);
    compj= strcmp(dia,v_j);
    compk= strcmp(dia,v_k);
    compm= strcmp(dia,v_m);
    compn= strcmp(dia,v_n);
    compo= strcmp(dia,v_o);
    if(compa==0 || compb==0){
        printf("\nLas dos letras ingresadas corresponden al dia Lunes");
        }{if(compc==0 || compd==0){printf("\nLas dos letras ingresadas corresponden al dia Martes");
                }else
                {if(compe==0 || compf==0){printf("\nLas dos letras ingresadas corresponden al dia Miercoles");
                    }else
                    {if(compg==0 || comph==0){printf("\nLas dos letras ingresadas corresponden al dia Jueves");
                     }else
                        {if(compi==0 || compj==0){printf("\nLas dos letras ingresadas corresponden al dia Viernes");
                         }else
                            {if(compk==0 || compm==0){printf("\nLas dos letras ingresadas corresponden al dia Sabado");
                             }else
                                {if(compn==0 || compo==0){printf("\nLas dos letras ingresadas corresponden al dia Domingo");}
                 }
                }
               }
              }
             }
            }


    return 0;
}
