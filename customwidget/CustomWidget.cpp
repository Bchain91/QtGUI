#include <QApplication>
#include <QPushButton>

#include "CustomWidget.h"

CustomWidget::CustomWidget(QWidget* parent) : QWidget(parent)
{
    QPushButton *button = new QPushButton("Quit", this);

    button->resize(120, 35); 		/* 위젯의 크기 설정 */

    this->resize(500, 35); 		/* 윈도우의 크기 설정 */
    move(300, 300); 			/* 윈도우의 위치 설정 */

    connect(button, SIGNAL(clicked()), qApp, SLOT(quit()));
}
