#include "son.h"


void  mettreMusique()
{
    QMediaPlayer * music=new QMediaPlayer();
    music->setMedia(QUrl("qrc:/2.mp3"));
    music->play();
}
