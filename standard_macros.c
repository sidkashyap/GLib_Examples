#include<glib.h>
#include<stdio.h>

int main()
{

    gboolean asdfasdf = TRUE;

    // better to use this than void*
    gpointer my_void = NULL;


    //gconstpointer

    gconstpointer myconst = NULL;

    //gchar - not recommended as this is the same as char


    //guchar - unsigned char

    guchar unsignedchar = 'a';

    //gint is the same as int 

    //guint 

    guint unsigned_int = 100;

    //gshort is the same as short

    gint8 my8 = 10;
    printf("%ld", sizeof(my8));

    /*similarly you have the int's extending upto 64 bits

    //gfloat = float

    //gdouble = double

    //gsize = size_t */

    return 0;
}
