
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_14h to Decompiler type: Unknown type identifier
// signed
#include <sys/types.h>

char * ft_des(char *src)
{
    char loop_condition_pointer_on_source;
    char *source_copy;

    u_int32_t uint_max;
    char *source_pointer;
    u_int8_t zero_int;
    char *var_2ch;

    u_int32_t source_string_index;
    u_int32_t charset_index;
    int32_t odd_iterator;
    int32_t even_iterator;

    char *var_ch;
    
    zero_int = 0;
    source_copy = (char *)strdup(src);
    charset_index = 0;
    source_string_index = 0;

    do {
        uint_max = 0xffffffff; // UINT MAX

        source_pointer = source_copy;

        do 
        {
            if (uint_max == 0) break;                                       //Exit condition
            uint_max = uint_max - 1;                                        // Decrement uint_max de 1
            loop_condition_pointer_on_source = *source_pointer;             // Put loop_pointer on source_pointer
            source_pointer = source_pointer + 1;                            // source_pointer++

        } while (loop_condition_pointer_on_source != '\0'); //uint_max devient uint_max - strlen(source)

        if (~uint_max - 1 <= source_string_index)
        {
            return source_copy; // Length check ?
        }


        if (charset_index == 6) {
            charset_index = 0;
        }


        if ((source_string_index & 1) == 0) // Check even / odd
        { // if even
            if ((source_string_index & 1) == 0)
            {
                even_iterator = 0;
                while (even_iterator < "0123456"[charset_index])
                {
                    source_copy[source_string_index] = source_copy[source_string_index] + -1;
                    if (source_copy[source_string_index] == '\x1f') // x1f = 20
                    { 
                        source_copy[source_string_index] = '~';
                    }
                    even_iterator++;
                }
            }
        }
        else
        { // if odd
            odd_iterator = 0;
            while (odd_iterator < "0123456"[charset_index])
            {
                source_copy[source_string_index] = source_copy[source_string_index] + '\x01';
                if (source_copy[source_string_index] == '\x7f') // x7f == 127
                {
                    source_copy[source_string_index] = ' ';
                }
                odd_iterator++;
            }
        }
        source_string_index = source_string_index + 1;
        charset_index = charset_index + 1;

    } while( 1 );
}
#include <stdio.h>
int main (int ac, char **av)
{
    printf("%s\n", ft_des(av[1]));
}
