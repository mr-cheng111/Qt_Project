#include "get_pic_dir.h"

get_pic_dir::get_pic_dir(QWidget *parent)
{
    if(parent != nullptr)
    {
        this->Parent = parent;
    }

    this->resize(QSize(640,320));

}
