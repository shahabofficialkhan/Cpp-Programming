#include <iostream>
#include <string>
using namespace std;
struct person
{ private :
    string name;
    int id;
    void getdata(){
        cout << "name ";
        cin >> name ;
        cout << "id ";
        cin >> id ;

    }
};
//   person{

//  };
int main()
{
    person p[2];
    // for (int i = 1; i < 2; i++)
    // {
    //     cout << "enter name ";
    //     cin >> p[i].name;
    //     cout << "enter id ";
    //     cin >> p[i].id;
    // }

    // for (int x = 1; x <= 2; x++)
    // { 
    //     cout << p[x].name << p[x].id <<endl;
    // }
    return 0;
}