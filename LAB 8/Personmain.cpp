#include "Person.h"
int main() {

    Person Jane = Person("Jane", 60.0f, 25);
    Person John = Person("John", 75.0f, 30);

    float totalWeight = Jane + John;

    cout<<"total weight:" << totalWeight << endl;

    if (Jane == John){
        cout << "This is NOT the same Person" << endl;
    }
    if(Jane != John){
        cout << "This is Not the same person" <<endl; 
    }
    if(Jane < John){
        cout << "Jane is younger than John " <<endl; 
    }
    if(Jane > John){
        cout << "Jane is older than Jane" <<endl; 
    }
    int JohnAge = John;
    cout << "John's Age: " << JohnAge <<endl;
    string JaneFirstName = Jane;
    cout << "Jane' First name" << JaneFirstName <<endl;
    float JaneWeight = Jane;
    cout << "Jane' weight " << JaneWeight << endl;

    return 0;


}