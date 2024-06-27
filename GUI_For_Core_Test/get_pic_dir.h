#ifndef GET_PIC_DIR_H
#define GET_PIC_DIR_H
#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QFileDialog>

class get_pic_dir : QWidget
{
    Q_OBJECT
public:
    get_pic_dir(QWidget *parent = nullptr);
    QString Get_Pic_Dir(void)
    {
        return this->File_Dir;
    }
    ~get_pic_dir();
private:
    QWidget *Parent = nullptr;
    QString File_Dir;
    QFileDialog *File = new QFileDialog(this);
};

#endif // GET_PIC_DIR_H
