#include<glib.h>
#include<stdio.h>

int main()
{

    const gchar* return_value;
    return_value = glib_check_version (2, 28, 1);
    if(NULL == return_value)
    {
        printf("Version okay!\n");
    }
    else
    {
        printf("Version not okay\n");
    }
    return 0;
}
