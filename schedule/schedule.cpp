#include "schedule.h"

#include <QtGui/QLabel>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QAction>
#include <QPushButton>
#include <QApplication>

schedule::schedule()
{
    QLabel* l = new QLabel( this );
    l->setText( "Hello World!" );
	
    setCentralWidget( l );
    QAction* a = new QAction(this);
    a->setText( "Quit" );
    connect(a, SIGNAL(triggered()), SLOT(close()) );
    menuBar()->addMenu( "File" )->addAction( a );

    // Set size of the window
    setFixedSize(500, 250);

//     QPushButton *m_button;
    // Create and position the button
    m_button = new QPushButton("Hello World", this);
    m_button->setGeometry(10, 10, 80, 30);
    m_button->setCheckable(true);

    // Set the counter to 0
    m_counter = 0;

    connect(m_button, SIGNAL (clicked(bool)), this, SLOT(slotButtonClicked(bool)));
    connect(this, SIGNAL (counterReached()), QApplication::instance(), SLOT (quit()));
}

schedule::~schedule()
{}

void schedule::slotButtonClicked(bool checked)
{
    if (checked) {
        m_button->setText("Checked");
    } else {
        m_button->setText("Hello World");
    }

    m_counter ++;
    if (m_counter == 10) {
        emit counterReached();
    }
}

#include "schedule.moc"
