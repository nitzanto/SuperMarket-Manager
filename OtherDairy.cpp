#include "OtherDairy.h"

const float OtherDairy::calcPrice() const
{
    return Dairy::getPrice() + (this->getNumOfNonDiary() * 5);
}

// type 4 of Dairy
OtherDairy::OtherDairy() : Dairy(4), numOfNonDiary(0)
{
    string name;

    cout << "Please enter how many non diary compoments there are: " << endl;
    cin >> this->numOfNonDiary;

    if (this->getNumOfNonDiary() > 0)
    {
        for (int i = 0; i < this->getNumOfNonDiary(); i++)
        {
            cout << "Please enter the " << i << " non-diary compoment" << endl;
            cin >> name;
            this->nonD.push_back(name);
        }
    }

    this->price = calcPrice();
}

void OtherDairy::print() const
{
    Dairy::print();

    if (nonD.size() > 0)
    {
        for (int i = 0; i < this->getNumOfNonDiary(); i++)
        {
            cout << nonD[i];

            if (i != this->getNumOfNonDiary())
                cout << ", ";
        }
    }

    cout << "(" << this->getNumOfNonDiary() << ")" << endl;
}
