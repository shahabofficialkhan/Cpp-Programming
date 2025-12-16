#include <iostream>
#include <string>
using namespace std;
class person
{
  public :
    string name;
    int id;
    void getdata()
    {
        cout << "name ";
        cin >> name;
        cout << "id ";
        cin >> id;
        cout << "name " << name << " id " << id << endl;
    }
};
int main()
{
    person p;
    p.getdata();
    return 0;
}