#include "Contact.h"

Contact getAContact()
{

    Contact con;

    char gender, phone_type, user_carrier;
    int use_mobilephone = 0, use_landline = 0, MM;

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
    scanf(" %hd/%d/%hd", &con.birthday.year, &MM, &con.birthday.day);
    con.birthday.month = MM - 1;

    printf("Phone Type (L/M): ");
    scanf(" %c", &phone_type);

    switch(phone_type)
    {

        case 'L':

            con.phonetype = LandLine;
            use_landline = 1;
            break;

        case 'M':

            con.phonetype = MobilePhone;
            use_mobilephone = 1;
            break;

    }

    printf("Number: ");
    
    if(use_landline == 1)
    {

        scanf(" (%[^)])%s", con.phone.landline.areacode, con.phone.landline.number);
        use_landline = 0;

    }
    else
    {

        scanf(" %s", con.phone.mobile.number);

    }

    if(use_mobilephone == 1)
    {

        printf("Carrier (C/T/F): ");
        scanf(" %c", &user_carrier);

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
    scanf(" %[^\n]", con.address);

    printf("\n");

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
    
    char *MMdisplay[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    printf("%s %s ", c.name.firstname, c.name.lastname);
    
    switch(c.gender)
    {

        case Male:

            printf("(Male) ");
            break;

        case Female:

            printf("(Female) ");
            break;

    }

    printf("%s ", MMdisplay[c.birthday.month]);
    printf("%d", c.birthday.day);

    switch(c.birthday.day)
    {

        case 1:
        case 21:
        case 31:

            printf("st,");
            break;

        case 2:
        case 22:

            printf("nd,");
            break;

        case 3:
        case 23:

            printf("rd,");
            break;

        default:

            printf("th,");
            break;

    }

    printf(" %d, ", c.birthday.year);

    switch(c.phonetype)
    {

        case LandLine:

            printf("(%s)%s, ", c.phone.landline.areacode, c.phone.landline.number);
            break;

        case MobilePhone:

            printf("%s", c.phone.mobile.number);

            switch(c.phone.mobile.carrier)
            {

                case CHT:

                    printf("(Chunghwa Telecom), ");
                    break;

                case TWN:

                    printf("(Taiwan Mobile), ");
                    break;

                case FET:

                    printf("(FarEasTone), ");
                    break;

            }
            
            break;

    }

    printf("%s.\n", c.address);

}

void sortContacts(Contact cs[])
{

    int i, j;

    Contact temp;

    for(i = 0; i < numContact; i++)
    {

        for(j = 0; j < numContact - i; j++)
        {

            if(check(cs[j], cs[j + 1]) == 0)
            {

                temp = cs[j];
                cs[j] = cs[j + 1];
                cs[j + 1] = temp;

            }

        }

    }
    
}