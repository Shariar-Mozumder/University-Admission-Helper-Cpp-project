#include<iostream>
#include<windows.h>

using namespace std;

class varsity
{

    string vname="Noakhali Science & Technology University";
    int vdept=22;
    int vfaculty=5;
    int vstudents=60000;
    string vwebsite="nstu.edu.bd";
public:
    void mvname(string vn){vn=vname;}
    void mvdept(int vd){vd=vdept;}
    void mvfaculty(int vf){vf=vfaculty;}
    void mvwebsite(string vw){vw=vwebsite;}
    void show();
};

//system("start link");
void varsity::show()
{
    cout<<"         "<<vname<<endl<<endl<<endl<<endl;
    cout<<"         "<<"Amount of faculty: "<<vfaculty<<endl;
    cout<<"         "<<"Total Students: "<<vstudents<<endl;
    cout<<"         "<<"Official Website: "<<vwebsite<<endl<<endl<<endl<<endl;
    cout<<"         "<<"0.Exit"<<endl;
    cout<<"         "<<"1.Amount of department: "<<vdept<<endl;
    cout<<"         "<<"2.Easiest Path"<<endl;
    cout<<"         "<<"3.Emergency Phone Numbers"<<endl;
    cout<<"         "<<"4.Admission"<<endl;
    cout<<"         "<<"5.Main menu"<<endl;

}
class department:protected varsity
{
    void dname()
    {
    cout<<"1: Computer Science & Telecommunication Engineering"<<endl;
    cout<<"2: Applied Chemistry & Chemical Engineering"<<endl;
    cout<<"3: Applied Mathematics"<<endl;
    cout<<"4: Information & Communication Engineering"<<endl;
    cout<<"5: Electrical & Electronics Engineering"<<endl;
    cout<<"6: Software Engineering"<<endl;
    cout<<"7: Pharmacy"<<endl;
    cout<<"8: Fisheries & Marine Science"<<endl;
    cout<<"9: Microbiology"<<endl;
    cout<<"10: Environmental science & Disaster Management"<<endl;
    cout<<"11: Biotechnology & Genetic Engineering"<<endl;
    cout<<"12: Management Information System"<<endl;
    cout<<"13: Tourism & Hospitality Management"<<endl;
    cout<<"14: Business Administration"<<endl;
    cout<<"15: Economics"<<endl;
    cout<<"16: Education"<<endl;
    cout<<"17: Bangla"<<endl;
    cout<<"18: English"<<endl;
    cout<<"19: BLWS"<<endl;
    cout<<"20: Food Technology & Nutrition Science"<<endl;
    cout<<"21: Sociology"<<endl;
    cout<<"22: Biochemistry"<<endl;

    }
    /*string dname20=
    string dname21=
    string dname22=
    string dname23=
    string dname24=
    string dname25=*/
    int dstudent=50;
public:
    void mdname(){dname();}

    void mdstudent(int s){s=dstudent;}
    void show1();
};
void department::show1()
{
    cout<<"department Name:"<<endl;
    dname();
    cout<<endl<<endl;
    cout<<"Student in each department: "<<dstudent<<endl<<endl<<endl<<endl;
}
class street:protected varsity
{
    double disfromdhaka=250;
    double timetogo=5;
    int cost=350;
    string path="From Dhaka,>>Have a sit in HIMACHAL bus service >> Get down on SHONAPUR ZERO POINT >> get auto for NSTU";
public:
    void mdisfromdhaka(double md){md=disfromdhaka;}
    double mtimetogo(double t){t=timetogo;}
    void mcost(int c){c=cost;}
    void paths(string p){
    p=path;}
    void show2();
};
void street::show2()
{
    cout<<"         "<<"Distance From Dhaka(km):"<<disfromdhaka<<endl;
    cout<<"         "<<"Time to go from Dhaka(Hour): "<<timetogo<<endl;
    cout<<"         "<<"Cost from Dhaka(TAKA): "<<cost<<endl;
    cout<<"         "<<"Easiest Path: "<<path<<endl<<endl<<endl<<endl;
}
class emergency:protected varsity
{
    string phoneofproctor="Dr.Mushfiqur Rahman, phone: 01818085418";
    string phoneofpolice="01817507134";
public:
    void mphoneofproctor(string pr){pr=phoneofproctor;}
    void mphoneofpolice(string pp){pp=phoneofpolice;}
    void show3();
};
void emergency::show3()
{
    cout<<"     "<<"Phone number of Proctor: "<<phoneofproctor<<endl;
    cout<<"     "<<"Phone number of Local Police Station: "<<phoneofpolice<<endl<<endl<<endl<<endl;
}
class admission:protected varsity
{
    string date="5/12/18";
    string circular="www.circuler.com";
public:
    void mdate(string d){d=date;}
    void mcircular(string c){c=circular;}
    void show4();
};
void admission::show4()
{
    cout<<"     "<<"Admission Date: "<<date<<endl;
    cout<<"     "<<"Circular site: "<<circular<<endl<<endl<<endl<<endl;
}



int main(){

    varsity v;
    department d;
    street s;
    emergency e;
    admission a;
    cout<<"                     ********************************************************************************"<<endl;
    cout<<"                                     "<<"WELLCOME TO UNIVERSITY ADMISSION INFO(UAI) "<<endl;
    cout<<"                     ********************************************************************************"<<endl;
    cout<<endl<<endl<<"Prepared by: "<<endl;
    cout<<"                          1. Shariar Hossain"<<endl;
    cout<<"                          2. Md. Sifatul Islam"<<endl;
    cout<<"                          3. Md. Jahidul Islam"<<endl;
    cout<<"                          4. Md. Abdur Rahman"<<endl;
    cout<<"                          5. Md. Ashikur RAhman"<<endl;
    cout<<"                     *********************************************************************************"<<endl<<endl<<endl<<endl;
    cout<<"     "<<"Enter the serial number for select a university"<<endl<<"1.NSTU"<<endl;
    int n,m,k,j;
    cin>>n;
    system("cls");
    if(n==1){
        v.show();
        cout<<"         "<<"ENter a number for select option:1,2,3,4"<<endl<<endl;

        while(cin>>m!=0)
{


            if(m==1){
                system("cls");
                d.show1();
                v.show();

            }
            if(m==2){
                system("cls");
                s.show2();
                v.show();

            }
            if(m==3){
                system("cls");
                e.show3();
                v.show();

            }
            if(m==4){
                system("cls");
                a.show4();
                v.show();
            }
            if(m==5){
                system("cls");
                main();
            }
            if(m==0){
                return 0;

            }
}

    }
}


