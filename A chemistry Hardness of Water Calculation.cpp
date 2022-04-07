#include<stdio.h>
int main()
{
	float a,b,c,d,e,f;
	float Hardness_MgHCO32,Hardness_MgCl2,Hardness_MgSO4,Hardness_CaHCO32,Hardness_CaCl2,Hardness_CaSO4;
	float Temporary_Hardness,Permanent_Hardness,Total_Hardness;
	
	// molar massess of elements
	
   float	CaCo3    = 100;
   float	MgHCO32  = 146;
   float	MgCl2    = 95;
   float	MgSO4    = 120;
   float	CaHCO32  = 162;
   float	CaCl2    = 111;
   float	CaSO4    = 136;
	
	printf("\n              **If value of any salt is not given then input 0**\n\n");
	printf("Enter the Concentration of Mg(HCO3)2: ");
	scanf("%f",&a);
	printf("Enter the Concentration of MgCl2    : ");
	scanf("%f",&b);
	printf("Enter the Concentration of MgSO4    : ");
	scanf("%f",&c);
	printf("Enter the Concentration of Ca(HCO3)2  : ");
	scanf("%f",&d);
	printf("Enter the Concentration of CaCl2    : ");
	scanf("%f",&e);
	printf("Enter the Concentration of CaSO4    : ");
	scanf("%f",&f);
	
	printf("\n Hardness of salt in terms of CaCo3 =  Concentration of Salt Given X Molecular Mass of Caco3\n  ");
	printf("                                       __________________________________________________________\n ");
	printf("                                                         Molecular Mass Of Salt ");
	
    Hardness_MgHCO32 = (a * CaCo3) / MgHCO32;
    Hardness_MgCl2   = (b * CaCo3) / MgCl2;
    Hardness_MgSO4   = (c * CaCo3) / MgSO4;
    Hardness_CaHCO32 = (d * CaCo3) / CaHCO32;
    Hardness_CaCl2   = (e * CaCo3) / CaCl2;
    Hardness_CaSO4   = (f * CaCo3) / CaSO4;

   {
	 
    if(a>0)
    printf("\n\n Hardness of MgHCO32 in terms of CaCo3 is %f",Hardness_MgHCO32);
    if(b>0)
    printf("\n\n Hardness of MgCl2 in terms of CaCo3 is %f",Hardness_MgCl2);
    if(c>0)
    printf("\n\n Hardness of MgSO4 in terms of CaCo3 is %f",Hardness_MgSO4);
    if(d>0)
    printf("\n\n Hardness of CaHCO32 in terms of CaCo3 is %f",Hardness_CaHCO32);
    if(e>0)
    printf("\n\n Hardness of CaCl2 in terms of CaCo3 is %f",Hardness_CaCl2);
    if(f>0)
    printf("\n\n Hardness of CaSO4 in terms of CaCo3 is %f",Hardness_CaSO4);
}
    {
    Temporary_Hardness = Hardness_MgHCO32 + Hardness_CaHCO32;
    if(Temporary_Hardness>0)
    printf("\n\n Temporary Hardness = %f ppm",Temporary_Hardness);
    else
    printf("\n\n Temporary Hardness = 0");
}
{
	Permanent_Hardness = Hardness_CaSO4 + Hardness_CaCl2 + Hardness_MgSO4 + Hardness_MgCl2;
	printf("\n\n Permanent Hardness = %f ppm",Permanent_Hardness);
}
    printf("\n\n                                          Total Hardness = Temporary Hardness + Permanent Hardness");

    Total_Hardness= Permanent_Hardness + Temporary_Hardness;
    printf("\n\n Total Hardness = %f ppm",Total_Hardness);
    
    printf("\n                      _____________________________________\n");
    printf("                     | Hardness in ppm | Degree of Hardness|\n");
    printf("                     |_________________|___________________|\n ");
    printf("                    |Below 50 ppm     | Soft Water        |\n");
    printf("                     |50-100 ppm       | Moderalatly Soft  |\n");
    printf("                     |100-150 ppm      | Slightly Hard     |\n"); 
    printf("                     |150-250 ppm      | Moderatly Hard    |\n");
    printf("                     |250-350 ppm      | Hard              |\n");
    printf("                     |Above 350 ppm    | Exessive Hard     |\n");
    printf("                     |_________________|___________________|\n");
    
{
	if(Total_Hardness<50)
	printf("\nDegree of Hardness is 'Soft Water'");
	
	else if(Total_Hardness>=50 && Total_Hardness<100)
	printf("\nDegree of Hardness is 'Moderatly Soft'");
	
	else if(Total_Hardness>=100 && Total_Hardness<150)
	printf("\nDegree of Hardness is 'Slightly Soft'");
	
	else if(Total_Hardness>=150 && Total_Hardness<200)
	printf("\nDegree of Hardness is 'Moderatly Hard'");
	
	else if(Total_Hardness>=250 && Total_Hardness<350)
	printf("\nDegree of Hardness is 'Hard'");
	
	else if(Total_Hardness>=350)
	printf("\nDegree of Hardness is 'Exessive Hard'");
	
	else
	printf("\nInvalid Input!");
}
    
    return 0;
}
