#include "Contact.h"

Contact getAContact()
{

    Contact con;

    char gender, phone_type, user_carrier;
    int use_mobilephone = 0, use_landline = 0;

    printf("Name: ");
    scanf("%s %s", con.name.firstname, con.name.lastname);

    printf("Gender (M/F): ");
    scanf(" %c", &gender);

    switch(gender)
    {

        case 'F':

            con.gender = Female;
            break;

        case 'M':

            con.gender = Male;
            break;

    }

    printf("Birthday (YYYY/MM/DD): ");
    scanf("%d/%hd/%d", con.birthday.year, con.birthday.month, con.birthday.day);

    printf("Phone Type (L/M): ");
    scanf(" %c", &phone_type);

    switch(phone_type)
    {

        case 'L':

            con.phonetype = LandLine;
            break;

        case 'M':

            con.gender = MobilePhone;
            use_mobilephone = 1;
            break;

    }

    printf("Number: ");
    
    if(use_landline == 1)
    {

        scanf("(%d)%d", con.phone.landline.areacode, con.phone.landline.number);
        use_landline = 0;

    }
    else
    {

        scanf("%d", con.phone.mobile.number);

    }

    if(use_mobilephone == 1)
    {

        printf("Carrier (C/T/F): ");
        scanf("%c", &user_carrier);

        switch(user_carrier)
        {

            case 'C':

                con.phone.mobile.carrier = CHT;
                break;

            case 'T':

                con.phone.mobile.carrier = TWN;
                break;

            case 'F':

                con.phone.mobile.carrier = FET;
                break;

        }

        use_mobilephone = 0;

    }

    printf("Address: ");
    scanf(" %s", con.address);

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

    switch(c.birthday.month)
    {



    }

    printf("%s %s (%s) %s %d", c.name.firstname, c.name.lastname, c.gender, Month[c.birthday.month - 1], c.birthday.day)

}

void sortContacts(Contact cs[])
{

    
    
}