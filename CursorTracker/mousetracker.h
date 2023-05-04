#ifndef MOUSETRACKER_H
#define MOUSETRACKER_H

#include <QMainWindow>
#include <QMouseEvent>

class MouseTracker : public QMainWindow
{
    Q_OBJECT

public:
    MouseTracker(QWidget *parent = nullptr);
protected:
    virtual void mouseMoveEvent(QMouseEvent *event) override;
};

#endif // MOUSETRACKER_H
