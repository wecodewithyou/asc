#include<iostream>
using namespace std;

struct student
{
   int reg_no;
   char name[20];
   int ce,pe,te;
};

void marklist( )
{
   student s[50];
   int n,i,tot_score[50];
   cout<<”Enter the number of students :”;
   cin>>n;
   for(i=0;i<n;i++)
   {
      cout<<”Enter the register number :”;
      cin>>s[i].reg_no;
      cout<<”Enter the name :”;
      cin.getline(s[i].name,20);
      cout<<”Enter the scores in C.E,P.E and T.E. :”
      cin>>s[i].ce>>s[i].pe>>s[i].te;
      tot_score[i]=s[i].ce+s[i].pe+s[i].te;
   }
   cout<<”The student details are......\n”;
   for(i=0;i<n;i++)
   {
      cout<<”Register Number :”<<s[i].regno<<”\n”;
      cout<<”Name :”<<s[i].name<<”\n”;
      cout<<”C.E. score :”<<s[i].ce<<”\n”;
      cout<<”P.E. score :”<<s[i].pe<<”\n”;
      cout<<”T.E. score :”<<s[i].te<<”\n”;
      cout<<”Total score :”<<tot_score[i];
   }
   return 0;
}
