#include "get_pic_dir.h"

get_pic_dir::get_pic_dir(QWidget *parent)
{
    if(parent != nullptr)
    {
        this->Parent = parent;
    }

    this->File_Dir = this->File->getOpenFileName(this, tr("Open Image"), "../../Test_Jpg", tr("Image Files (*.png *.jpg *.bmp)"));

    qDebug()<<this->File_Dir<<Qt::endl;
}

get_pic_dir::~get_pic_dir(void)
{
    delete this->File;
}
