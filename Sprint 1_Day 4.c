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
                int reply;
                printf("\n\n\n\n\n\n\n\t\t\t\t\tWELCOME TO\n");
                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                printf("\n\t\t\t\t\t\tPAYROLL MANAGEMENT SYSTEM\n");
                printf("\n\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                printf("\n\n\n\n\n\n\nPress Any Key To Continue......\n");
                scanf("%d",&reply);
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
                }
        }
        else
        {
                printf("\n\t\t\t\t\tInvalid username\n");
        }

}

void user_audit()
{
         char username[60];
         char password[30];
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
                  }
        }
         else
         {
         printf("\n\t\t\t\t\tInvalid username\n");
         }
}


void user_employee()
{
char username[60];
char password[30];
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
        }                                                                                                                else

        {
                printf("\n\t\t\t\t\tInvalid password\n");
        }
}
else
{
        printf("\n\t\t\t\t\tInvalid username\n");
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
report();
}





void add_employee(void)
{
        char name[50];
        char address[100];
        char phone[11];
        char id[5];
        float salary;
        float hours;
        FILE *fp;
        fp = fopen(EMP_FILE, "a+");
        do
        {
                fscanf(fp, "%[^/]%*c%[^/]%*c%[^/]%*c%[^/]%*c%f %f%*c", name, address, phone, id, &salary, &hours);
                if(feof(fp))
                {
                        break;
                }
        }while(!(feof(fp)));
        system("clear");
        printf("Name: ");
        fflush(stdin);
        scanf("%s",&name);
        printf("Address: ");
        fflush(stdin);
        scanf("%s",&address);
        printf("Phone: ");
        fflush(stdin);
        scanf("%s",&phone);
        printf("ID: ");
        fflush(stdin);
        scanf("%s",&id);
        printf("Salary: ");
        fflush(stdin);
        scanf("%f", &salary);
        printf("Hours: ");
        fflush(stdin);
        scanf("%f", &hours);
        fprintf(fp, "%s/%s/%s/%s/%.2f %.2f\n", name, address, phone, id, salary, hours);
        fflush(fp);
        fclose(fp);
        system("clear");
        printf("Done Entering New Record >>> ");
        sleep(2);
}


edit_employee(void)
{
        char name[50];
        char address[100];
        char phone[11];
        char id[5];
        char idEdit[5];
        float salary;
        float hours;
        int choice;
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
                fscanf(fp1, "%[^/]%*c%[^/]%*c%[^/]%*c%[^/]%*c%f %f%*c", name, address, phone, id, &salary, &hours);
                if(feof(fp1))
                {
                        break;
                }
                while((strcmp(id, idEdit)) == 0)
                {
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
                fprintf(fp2, "%s/%s/%s/%s/%.2f %.2f\n", name, address, phone, id, salary, hours);
        }while(!(feof(fp1)));
        fflush(fp2);
        fclose(fp1);
        fclose(fp2);
        remove(EMP_FILE);
        rename(TMP_FILE, EMP_FILE);
        system("clear");
        printf("Done Editing >>> ");
        fflush(stdin);
        sleep(1);
}



void delete_employee(void)
{
        char name[50];
        char address[100];
        char phone[11];
        char id[5];
        char idDel[5];
        float salary;

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
                fscanf(fp1, "%[^/]%*c%[^/]%*c%[^/]%*c%[^/]%*c%f %f%*c", name, address, phone, id, &salary, &hours);
                if(feof(fp1))
                {
                        break;
                }
                if((strcmp(id, idDel)) != 0)
                {
                        fprintf(fp2, "%s/%s/%s/%s/%.2f %.2f\n", name, address, phone, id, salary, hours);
                }
        }while(!(feof(fp1)));
        fflush(fp2);
        fclose(fp1);
        fclose(fp2);
        remove(EMP_FILE);
        rename(TMP_FILE, EMP_FILE);
        system("clear");
        printf("Done Deleting >>> ");
        fflush(stdin);
        sleep(2);
}



void search_employee(void)
{
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
        printf("Enter the Employee ID to Search : ");
        fflush(stdin);
        scanf("%s",&idSearch);
        do
        {
                fscanf(fp, "%[^/]%*c%[^/]%*c%[^/]%*c%[^/]%*c%f %f%*c", name, address, phone, id, &salary, &hours);
                if(feof(fp))
                {
                        break;
                }
                 if((strcmp(id, idSearch)) == 0)
                                         {
                                                 system("clear");
                                                 printf("Name: %s\n", name);
                                                 printf("Address: %s\n", address);
                                                 printf("Phone: %s\n", phone);
                                                 printf("ID: %s\n", id);
                                                 printf("Salary: %.2f\n", salary);
                                                 printf("Hours: %.2f\n\n", hours);
                                                 printf("Press ENTER to continue >>> ");
                                                 fflush(stdin);
                                                 sleep(2);
                                         }
        }while(!(feof(fp)));
        fclose(fp);
}

void employee_view(void)
{
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
}




void slip(void)
{
        char name[50];
        char address[100];
        char phone[11];
        char id[5];
        char empid[5];
        int reply;
        float salary;
        float hours;
        float epf;
        float etf;
        float netSal;
        float ot, otRate, otHrs;
        FILE *fp;
        fp = fopen(EMP_FILE, "r+");
        system("clear");
        printf("Enter Employee ID to print : ");
        fflush(stdin);
        scanf("%s",empid);
        do
        {
                fscanf(fp, "%[^/]%*c%[^/]%*c%[^/]%*c%[^/]%*c%f %f%*c", name, address, phone, id, &salary, &hours);
                if(feof(fp))
                {
                        break;
                }
                if((strcmp(id, empid)) == 0)
                {
                        epf = salary * EPF_RATE;
                        etf = salary * ETF_RATE;
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
                        system("clear");
                        printf("Name: %s\n", name);
                        printf("Address: %s\n", address);
                        printf("Phone: %s\n", phone);
                        printf("id: %s\n", id);
                        printf("Basic Salary: %.2f\n", salary);
                        printf("Total Hours: %.2f\n", hours);
                        printf("OT Hours: %.2f\n", otHrs);
                        printf("OT Rate: %.2f\n", otRate);
                        printf("OT Amount: %.2f\n", ot);
                        printf("EPF: %.2f\n", epf);
                        printf("ETF: %.2f\n", etf);
                        printf("Net Salary: %.2f\n", netSal);
                }
        }while(!(feof(fp)));
        fclose(fp);
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
        fp2=fopen(SAL_FILE, "r+");

        printf("Do you want to add any allowances ? (1 for yes, 0 otherwise)\n");
       scanf("%d",&reply);
       if(reply==1)
       {
               printf("1.Festival allowance\n2.House allowance\n3.Travel allowance\n");
               scanf("%d",&ch);
               system("clear");



               do
               {
                       fscanf(fp, "%[^/]%*c%[^/]%*c%[^/]%*c%[^/]%*c%f %f", name, address, phone, id, &salary, &hours);
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


                fprintf(fp1,"Name\t    Id\tSalary\t Hours\totHrs\tot\tepf\tetf\tnetSal\n");
                fprintf(fp1," %s  %5s %5.2f  %3.2f   %3.2f   %3.2f  %5.2f  %5.2f  %5.2f \n",name, id, salary, hours, otHrs, ot, epf, etf, netSal);
                printf(" %s  %5s %5.2f  %3.2f   %3.2f   %3.2f  %5.2f  %5.2f  %5.2f \n",name, id, salary, hours, otHrs, ot, epf, etf, netSal);
                sleep(1);


        }while(!(feof(fp)));
        fclose(fp);

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