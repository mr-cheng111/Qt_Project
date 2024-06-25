
#include "graph_pie.h"

// graph_pie::graph_pie(QMainWindow *P)
// {
//     if(P != nullptr)
//     {
//         this->Parent = P;
//     }

//     QString Str11 = "Test11";
//     QString Str12 = "Test12";

//     int Num11 = 50.0;
//     int Num12 = 50.0;

//     QList<QString> Str1;
//     QList<int> Num1;

//     Str1.push_back(Str11);
//     Str1.push_back(Str12);

//     Num1.push_back(Num11);
//     Num1.push_back(Num12);

//     this->add_pie(Str1,Num1);

//     QList<QString> Str2;
//     QList<int> Num2;

//     Str2<<"Hello1";
//     Str2<<"Hello2";
//     Str2<<"Hello3";
//     Num2<<98;
//     Num2<<42;
//     Num2<<22;

//     this->add_pie(Str2,Num2);

//     this->show();
// }


graph_pie::graph_pie()
{
    QString Str11 = "Test11";
    QString Str12 = "Test12";

    int Num11 = 50.0;
    int Num12 = 50.0;

    QList<QString> Str1;
    QList<int> Num1;

    Str1.push_back(Str11);
    Str1.push_back(Str12);

    Num1.push_back(Num11);
    Num1.push_back(Num12);

    this->add_pie(Str1,Num1);

    QList<QString> Str2;
    QList<int> Num2;

    Str2<<"Hello1";
    Str2<<"Hello2";
    Str2<<"Hello3";
    Num2<<98;
    Num2<<42;
    Num2<<22;

    this->add_pie(Str2,Num2);

    this->show();
}

void graph_pie::add_pie(QList<QString> item_name,QList<int> item_data)
{
    QList<QPieSlice *> PieSlice;
    if(item_data.length() != item_name.length())
    {
        qDebug()<<"Error! item_data.length() isn't equal to item_name.length()."<<Qt::endl;
        return;
    }
    for(int i = 0 ; i < item_data.length() ; i++)
    {
        //根据数据个数创建Slice的个数
        QPieSlice *P = new QPieSlice(item_name.at(i),item_data.at(i));
        P->setColor(this->Color.at(i));

        PieSlice.push_back(P);
    }

    QPieSeries *Pie = new QPieSeries;

    Pie->append(PieSlice);

    for(QPieSlice *P : PieSlice)
    {
        P->setLabel(P->label() + QString(" ") + QString::number(P->percentage()*100,'f',1) + QString("%"));
    }

    /***************start 设置绘图控件***************/
    QChart *Chart = new QChart;

    Chart->setMinimumSize(QSize(320,320));

    Chart->addSeries(Pie);

    Chart->setTitle("Simple piechart example");

    Chart->legend()->setAlignment(Qt::AlignBottom);
    /***************end 设置绘图控件***************/

    /***************start 设置显示控件***************/
    CChartView *ChartVeiw = new CChartView(Chart);

    ChartVeiw->setBaseSize(QSize(640,320));

    ChartVeiw->setRenderHint(QPainter::Antialiasing);

    this->ChartView.push_back(ChartVeiw);
    /***************end 设置显示控件***************/

    /***************start 绑定到窗口***************/
    this->HBox->addWidget(ChartVeiw);

    this->setLayout(this->HBox);
    /***************end 绑定到窗口***************/
}

void graph_pie::add_pie(QString Chart_Title,QList<QString> item_name,QList<int> item_data)
{
    QList<QPieSlice *> PieSlice;
    if(item_data.length() != item_name.length())
    {
        qDebug()<<"Error! item_data.length() isn't equal to item_name.length()."<<Qt::endl;
        return;
    }
    for(int i = 0 ; i < item_data.length() ; i++)
    {
        //根据数据个数创建Slice的个数
        QPieSlice *P = new QPieSlice(item_name.at(i),item_data.at(i));
        P->setColor(this->Color.at(i));
        PieSlice.push_back(P);
    }

    QPieSeries *Pie = new QPieSeries;

    Pie->append(PieSlice);
    for(QPieSlice *P : PieSlice)
    {
        P->setLabel(P->label() + QString(" ") + QString::number(P->percentage()*100,'f',1) + QString("%"));
    }
    /***************start 设置绘图控件***************/
    QChart *Chart = new QChart;

    Chart->setMinimumSize(QSize(320,320));

    Chart->addSeries(Pie);

    Chart->setTitle(Chart_Title);

    Chart->legend()->setAlignment(Qt::AlignBottom);
    /***************end 设置绘图控件***************/

    /***************start 设置显示控件***************/
    CChartView *ChartView = new CChartView(Chart);

    ChartView->setRenderHint(QPainter::Antialiasing);

    this->ChartView.push_back(ChartView);
    /***************end 设置显示控件***************/

    /***************start 绑定到窗口***************/
    this->HBox->addWidget(ChartView);

    this->setLayout(this->HBox);
    /***************end 绑定到窗口***************/
    this->show();
}

graph_pie::~graph_pie()
{
    for(CChartView *Ptr : this->ChartView)
    {
        delete Ptr;
    }

}


