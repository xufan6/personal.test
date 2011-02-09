//first from crhan
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    char cmd[256];
    int i;

    char *user="";
    char *pass="";

    if (argc < 2)
    return 0;

    cmd[0]='\0';
    strcat(cmd,"cliofetion ");
    strcat(cmd,"-f ");
    strcat(cmd,user);
    strcat(cmd," -p ");
    strcat(cmd,pass);
    strcat(cmd," ");

    for(i=1; i<argc; i++) {
        strcat(cmd, argv[i]);
        strcat(cmd, " ");
        }
    system(cmd);

//检视运行的cmd，如不想查看注释下面这行
	puts("\n");
	puts(cmd);
    return 0;
}
