#ifndef GRAPH_FOR_INPUT_H
#define GRAPH_FOR_INPUT_H

#include <QApplication>
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

        this->setCameraZoomLevel(100);

        this->setCameraPreset(QAbstract3DGraph::CameraPreset::Front);

        this->setMouseTracking(false);
    }

    void wheelEvent(QWheelEvent *e)
    {
        QPoint numDegrees = e->angleDelta() / 8;

        if(this->Zoom_Size + numDegrees.y() / 80.0f < MAX_ZOOM_SIZE)
        {
            this->Zoom_Size += numDegrees.y() / 80.0f;
        }
        else if(this->Zoom_Size + numDegrees.y() / 80.0f > MIN_ZOOM_SIZE)
        {
            this->Zoom_Size += numDegrees.y() / 80.0f;
        }

        //qDebug()<<this->Zoom_Size<<endl;
        qDebug()<<this->cameraZoomLevel()<<endl;
        this->setCameraZoomLevel(this->Zoom_Size);
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
