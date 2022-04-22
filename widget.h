#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
#include <QTimer>
#include "gpio.h"

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

public slots:
    void updateButtonState();
    void updateCount();

private:
    QList<QLabel*> m_input_display;
    QTimer* m_timer;
    gpio* m_gpio;
    QLabel* m_cntLabel = nullptr;
    unsigned int m_cnt = 0;
    unsigned int m_cnt_binary = 0;
    int binary[4];
    int i;
};

#endif // WIDGET_H
