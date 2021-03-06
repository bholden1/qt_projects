#include "plusminus.h"
#include <QGridLayout>

PlusMinus::PlusMinus(QWidget *parent)
: QWidget(parent) {

	QPushButton *plsBtn = new QPushButton("+", this);
	QPushButton *minBtn = new QPushButton("-", this);
	lbl = new QLabel("0", this);

	QGridLayout *grid = new QGridLayout(this);
	grid->addWidget(plsBtn, 0, 0);
	grid->addWidget(minBtn, 0, 1);
	grid->addWidget(lbl, 1, 1);

	setLayout(grid);

	connect(plsBtn, SIGNAL(clicked()), this, SLOT(OnPlus()));
	connect(minBtn, SIGNAL(clicked()), this, SLOT(OnMinus()));
	connect(this, SIGNAL (counterReached()), QApplication::instance(), SLOT (quit()));
}

void PlusMinus::OnPlus() {

	int val = lbl->text().toInt();
	val++;
	if(val == 10)
	{
		emit counterReached();
	}
	lbl->setText(QString::number(val));
}

void PlusMinus::OnMinus() {

	int val = lbl->text().toInt();
	val--;
	lbl->setText(QString::number(val));
}
