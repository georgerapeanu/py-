#define LEFT_BRACKET {
#define RIGHT_BRACKET }
#define wrap(x) int x
#include <cstdio>

#ifdef I_DONT_EXIST
print("Hello world\n")
exit();
#endif

wrap(main())
LEFT_BRACKET
printf("Hello World\n");
RIGHT_BRACKET
