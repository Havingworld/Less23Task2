#include <iostream>

#define SPRING "vesna"
#define SUMMER "leto"
#define AUTUMN "osen"
#define WINTER "zima"

#define BOOL_1 1
#define BOOL_0 0

#if BOOL_1
int main()
{
    std::cout << SPRING << std::endl;
}
#endif

#if BOOL_0
int main()
{
    std::cout << STR(SUMMER) << std::endl;
}
#endif

#if BOOL_0
int main()
{
    std::cout << STR(AUTUMN) << std::endl;
}
#endif

#if BOOL_0
int main()
{
    std::cout << STR(WINTER) << std::endl;
}
#endif