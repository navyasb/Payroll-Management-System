#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define EMP_FILE "empdata.txt"
#define TMP_FILE "tmpdata.txt"
#define SAL_FILE "saldata.txt"

# define EPF_RATE 0.2
# define ETF_RATE 0.06
# define GEN_TIME 216
#define FEST_RATE 3000
#define HOU_RATE 500
#define TRA_RATE 200


#define USER "CoreFour\0"
#define password_admin "5555\0"
#define password_audit "6666\0"
#define password_employee "7777\0"

void welcome();
void desig_user();
void admin_menu();
void add_employee();
void edit_employee();
void search_employee();
void delete_employee();

void user_audit();
void user_admin();
void user_employee();

int main()
{
        welcome();
}

void welcome()
{
                system("clear");
                char reply;
                printf("\n\n\n\n\n\n\n\t\t\t\t\tWELCOME TO\n");
                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                printf("\n\t\t\t\t\t\tPAYROLL MANAGEMENT SYSTEM\n");
                printf("\n\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                printf("\n\n\n\n\n\n\nPress Any Key To Continue......\n");
                scanf("%c",&reply);
                if(reply)
                {

                        //printf("Thank you");
                        //exit(0);
                        desig_user();
                }
                else
                {
                        system("clear");
                        printf("\n\n\n\n\n\t\t\tThank You!!!!!!!!!!!!");
                }

}




void desig_user()
{
        int reply;
        system("clear");
        printf("\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\tEnter your designation: \n");
        printf("\t\t\t\t\t\t1.Admin\n\t\t\t\t\t\t2.Auditor\n\t\t\t\t\t\t3.Employee\n ");
        printf("\t\t\t\t\t\tEnter choice: ");
        scanf("%d",&reply);
        switch(reply)
        {
                case 1:
                        {
                                user_admin();
                                break;
                        }
                case 2:
                        {
                                user_audit();
                                break;
                        }
                case 3:
                        {
                                user_employee();
                                break;
                        }
                default: printf("\nInvalid user\n");
        }

}

void user_admin()
{
        char username[60];
        char password[30];
        int reply;
        int count=0;
        system("clear");

        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tLOGIN\n");
        printf("\t\t\t\t\tUSERNAME : ");
        scanf("%s",username);
        printf("\t\t\t\t\tPASSWORD : ");
        scanf("%s",password);
        if(strcmp(username, USER)==0)
        {
                if(strcmp(password,password_admin)==0)
                {
                printf("\n\t\t\t\t\tWelcome. Log in Successfull\n");
                admin_menu();
                }
                else
                {

               printf("\n\t\t\t\t\tInvalid password\n");
               printf("\n\t\t\t\t\tDo you want to try again?(1-yes,0-no)");
               scanf("%d",&reply);
               if(reply==1)
               {
                for(count=0;count<2;count++)
                {
                system("clear");
                printf("\n\n\n\t\t\t\t\tPASSWORD:");
                scanf("%s",&password);
                if(strcmp(password,password_admin)==0)
                     {
                        printf("LOGIN SUCCESSFUL...");
                        admin_menu();
                     }
               }

             printf("\n\t\t\t\t\tMore than 2 attempts!!!!!");
             exit(0);
               }
               else
               {
                       exit(0);
               }

}
}
else
{
        printf("\n\t\t\t\t\tInvalid username\n");
        printf("\n\t\t\t\t\tDo you want to try again?(1-yes,0-no)");
        scanf("%d",&reply);
        if(reply==1)
        {
                for(count=0;count<2;count++)
                {
                        system("clear");
                        printf("\n\n\n\t\t\t\t\tUSERNAME:");
                        scanf("%s",&username);
                        if(strcmp(username,USER)==0)

                        {
                                printf("PASSWORD: ");
                                scanf("%s",&password);
                                 if(strcmp(password,password_admin)==0)
                                 {
                                         printf("LOGIN SUCCESSFUL...");
                                         admin_menu();
                                 }
                                 printf("Invalid password");
                        }

                        }



                printf("\n\t\t\t\t\tMore than 2 attempts!!!!!");
                exit(0);
        }

        else
        {
                exit(0);
        }

}
}

void user_audit()
{
         char username[60];
         char password[30];
         int reply;
         int count=0;
         system("clear");
         printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tLOGIN\n");
         printf("\t\t\t\t\tUSERNAME : ");
         scanf("%s",username);
         printf("\t\t\t\t\tPASSWORD : ");
         scanf("%s",password);
         if(strcmp(username,USER)==0)
         {
                  if(strcmp(password,password_audit)==0)
                                  {
                                  printf("\n\t\t\t\t\tWelcome. Log in Successfull\n");
                                  auditor_menu();
                                  }
                  else
                  {
                  printf("\n\t\t\t\t\t\tInvalid password\n");
                  printf("\n\t\t\t\t\tDo you want to try again?(1-yes,0-no)");
                  scanf("%d",&reply);
                  if(reply==1)
                  {
                          for(count=0;count<2;count++)
                          {
                                  system("clear");
                                  printf("\n\n\n\t\t\t\t\tPASSWORD:");
                                  scanf("%s",&password);
                                  if(strcmp(password,password_audit)==0)
                                  {
                                          printf("LOGIN SUCCESSFUL...");
                                          auditor_menu();
                                  }
                          }



                          printf("\n\t\t\t\t\tMore than 2 attempts!!!!!");
                          exit(0);
                  }
                  else
                  {

                          exit(0);
                  }
                  }
        }
         else
         {
         printf("\n\t\t\t\t\tInvalid username\n");
         printf("\n\t\t\t\t\tDo you want to try again?(1-yes,0-no)");
         scanf("%d",&reply);
         if(reply==1)
         {
                 for(count=0;count<2;count++)
                 {
                         system("clear");
                         printf("\n\n\n\t\t\t\t\tUSERNAME:");
                         scanf("%s",&username);
                         if(strcmp(username,USER)==0)
                         {
                                 printf("PASSWORD: ");
                                 scanf("%s",&password);
                                 if(strcmp(password,password_audit)==0)
                                 {
                                         printf("LOGIN SUCCESSFUL...");
                                         auditor_menu();
                                 }
                                 printf("Invalid password");
                         }


                 }

                 printf("\n\t\t\t\t\tMore than 2 attempts!!!!!");
                 exit(0);
         }
         else
         {
                 exit(0);
         }
         }
}


void user_employee()
{
char username[60];
char password[30];
int reply;
int count=0;
system("clear");
printf("\n\n\n\n\n\n\n\n\t\t\t\t\t   LOGIN\n\n\n\n\n\n");
printf("\t\t\t\t\tUSERNAME : ");
scanf("%s",username);
printf("\t\t\t\t\tPASSWORD : ");
scanf("%s",password);
 if(strcmp(username, USER)==0)
{
        if(strcmp(password,password_employee)==0)
        {
                printf("\n\t\t\t\t\tWelcome. Log in Successfull\n");
                employee_menu();
        }
        else
        {
                printf("\n\t\t\t\t\tInvalid password\n");
 printf("\n\t\t\t\t\tDo you want to try again?(1-yes,0-no)");
 scanf("%d",&reply);
 if(reply==1)
 {
         for(count=0;count<2;count++)
         {
                 system("clear");                                                                                                                                                        printf("\n\n\n\t\t\t\t\tPASSWORD:");                                                                                                                                    scanf("%s",&password);                                                                                                                                                  if(strcmp(password,password_employee)==0)                                                                                                                                  {                                                                                                                                                                               printf("LOGIN SUCCESSFUL...");                                                                                                                                          employee_menu();                                                                                                                                                   }                                                                                                                                                               }
         printf("\n\t\t\t\t\tMore than 2 attempts!!!!!");
         exit(0);
 }
 else
 {
         exit(0);
 }
}
}
else
{
        printf("\n\t\t\t\t\tInvalid username\n");
        printf("\n\t\t\t\t\tDo you want to try again?(1-yes,0-no)");
        scanf("%d",&reply);
        if(reply==1)
        {
                for(count=0;count<2;count++)
                {
                        system("clear");
                        printf("\n\n\n\t\t\t\t\tUSERNAME:");
                        scanf("%s",&username);
                        if(strcmp(username,USER)==0)
                        {
                                printf("\n\t\t\t\t\tPASSWORD: ");
                                scanf("%s",&password);
                                if(strcmp(password,password_employee)==0)
                                {
                                        printf("LOGIN SUCCESSFUL...");
                                        employee_menu();
                                }
                                printf("Invalid password");
                        }


                }

                printf("\n\t\t\t\t\tMore than 2 attempts!!!!!");
                exit(0);
        }
        else
        {
                exit(0);
        }
}

}

admin_menu()
{
        system("clear");
        int choice;
        printf("\n\n\n\n\n\n\n\t\t\t\tChoose Any.........\n.");
        printf("\t\t\t\t1. Add Employee\n\t\t\t\t2.Delete Employee\n\t\t\t\t3.Modify Employee Details\n\t\t\t\t4.Search an Employee\n\t\t\t\t5.Exit");
        scanf("%d",&choice);
        switch(choice)
        {
                case  1:
                        add_employee();

                        break;
                case 2:
                        delete_employee();
                        break;
                case 3:
                        edit_employee();
                        break;
                case 4:
                        search_employee();
                        break;
                case 5: system("clear");
                        printf("\n\n\t\t\tTHANK YOU!!!!!!!");
                        exit(0);

}
}


employee_menu()
{
        system("clear");
        int choice;
        printf("\n\n\n\n\n\n\n\t\t\t\tChoose any............\n.");
        printf("\t\t\t\t1. View pay slip\n\t\t\t\t2.View employee data\n\t\t\t\t3.Edit my data\n\t\t\t\t4.Exit ");
        scanf("%d",&choice);
        switch(choice)
        {
                case 1:
                        slip();
                        break;
                case 2:
                        employee_view();
                        break;

                 case 3:
                        employee_edit();
                        break;

                 case 4: system ("clear");
                         printf("\n\t\t\t\tthankyou!!!!!");
                         exit(0);
        }
}

auditor_menu()
{
int reply;
printf("Choose..............\n1.Search Employee\n2.Generate pay slip\n");
scanf("%d",&reply);
switch(reply)
{
case 1:search_employee();
break;
case 2:report();
break;
case 3:printf("Thank You!!!!!!!!!!!!!");
break;
default:printf("Invalid Option!!!!!!!!!!!!!1");
}
}



add_employee(void)
{
        char name[50];
        char address[100];
        char phone[11];
        char id[5];
        char id2[5];
        char passcode[5];
        char designation[20];
        float salary;
        float hours;
        int reply;
        FILE *fp;
        fp = fopen(EMP_FILE, "a+");
         do
         {
                 fscanf(fp, "%[^/]%*c%[^/]%*c%[^/]%*c%[^/]%*c%[^/]%*c%[^/]%*c %f %f%*c", name, address, phone, id, passcode, designation, &salary, &hours);
                 if(feof(fp))
                 {
                         break;
                 }
         }while(!(feof(fp)));

        system("clear");
        printf("Name: ");
        getchar();
        gets(name);
        printf("Address: ");
        gets(address);
        printf("Phone: ");
        gets(phone);
        printf("ID: ");
        gets(id);
        printf("Passcode: ");
        gets(passcode);
        printf("Designation: ");
        gets(designation);
        printf("Salary: ");
        fflush(stdin);
        scanf("%f", &salary);
        printf("Hours: ");
        fflush(stdin);
        scanf("%f", &hours);
        fprintf(fp,"%s/%s/%s/%s/%s/%s/%.2f %.2f\n", name, address, phone, id, passcode, designation, salary, hours);
        system("clear");
        printf("Done Entering New Record >>> ");
        sleep(1);

         fflush(fp);
         fclose(fp);

        system("clear");
        printf("\n\n\n\n\n\t\t\t\tPress\n\t\t\t\t\t1-Add more\n\t\t\t\t\t0-Go to menu\n");
        scanf("%d",&reply);
        if(reply==1)
        {
                add_employee();
        }
        else
        {
                admin_menu();
        }
}



edit_employee(void)
{
        int flag=0,try;
        char name[50];
        char address[100];
        char phone[11];
        char id2[5];
        char passcode[5];
        char designation[20];
        char id[5];
        char idEdit[5];
        float salary;
        float hours;
        int choice;
        int reply;
        FILE *fp1;


        FILE *fp2;
        fp1 = fopen(EMP_FILE, "r+");
        fp2 = fopen(TMP_FILE, "w+");
        system("clear");
        printf("Enter Employee ID to Edit : ");
        fflush(stdin);
        scanf("%s",idEdit);
        do
        {
                fscanf(fp1, "%[^/]%*c%[^/]%*c%[^/]%*c%[^/]%*c%[^/]%*c%[^/]%*c %f %f%*c", name, address, phone, id, passcode, designation, &salary, &hours);
                if(feof(fp1))
                {
                        break;
                }
                while((strcmp(id, idEdit)) == 0)
                {
                        flag=1;
                        system("clear");
                        printf("Enter new basic salary : ");
                        fflush(stdin);
                        scanf("%f", &salary);
                        printf("Enter the new number of hours worked : ");
                        fflush(stdin);
                        scanf("%f", &hours);
                        printf("press 1 to exit");
                        scanf("%d",&choice);
                        if(choice=1)
                        {
                                exit(0);
                        }
                }
                fprintf(fp2, "%s/%s/%s/%s/%s/%s/%.2f %.2f\n", name, address, phone, id, passcode, designation, salary, hours);
        }while(!(feof(fp1)));
        fflush(fp2);
        fclose(fp1);
        fclose(fp2);
        if(flag==0)
        {
                printf("ID not present\nTry again??\n1-Yes \n0-Exit");
                scanf("%d",&try);
                if(try==1)
                {
                        edit_employee();
                }
                else
                {
                        printf("Thank You");
                        exit(0);
                }
        }
        remove(EMP_FILE);
        rename(TMP_FILE, EMP_FILE);
        system("clear");
        printf("Done Editing >>> ");
        fflush(stdin);
        sleep(1);
         printf("\n\n\n\n\n\t\t\t\tPress\n\t\t\t\t\t1-Edit more\n\t\t\t\t\t0-Go to menu\n");
         scanf("%d",&reply);
         if(reply==1)
         {
                 edit_employee();
         }
         else
         {
                 admin_menu();
         }
}



void delete_employee(void)
{
        int flag=0,try;
        char name[50];
        char address[100];
        char phone[11];
        char id[5];
        char id2[5];
        char designation[20];
        char passcode[5];
        char idDel[5];
        float salary;
        int reply;

        float hours;
        FILE *fp1;
        FILE *fp2;
        fp1 = fopen(EMP_FILE, "r");
        fp2 = fopen(TMP_FILE, "w");
        system("clear");
        printf("Enter Employee ID to Delete : ");
        fflush(stdin);
        scanf("%s",&idDel);
        do
        {
                fscanf(fp1,"%[^/]%*c%[^/]%*c%[^/]%*c%[^/]%*c%[^/]%*c%[^/]%*c %f %f%*c", name, address, phone, id, passcode, designation, &salary, &hours);
                if(feof(fp1))
                {
                        break;
                }
                if((strcmp(id, idDel)) != 0)
                {
                        fprintf(fp2,"%s/%s/%s/%s/%s/%s/%.2f %.2f\n",name, address, phone, id, passcode, designation, &salary, &hours);
                }
                if((strcmp(id,idDel)==0))
                {
                        flag=1;
                }
        }while(!(feof(fp1)));
        fflush(fp2);
        fclose(fp1);
        fclose(fp2);
        if(flag==0)
        {
                printf("ID not present");
                printf("Try again??\n1-Yes\n0-Exit\n");
                scanf("%d",&try);
                if(try==1)
                {
                        delete_employee();
                }
                else
                {
                        printf("Thank You!!!!");
                        exit(0);
                }
        }
        remove(EMP_FILE);
        rename(TMP_FILE, EMP_FILE);
        system("clear");
        printf("Done Deleting >>> ");
        fflush(stdin);
        sleep(1);
        printf("\n\n\n\n\n\t\t\t\tPress\n\t\t\t\t\t1-Delete more\n\t\t\t\t\t0-Go to menu\n");
        scanf("%d",&reply);
        if(reply==1)
        {
                delete_employee();
        }
        else
        {
                admin_menu();
        }
}



void search_employee(void)
{
        int falg=0;
        int try;
        char name[50];
        char address[100];
        char phone[11];
        char id[5];
        char id2[5];
        char passcode[5];
        char designation[20];
        char idSearch[5];
        float salary;
        float hours;
        int reply;

        FILE *fp;
        fp = fopen(EMP_FILE, "r");
        system("clear");
        printf("Enter the Employee ID to Search : ");
        fflush(stdin);
        scanf("%s",&idSearch);
        do
        {
                fscanf(fp, "%[^/]%*c%[^/]%*c%[^/]%*c%[^/]%*c%[^/]%*c%[^/]%*c %f %f%*c", name, address, phone, id, passcode, designation, &salary, &hours);
                if(feof(fp))
                {
                        break;
                }
                 if((strcmp(id, idSearch)) == 0)
                                         {
                                                 flag=1;
                                                 system("clear");
                                                 printf("Name: %s\n", name);
                                                 printf("Address: %s\n", address);
                                                 printf("Phone: %s\n", phone);
                                                 printf("ID: %s\n", id);
                                                 printf("Salary: %.2f\n", salary);
                                                 printf("Hours: %.2f\n\n", hours);
                                                 printf("Press ENTER to continue >>> ");
                                                 fflush(stdin);
                                                 sleep(1);

                                         }
        }while(!(feof(fp)));
        fclose(fp);
        if(flag==0)
        {
                printf("ID not present");
                printf("try again???\n1-Yes\n0-Exit\n");
                scanf("%d",&try);
                if(try==1)
                {
                        search_employee();
                }
                else
                {
                        printf("Thank You");
                        exit(0);
                }
        }
         printf("\n\n\n\n\n\t\t\t\tPress\n\t\t\t\t\t1-search more\n\t\t\t\t\t0-Go to menu\n");
         scanf("%d",&reply);
         if(reply==1)
         {
                 search_employee();
         }
         else
         {
                 admin_menu();
         }
}

void employee_view(void)
{
        int flag=0,try;
        char name[50];
        char address[100];
        char phone[11];
        char id[5];
        char idSearch[5];
        float salary;
        float hours;
        FILE *fp;
        fp = fopen(EMP_FILE, "r");
        system("clear");
        printf("Enter Your Employee Id: ");
        fflush(stdin);
        scanf("%s",&idSearch);
        do
        {
                fscanf(fp, "%[^/]%*c%[^/]%*c%[^/]%*c%[^/]%*c%f %f%f", name, address, phone, id, &salary, &hours);
                if(feof(fp))
                {
                        break;
                }
                if((strcmp(id, idSearch)) == 0)
                {
                        flag=1;
                        system("clear");
                        printf("Name: %s\n", name);
                        printf("Address: %s\n", address);
                        printf("Phone: %s\n", phone);
                        printf("ID: %s\n", id);
                        printf("Salary: %.2f\n", salary);
                        printf("Hours: %.2f\n\n", hours);
                        fflush(stdin);
                        sleep(1);
                }
        }while(!(feof(fp)));
        fclose(fp);
       if(flag==0)
        {
                printf("ID not present");
                printf("try again???\n1-Yes\n0-Exit\n");
                scanf("%d",&try);
                if(try==1)
                {
                        employee_view();
                }
                else
                {
                        printf("Thank You");
                        exit(0);
                }
        }
}





void slip()
{
        int flag=0,try;
        char name[50];
        char id[5];
        char empid[5];
        float salary;
        float hours;
        float epf;
        float etf;
        float netSal;
        float ot,otHrs;
        FILE *fp;
         fp=fopen(SAL_FILE,"r+");
         system("clear");
         printf("Enter Employee ID to print : ");
         fflush(stdin);
         scanf("%s",empid);
         do
         {

                fscanf(fp,"%s %c  %f  %f  %f  %f  %f  %f  %f%*c", name, id, &salary, &hours, &otHrs, &ot, &epf, &etf, &netSal);
                if(feof(fp))
                {

                        break;
                }
                if((strcmp(id, empid)) == 0)
                {
                       flag=1;
                        system("clear");
                        printf("Name: %s\n", name);
                        printf("id: %5s\n", id);
                        printf("Basic Salary: %5.2f\n", salary);
                        printf("Total Hours: %3.2f\n", hours);
                        printf("OT Hours: %3.2f\n", otHrs);
                        printf("OT Amount: %3.2f\n", ot);
                        printf("EPF: %5.2f\n", epf);
                        printf("ETF: %5.2f\n", etf);
                        printf("Net Salary: %5.2f\n", netSal);
                        exit(0);
                }
        }while(!(feof(fp)));
        fclose(fp);
        if(flag==0)
        {
                printf("ID not present");
                printf("try again???\n1-Yes\n0-Exit\n");
                scanf("%d",&try);
                if(try==1)
                {
                        slip();
                }
                else
                {
                        printf("Thank You");
                        exit(0);
                }
        }
        printf("Done >>> ");
        fflush(stdin);
        sleep(1);
}



void report()
{
        char name[50];
        char address[100];
        int reply;
        int ch;
        char passcode[5];
        char designation[20];
        char phone[11];
        char id[5];
        char s;
        float salary;
        float hours;
        float epf;
        float etf;
        float netSal;
        float ot, otRate, otHrs;
        FILE *fp;
        FILE *fp1;
        FILE *fp2;
        fp = fopen(EMP_FILE, "r+");
        fp1= fopen(SAL_FILE, "w");






 printf("Do you want to add any allowances ? (1 for yes, 0 otherwise)\n");
 scanf("%d",&reply);
 if(reply==1)
 {
 printf("1.Festival allowance\n2.House allowance\n3.Travel allowance\n");
 scanf("%d",&ch);
system("clear");
 fprintf(fp1,"Name\tId\tSalary\t Hours\totHrs\tot\tepf\tetf\tnetSal\n");


        do
        {
                fscanf(fp, "%[^/]%*c%[^/]%*c%[^/]%*c%[^/]%*c%[^/]%*c%[^/]%*c %f %f%*c", name, address, phone, id, passcode, designation, &salary, &hours);
                if(feof(fp))
                {
                        break;
                }


                epf =salary * EPF_RATE;
                etf = salary  * ETF_RATE;
                otHrs = hours - GEN_TIME;
                otRate = salary / GEN_TIME;
                if(otHrs > 0)
                {
                        ot = otHrs * otRate;
                }
                else
                {
                        ot = 0;
                        otHrs = 0;
                }
                netSal = salary - (epf + etf) + ot;

                switch(ch)
                {
                        case 1:
                                {


                                        netSal=netSal + FEST_RATE;
                                        break;
                                }
                        case 2:
                                {


                                        netSal=netSal + HOU_RATE;
                                        break;
                                }
                        case 3:
                                {


                                        netSal=netSal + TRA_RATE;
                                        break;
                                }
                }



                fprintf(fp1,"%s %5s %5.2f %3.2f  %3.2f  %3.2f  %5.2f  %5.2f  %5.2f\n",name, id, salary, hours, otHrs, ot, epf, etf, netSal);
                printf("\n%s\t%5s  %5.2f  %3.2f  %3.2f  %3.2f  %5.2f  %5.2f  %5.2f",name, id, salary, hours, otHrs, ot, epf, etf, netSal);
                sleep(1);


        }while(!(feof(fp)));
        fclose(fp);
        fclose(fp1);



 }
 else
 {
         exit(0);
 }
}



void employee_edit()
{
        char reply;
        char name[50];
        char address[100];
        char phone[11];
        char id[5];
        char idEdit[5];
        float salary;
        float hours;
        FILE *fp1;
        FILE *fp2;
        fp1 = fopen(EMP_FILE, "r");
        fp2 = fopen(TMP_FILE, "w");
        system("clear");
        printf("Enter the employee ID to edit : ");
        fflush(stdin);
        scanf("%s",idEdit);
        do
        {
                fscanf(fp1,"%[^/]%*c%[^/]%*c%[^/]%*c%[^/]%*c%f %f%*c", name, address, phone, id, &salary, &hours);
                if(feof(fp1))
                {
                        break;
                }
                if((strcmp(id, idEdit)) == 0)
                {
                        system("clear");
                        printf("\n\n\n\n\n\t\t\t\t\tDo you want to change name??(Y/N)\n");
                        scanf("%s",&reply);
                        if(reply=='y' || reply=='Y')
                        {
                                        system("clear");
                                        printf("\n\n\n\n\n\t\t\t\t\tEnter new name : \n");
                                        scanf("%s",&name);
                        }
                        system("clear");
                                printf("\n\n\n\n\n\t\t\t\t\tDo you wnat to change Address ??\n");
                                scanf("%s",&reply);
                                 if(reply=='y' || reply=='Y')                                                                    {
                                         system("clear");
                                         printf("\n\n\n\n\n\t\t\t\t\tEnter new address : ");
                                         scanf("%s",&address);
                                 }
                                 system("clear");
                                 printf("\n\n\n\n\n\t\t\t\t\tDo you wnat to change phone no??");
                                 scanf("%s",&reply);
                                 if(reply=='y' || reply=='Y')
                                 {
                                         system("clear");
                                         printf("\n\n\n\n\n\t\t\t\t\tEnter new phone no");
                                         scanf("%s",&phone);
                                         break;
                                 }
                }
                fprintf(fp2,"%s/%s/%s/%s/%.2f%.2f\n",name,address,phone,id,salary,hours);
        }while(!(feof(fp1)));
        fflush(fp2);
        fclose(fp1);
        fclose(fp2);
        remove(EMP_FILE);
        rename(TMP_FILE, EMP_FILE);
        system("clear");
        printf("Done Editing>>> ");
        return 0;
}