#include <iostream>
#include <string>

using namespace std;

class myclass{
public:
    /*myclass(){
    cout << "Hey";
    }*/
   /* myclass(string nm){
    setName(nm);
    }
    void setName(string x){
    name = x;
    }
    string getName(){
    return name;
    }
private:
    string name;*/
    class Painting {
    public:
        //define the constructor
        Painting(string name){
            setName(name);
        }
        void setName(string x){
            nm = x;
        }
        string getName(){
            return nm;
        }
        private:
        string nm;

};
int main()
{
   /* myclass myobj("David");
    myclass myobj2("Mihret");
    cout << myobj.getName();
    cout << myobj2.getName();*/
    string name;
    cin >> name;

    Painting painting(name);
    cout << painting.getName();

    return 0;
}
/*#include <iostream>
using namespace std;

class Queue {
	int size;
	int* queue;

	public:
	Queue() {
		size = 0;
		queue = new int[100];
	}
	void remove() {
		if (size == 0) {
			cout << "Queue is empty"<<endl;
			return;
		}
		else {
			for (int i = 0; i < size - 1; i++) {
				queue[i] = queue[i + 1];
			}
			size--;
		}
	}
 void print() {
		if (size == 0) {
			cout << "Queue is empty"<<endl;
			return;
		}
		for (int i = 0; i < size; i++) {
			cout<<queue[i]<<" <- ";
		}
		cout <<endl;
	}
	//your code goes here
 void add( int newData ) {

     if( size != 0 || size != 100 ) {

          size++; //increment size
          queue[size-1] = newData; //make new element as the last element

      }

}
};

int main() {
	Queue q;
	q.add(42); q.add(2); q.add(8); q.add(1);
	q.print();
	q.remove();
	q.add(128);
	q.print();
	q.remove();
	q.remove();
	q.print();

	return 0;
}*/
