#ifndef __CSC_H_INCLUDED__
#define __CSC_H_INCLUDED__

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
   cout << "\n Marklist:- " << endl;
   cout << " Enter the number of students : ";
   cin >> n;
   for(i=0;i<n;i++)
   {
      cout <<" Enter the register number : ";
      cin >> s[i].reg_no;
      cin.ignore();
      cout <<" Enter the name : ";
      cin.getline(s[i].name,20);
      cout <<" Enter the scores in C.E,P.E and T.E. : ";
      cin >> s[i].ce >> s[i].pe >> s[i].te;
      tot_score[i] = s[i].ce + s[i].pe + s[i].te;
   }
   cout<<" The student details are......\n";
   for(i=0;i<n;i++)
   {
      cout<< " Register Number : " <<s[i].reg_no<<endl;
      cout<< " Name : " <<s[i].name<<endl;
      cout<< " C.E. score : "<<s[i].ce <<endl;
      cout<< " P.E. score : "<<s[i].pe<<endl;
      cout<< " T.E. score : "<<s[i].te<<endl;
      cout<< " Total score : "<<tot_score[i];
   }
}

#endif
