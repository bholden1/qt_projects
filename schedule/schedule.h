#ifndef schedule_H
#define schedule_H

#include <QtGui/QMainWindow>
#include <QPushButton>
#include <QApplication>

class schedule : public QMainWindow
{
Q_OBJECT
public:
    schedule();
    virtual ~schedule();
signals:
    void counterReached();
private:
    void slotButtonClicked(bool checked);
private:
    int m_counter;
    QPushButton *m_button;
};

#endif // schedule_H
