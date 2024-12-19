#include<iostream>
//#include<conio.h>
using namespace std;

//function declearation
float caltavg(float g[8]);

int main()
{
    struct Student{
        string name;
        float grades[4];
        float average;
    }id[3];
//1st student
    id[0].name="momina";
    id[0].grades[0]=20;
    id[0].grades[1]=25;
    id[0].grades[2]=30;
    id[0].grades[3]=13;
    id[0].average=caltavg(id[0].grades);
//2nd student
    id[1].name="malika";
    id[1].grades[0]=28;
    id[1].grades[1]=15;
    id[1].grades[2]=14;
    id[1].grades[3]=19;
    id[1].average=caltavg(id[1].grades);
//3rd student
    id[2].name="javeria";
    id[2].grades[0]=21;
    id[2].grades[1]=15;
    id[2].grades[2]=30;
    id[2].grades[3]=13;
    id[2].average=caltavg(id[2].grades);

//result
    for (int i = 0; i < 3; i++) {
        cout << "Student Name: " << id[i].name << endl;
        cout << "Grades: ";
        for (int j = 0; j < 4; j++) {
            cout << id[i].grades[j] << " ";
        }
        cout << endl;
        cout << "Average: " << id[i].average << endl << endl;
    }


return 0;
}

//function defination
float caltavg(float g[4]){
    int i=0;
    float avg=0;
    for (i=0;i<4;i++){
        avg=avg+g[i];
    }
    return avg/4;
}
