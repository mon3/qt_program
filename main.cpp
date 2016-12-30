#include "mainwindow.h"
#include <QApplication>
#include <QWidget>
#include <QTextCodec>
#include <qwt/qwt.h>
#include <qwt/qwt_plot.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    // Tworzenie okna programu
    QWidget okno;
    okno.setWindowTitle ("Dopasowanie MNK"); // ustawia tytuł okna
    okno.setFixedSize (640, 480); // rozmiar okna 800x800
    // (...) rysowanie na oknie

    // Tworzenie wykresu na konkretnym oknie
    QwtPlot wykres (&okno);
    // Ustawienie tytułu wykresu
    wykres.setTitle ("Dopasowanie MNK");
    // Ustawienia tytułów osi: yLeft, yRight, xBottom, xTop
    wykres.setAxisTitle (QwtPlot::xBottom, "Nr kanału");
    wykres.setAxisTitle (QwtPlot::yLeft, "Napięcie / V");
    // Ustawienie rozmiarów wykresu
    wykres.setFixedSize (775, 775);
    // Ustawienie koloru tła
    wykres.setCanvasBackground (QColor (0xff,0xfa, 0x6b));
    // Ustawienie zakresu osi
//    wykres.setAxisScale (QwtPlot::xBottom, min_x, max_x);
//    wykres.setAxisScale (QwtPlot::yLeft, min_y, max_y);



    okno.show();

    return a.exec();
}
