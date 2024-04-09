# 사용할 때
```c
void *malloc(sizeof(int) *3)
```
과 같이 사용한다.
- <stdlib.h> 혹은 <malloc.h>를 선언해서 사용해야한다.
- C++ 파일에서 malloc의 반환을 명시적으로 캐스팅합니다. 예를 들어, 문자열 = (char *)malloc( _MAX_PATH );
- void\* 형식을 반환한다.
# MS 사이트 예시


```c
// crt_malloc.c
// This program allocates memory with
// malloc, then frees the memory with free.

#include <stdlib.h>   // For _MAX_PATH definition
#include <stdio.h>
#include <malloc.h>

int main( void )
{
   char *string;

   // Allocate space for a path name
   string = malloc( _MAX_PATH );

   // In a C++ file, explicitly cast malloc's return.  For example,
   // string = (char *)malloc( _MAX_PATH );

   if( string == NULL )
      printf( "Insufficient memory available\n" );
   else
   {
      printf( "Memory space allocated for path name\n" );
      free( string );
      printf( "Memory freed\n" );
   }
}
```
## output
```c
Memory space allocated for path name
Memory freed
```

