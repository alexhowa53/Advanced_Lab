#include "Person.h"

Person::Person() : nWeight(0.0f), nFirstname(""),mAge(0) {}  



Person::Person(string firstname, float neWeight, int age)
:nWeight(neWeight), nFirstname(firstname), mAge(age){

}

Person::~Person() {
}


Person Person::operator+(const Person& other) {
    return Person(nFirstname, nWeight+other.nWeight, mAge);

}
bool Person::operator==(const Person& other) {
    return this->nFirstname == other.nFirstname;

}
bool Person ::operator!=(const Person& other) {
    return this->nFirstname != other.nFirstname;

}
bool Person::operator<(const Person& other) {
    return this->mAge < other.mAge;

}
bool Person::operator>(const Person& other) {
    return this->mAge > other.mAge;

}
Person::operator int(){
    return mAge;
}
Person::operator string(){
    return nFirstname;
}
Person::operator float() {
    return nWeight;
}
