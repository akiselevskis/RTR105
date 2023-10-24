//https://riptutorial.com/c/example/3250/calling-a-function-from-another-c-file
#include "foo.h"
#include <stdio.h>

int main(void)
{
    int id_main = 42;
    printf("id_main atrašanās vieta atmiņā (izdruka no main): %p\n", &id_main);
    printf("id_main vērtība pirms foo izpildes: %d\n", id_main);

    char *name_main = "mans teksts";
    printf("name_main atrašanās vieta atmiņā (izdruka no main): %p\n", name_main);
    printf("name_main vērtība pirms foo izpildes: %p\n", &name_main);


    foo(42, "bar");

    printf("id_main vērtība pēc foo izpildes: %d\n", id_main);
    printf("name_main vērtība pēc foo izpildes: %s\n", name_main);

    return 0;
}
