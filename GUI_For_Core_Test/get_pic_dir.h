#ifndef GET_PIC_DIR_H
#define GET_PIC_DIR_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>


class get_pic_dir : QWidget
{
    Q_OBJECT
public:
    get_pic_dir(QWidget *parent = nullptr)
    {
        if(parent != nullptr)
        {
            this->Parent = parent;
        }


    }

private slots:
    void on_Ok_cilcked()
    {
        this->File_Dir = new QString(this->Line->text());
    }
private:
    QWidget *Parent = nullptr;
    QLineEdit *Line = new QLineEdit;
    QString *File_Dir;
    QPushButton *Button;
};

#endif // GET_PIC_DIR_H
