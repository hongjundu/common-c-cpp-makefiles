#include "app.h"

int main(int argc, char* argv[]) 
{
    App *app = new App();
    int rc = app->run(argc,argv);
    delete app;
    return rc;
}