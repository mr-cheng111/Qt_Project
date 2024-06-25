#include "get_pic_dir.h"
#include "mainwindow.h"

get_pic_dir::get_pic_dir(MainWindow *parent)
{
    if(parent != nullptr)
    {
        this->Parent = parent;
    }

}
