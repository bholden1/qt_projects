#include <QtGui/QApplication>
#include <QtGui/QPushButton>
#include <QProgressBar>
#include <QSlider>
#include "schedule.h"


int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    
    schedule foo;
    foo.show();
    
//     // Create a container window
//     QWidget window;
//     window.setFixedSize(200, 80);
//     
//     // Create a progress bar
//     // with the range between 0 and 100, and a starting value of 0
//     QProgressBar *progressBar = new QProgressBar(&window);
//     progressBar->setRange(0, 100);
//     progressBar->setValue(0);
//     progressBar->setGeometry(10, 10, 180, 30);
//     
//     // Create a horizontal slider
//     // with the range between 0 and 100, and a starting value of 0
//     QSlider *slider = new QSlider(&window);
//     slider->setOrientation(Qt::Horizontal);
//     slider->setRange(0, 100);
//     slider->setValue(0);
//     slider->setGeometry(10, 40, 180, 30);
//     
//     window.show();
//     
//     // Connection
//     // This connection set the value of the progress bar
//     // while the slider's value changes
//     QObject::connect(slider, SIGNAL (valueChanged(int)), progressBar, SLOT (setValue(int)));
    
    
//     QWidget window;
//     window.setFixedSize(100, 80);
//     
//     QPushButton *buttonInfo = new QPushButton("Info", &window);
//     buttonInfo->setGeometry(10, 10, 80, 30);
//     
//     QPushButton *buttonQuit = new QPushButton("Quit", &window);
//     buttonQuit->setGeometry(10, 20, 80, 30);
//     
//     window.show();
//     
// //     QButtonGroup *buttonGroup = new QButtonGroup(object);
//     
//     QPushButton button;
//     QIcon icon ("/home/ben/projects/Interview-Scheduler/icon.png");
//     button.setIcon(icon);
//     
//     QFont font("Courier");
//     button.setFont(font);
//     
//     button.setText("Test text!"); 
//     button.setToolTip("tooltip!");
//     button.show();
//     
//     QPushButton button1 ("test");
//     QPushButton button2 ("other", &button1);
//     
//     button1.show();
    return app.exec();
}
