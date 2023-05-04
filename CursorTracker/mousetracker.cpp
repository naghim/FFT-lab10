#include "mousetracker.h"

#define WINDOW_TITLE "Mouse Tracker"

MouseTracker::MouseTracker(QWidget *parent)
    : QMainWindow(parent)
{
    /*
     * MouseTrackingnek két értéket vehet fel, true vagy false.
     * Alapértelemezetten false és ilyenkor csak akkor kapja meg
     * a mouse eventeket, ha legalább egy egérgomb lenyomásra kerül
     * miközben mozog az egér. Amennyiben true az értéke,
     * minden mouse event átadásra kerül (gombnyomás nélkül).
     * Lásd:
     * https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent
     *
     * Az egérmozgáshoz kötődő események elcsípéséhez
     * szükséges a mouseMoveEventet majd felülírni.
     *
     */
    setMouseTracking(true);

    resize(600, 400);
    setWindowTitle(WINDOW_TITLE);
}

void MouseTracker::mouseMoveEvent(QMouseEvent *event){
    qDebug() << "X: " << event->pos().x() << "; Y: " << event->pos().y();
}

