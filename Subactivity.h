#ifndef SUB_ACTIVITY_H
#define SUB_ACTIVITY_H

#include <string>
#include <vector>

using namespace std;




class Subactivity
{


public:
    Subactivity();
    ~Subactivity();
    string getName_subActivity() const;
    void setName_subActivity(const string &value);




private:
    string nameSubActivity;

};

#endif // SUB_ACTIVITY_H
