
#include "test.h"

#define HM_MACRO_IMPLEMENT
#include "grammar.h"
int main()
{
      
    uint8_t input[102400];
    size_t inputsize;
    const struct foo *result;
    inputsize = fread(input, 1, sizeof(input), stdin);
    fprintf(stderr, "inputsize=%zu\ninput=", inputsize);
    fwrite(input, 1, inputsize, stderr);  
    result =  parse_foo(input,inputsize);
    if(result) {

            return 0;
    } else {
        return 1;
    }
}
