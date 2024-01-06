#include<iostream>

using namespace std;

class Students{
    private:
    string college_name;
    string name;
    int rollno;
    int marks;

    public:
    void setData(string cn = "ITM")
    {   
        college_name=cn;

        cout<<"\n\n";

        cout<<"\ncollege name : "<<cn;

        cout<<"\nenter student name : ";
        cin>>name;

        cout<<"Enter student roll no. : ";
        cin>>rollno;

        cout<<"Enter student marks : ";
        cin>>marks;
        
    }

    void displayData()
    {

        cout<<"\n";

        cout <<"collage name : " << college_name << endl;
        cout <<"Name : " << name << endl;
        cout <<"Roll no. : " <<rollno << endl;
        cout <<"Marks : " << marks << endl;
    }

};


int main(){

    Students s1,s2,s3;
    s1.setData();
    s2.setData();
    s3.setData();

    s1.displayData();
    s2.displayData();
    s3.displayData();

    return 0;
}

