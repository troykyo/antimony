#ifndef EXPORT_MESH_H
#define EXPORT_MESH_H

#include <Python.h>
#include <QObject>

#include "fab/types/shape.h"

class ExportMeshWorker : public QObject
{
    Q_OBJECT
public:
    explicit ExportMeshWorker(Shape s, float resolution, QString filename);
public slots:
    void render();
signals:
    void finished();
protected:
    Shape shape;
    float resolution;
    QString filename;
};

#endif
