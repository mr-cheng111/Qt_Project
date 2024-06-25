#ifndef GRAPH_FOR_INPUT_H
#define GRAPH_FOR_INPUT_H

#include <QMainWindow>
#include <QWidget>
#include <Q3DBars>
#include <QWheelEvent>
#include <QHBoxLayout>

using namespace Qt;

class C3DBars : public Q3DBars
{
#define MAX_ZOOM_SIZE 1000.0f
#define MIN_ZOOM_SIZE 60.0f

public:
    C3DBars()
    {

        this->setMaxCameraZoomLevel(MAX_ZOOM_SIZE);

        this->setMinCameraZoomLevel(MIN_ZOOM_SIZE);

        this->setShadowQuality(QAbstract3DGraph::ShadowQuality::High);

        this->setMouseTracking(true);
    }

    void wheelEvent(QWheelEvent *event)
    {
        if(event->pixelDelta().y() > 0)
        {
            if(this->Zoom_Size + event->pixelDelta().y() / 80.0f < MAX_ZOOM_SIZE)
            {
                this->Zoom_Size += event->pixelDelta().y() / 80.0f;
            }
        }
        else if(event->pixelDelta().y() < 0)
        {
            if(this->Zoom_Size + event->pixelDelta().y() / 80.0f > MIN_ZOOM_SIZE)
            {
                this->Zoom_Size += event->pixelDelta().y() / 80.0f;
            }
        }
        qDebug()<<this->Zoom_Size<<endl;
        this->setCameraZoomLevel(this->Zoom_Size);
        this->show();
        Q3DBars::grabMouse();
    }

private:
    float Zoom_Size = 100.0f;

};

class graph_for_input : public QWidget
{
public:
    graph_for_input(QWidget *parent = nullptr);

private:
    QWidget *Parent;
    C3DBars *Bars = new C3DBars;
    QHBoxLayout *HBox = new QHBoxLayout;
};

#endif // GRAPH_FOR_INPUT_H
