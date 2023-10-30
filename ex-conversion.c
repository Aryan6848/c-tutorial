#include <stdio.h>
int main(int argc, char const *argv[])
{ int n; float inches,feet ,meter ,kilometer ,miles ,centimeters;
  char s,a,b;
    printf("which conversion do you want\n");
    printf("for inches and feet:-1\nfor kilometer and miles:-2\nfor cms to inches:-3\nfor centimeter to meter:-4\nforinches to meter:-5\n");
    scanf("%d",&n);
    if(n==1) /*for inches and feet*/
    {
        printf("for inches to feet:- a \nfor feet to inches:-b ");
        scanf("%s",&s);
     if(s=='a')
     {
         printf("enter inches:-" );
         scanf("%f",&inches);
         feet =inches/12;
         printf("feet=%f",feet);
     }  
     else if(s=='b')
     {
         printf("eneter feet:-");
         scanf("%f",&feet);
         inches=(feet)*12;
         printf("%f",inches);
     } 
     else
     {
         printf("not matched");
     }
    }
   else if(n==2) //for kilometers and miles//   
    { 
        printf("for miles to kilometer:- a \nfor kilometer to miles:-b ");
        scanf("%s",&s);
     if(s=='a')
     {
         printf("enter miles:-");
         scanf("%f",&miles);
         kilometer =miles*1.6;
         printf("kilometer=%f",kilometer);
     }  
     else if(s=='b')
     {
         printf("eneter kilometer:-");
         scanf("%f",&kilometer);
         miles=(kilometer)/1.6;
         printf("miles%f",miles);
     } 
     else
     {
         printf("not matched");
     }

    }
    /*copy*/    else if(n==3) /*for cm and inches */
    { 
        printf("for centimeters to inches:- a \nfor inches to centimeters:-b ");
        scanf("%s",&s);
     if(s=='a')
     {
         printf("enter centimeters:-" );
         scanf("%f", &centimeters);
         inches =centimeters*0.3937;
         printf("inches=%f",inches);
     }  
     else if(s=='b')
     {
         printf("eneter inches:-");
         scanf("%f",&inches);
         centimeters=inches*2.54;
         printf( "centimeters%f" ,centimeters);
     } 
     else
     {
         printf("not matched");
     }

    }  
    if(n==4)
    {
        printf("for centimeters to meter a and for meter to centimeter b");
        scanf("%s",&s);
        if(s=='a')
        {
            printf("enter the centimeters");
            scanf("%f",&centimeters);
            meter =centimeters/100;
            printf("meter=%f" ,meter);
        }
        else if(s=='b')
        {
            printf("enter the meter");
            scanf("%f",&meter);
            centimeters=meter*100;
            printf("centimeters=%f",centimeters);
        }
        else
        {
           printf("not matched");
         
        }
    }

    if("n==5")
    {
        printf("for inches to meter a and for meter to inches b");
        scanf("%s",&s);
        if(s=='a')
        {
            printf("enter inches");
            scanf("%f",&inches);
            meter=inches*0.0254;
            printf("meters %f ",meter);            
        }
        else if(s=='b')
        {
            printf("enter meters ");
            scanf("%f",&meter);
            inches=meter*39.37008;
            printf("inches %f",inches);
   
        }
        else
        {
            printf("not matched");
        }

         



    }     

    else
    {
      printf("not matched");
    }

   
    return 0;
}
