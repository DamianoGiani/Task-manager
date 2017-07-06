#include "Subactivity.h"
#include <string>
#include <vector>

Subactivity::Subactivity()
{

}

Subactivity::~Subactivity()
{

}

string Subactivity::getName_subActivity() const
{
    return nameSubActivity;
}

void Subactivity::setName_subActivity(const string &value)
{
    nameSubActivity = value;
}



