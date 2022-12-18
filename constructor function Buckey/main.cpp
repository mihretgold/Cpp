#include <iostream>
#include <string>

using namespace std;

class MihretsClass{
    public:
        MihretsClass(string z){
            setName(z);
        }
        void setName(string x){
        name = x;
        }
        string getName(){
        return name;
        }
    private:
    string name;
};

int main()
{
  MihretsClass mo("mi lucky day");
  cout << mo.getName();
  MihretsClass mo2("mi very lucky day");
  cout << mo2.getName();
    return 0;
}
