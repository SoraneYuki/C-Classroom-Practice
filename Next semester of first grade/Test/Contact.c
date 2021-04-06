#include "Contact.h"

Contact getAContact()
{

    Contact con;

    printf("Name: ");
    scanf("%s %s", con.name.firstname, con.name.lastname);

    

    return con;

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