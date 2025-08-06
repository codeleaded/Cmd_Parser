#include "/home/codeleaded/System/Static/Library/Parser.h"

int main(int argc, const char *argv[]){
    
    Parser p = Parser_New();
    Parser_Parse(&p,"int a = \"hello world\n\" + 10 + 0b1010101");
    
    //Parser_Classify
    Parser_Parse_Space(&p,"float a = 10.0 + 0.1");
    //Parser_PushToken
    
    Parser_Print(&p);
    Parser_Free(&p);

    return 0;
}