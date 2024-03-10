#include<iostream>
using namespace std;

float experiment(){
    float exp[4];
    cout<<endl;
    for(int i=0;i<4;i++){
        cout<<"Enter Marks of Expeiment"<<i+1<<": ";
        cin>>exp[i];
    }
    float sum=0;
    for(int i=0;i<4;i++){
        sum=sum+exp[i];
    }
    return sum;   
}

float mst(){
    float mst[2];
    cout<<endl;
    for(int i=0;i<2;i++){
        cout<<"Enter Marks of MST"<<i+1<<": ";
        cin>>mst[i];
    }
    float smst=0;
    for(int j=0;j<2;j++){
        smst=smst+mst[j];
    }
    return smst;
}

float sp(){
    float st;
    cout<<endl;
    cout<<"Enter Marks of Surprise Test:";
    cin>>st;

    return st;
}

float quiz(){
    float q;
    cout<<endl;
    cout<<"Enter Marks of Quiz:";
    cin>>q;

    return q;
}

float assignment(){
    float a;
    cout<<endl;
    cout<<"Enter Marks of Assignment:";
    cin>>a;

    return a;
}

float class_per(){
    float cp;
    cout<<endl;
    cout<<"Enter Marks of Class Performance:";
    cin>>cp;

    return cp;
}

float project(){
    float proj;
    cout<<endl;
    cout<<"Enter Marks of Course Project:";
    cin>>proj;

    return proj;
}

float Fpractical(){
    float f;
    cout<<endl;
    cout<<"Enter Marks of Final Practical:";
    cin>>f;

    return f;
}

int attendence(){
    int att;
    cout<<endl;
    cout<<"Have you 90% or above Attendence (1/0):";
    cin>>att;
    if(att=1){
        return (++att);
    }
    else{
        return 0;
    }
};

int main(){
    cout<<"\nHey!! Welcome to Internal Marks Calculator"<<endl;
    cout<<"Please!! Enter Your Name:";
    string n;
    cin>>n;

    cout<<"\nPress 1: Java or DS\nPress 2: Maths or Physics\n"<<endl;
    int num;
    cout<<"Kindly!! Enter Your Choice:";
    cin>>num;

    switch(num){
        case 1:{
            cout<<"Hybrid Paper Internal Marks Calculator:"<<endl;
            float mst_=(mst()/40)*10;
            float exp=(experiment()/120)*20;
            float performance=(class_per()/10)*2.5;
            float proj=(project()/10)*7.5;
            float assignment_=(assignment()/10)*5;
            float quiz_=(quiz()/4)*2;
            float surprise=(sp()/12)*2;
            float final_prac=(Fpractical()/40)*20;
            float attendence_=(attendence()/2)*1;

            float total=mst_+exp+performance+proj+surprise+quiz_+assignment_+final_prac+attendence_;
            cout<<"\nTotal:"<<total<<" (out of 70)";
            break;
        }

        case 2:{
            cout<<"Theory Paper Internal Marks Calculator:"<<endl;
            float mst_=(mst()/40)*20;
            float surprise=(sp()/12)*4;
            float quiz_=(quiz()/4)*4;
            float assignment_=(assignment()/10)*10;
            float attendence_=(attendence()/2)*2;

            float total=mst_+surprise+quiz_+assignment_+attendence_;
            cout<<"\nTotal:"<<total<<" (out of 40)";     
            break;     
        }

        default:{
            cout<<"Invalid Choice";
            break;
        }
    }
    return 0;
}


