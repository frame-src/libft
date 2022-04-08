#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// int main (void)
// {
// 	char str[100] = "Learningisfun";
//     char str2[100] = "Learningisfun";
//     char *first, *second;
//     first = str;
//     second = str;
//     printf("Original string :%s\n ", str);
      
//     // when overlap happens then it just ignore it
//     memmove(first + 4, first, 10);
//     printf("\n\tmemmove overlap :\t %s\n ", str);
  
//     // when overlap it start from first position
//     memcpy(second + 4, first, 10);
//     printf("\tmemcopy overlap :\t %s\n\n\n ", str);

//     printf("\toriginal str :\t %s\n\n\n ", str2);
//         // when overlap happens then it just ignore it
//     first = str2;
//     second = str2;
//     memcpy(first + 4, first, 10);
//     printf("\n\tmemmove overlap :\t %s\n ", str2);
  
//     // when overlap it start from first position
//     memmove(second + 4, first, 10);
//     printf("\tmemcopy overlap :\t %s\n\n\n ", str2);
// 	return (0);

// }