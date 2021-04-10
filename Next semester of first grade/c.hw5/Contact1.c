#include "Contact.h"

Contact getAContact()
{

    Contact c;

    char input_gender;
    char input_phone_type;

    printf("Name: ");
    scanf("%s %s", c.name.firstname, c.name.lastname);

    printf("Gender (M/F): ");
    scanf(" %c", &input_gender);

    switch(input_gender)
    {

        case 'M':

            c.gender = Male;
            break;

        case 'F':

            c.gender = Female;
            break;

    }

    printf("Birthday (YYYY/MM/DD): ");
    scanf("%hd/%d/%hd", &c.birthday.year, &c.birthday.month, &c.birthday.day);
    c.birthday.month --;

    printf("Phone Type (L/M): ");
    scanf(" %c", &input_phone_type);

    switch(input_phone_type)
    {

        case 'L':

            c.phonetype = LandLine;
            break;

        case 'M':

            c.phonetype = MobilePhone;
            break;

    }

    return c;

}

int check(Contact a, Contact b)
{

    if(a.birthday.year < b.birthday.year)
    {

        return 1;

    }
    else
    {

        if(a.birthday.month < b.birthday.month)
        {

            return 1;

        }
        else
        {

            if(a.birthday.day < b.birthday.day)
            {

                return 1;

            }

        }

    }

    return 0;

}

void showAContact(Contact c)
{



}

void sortContacts(Contact cs[])
{


    
}