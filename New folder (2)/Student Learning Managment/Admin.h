#ifndef ADMIN_H
#define ADMIN_H


class Admin
{
    char username[8];
    char password[12];
    char setpass[12];
    public:
        Admin();
        void getstart();
        void getpassword();
        void setpassword();

};

#endif // ADMIN_H
