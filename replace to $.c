#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input_file, *output_file;
    char _c;

    
    input_file = fopen("input.txt", "r");

  

   
    output_file = fopen("output.txt", "w");

   

    
    while ((_c = fgetc(input_file)) != EOF) {
     
        if (isdigit(_c)) {
           
            fputc('$', output_file);

           
            while ((_c = fgetc(input_file)) != EOF && isdigit(_c)) {
               
            }

           
            fputc(_c, output_file);
        } else {
           
            fputc(_c, output_file);
        }
    }

    
    fclose(input_file);
    fclose(output_file);

    return 0;
}
