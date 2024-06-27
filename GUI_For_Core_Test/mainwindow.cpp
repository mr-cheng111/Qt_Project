#include "mainwindow.h"
#include "get_pic_dir.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Load_Pic_clicked()
{
    //获取图片路径
    get_pic_dir *Temp_Windows = new get_pic_dir(this);

    //创建图片对象
    QImage image;
    image.load(Temp_Windows->Get_Pic_Dir());
    //对图片进行缩放
    image = image.scaled(this->ui->pic_in->width(), this->ui->pic_in->height());

    //展示图片
    this->ui->pic_in->setPixmap(QPixmap::fromImage(image));
    this->ui->pic_in->show();
    this->update();
}


void MainWindow::on_Start_test_clicked()
{


}




void MainWindow::on_MainWindow_iconSizeChanged(const QSize &iconSize)
{

}

