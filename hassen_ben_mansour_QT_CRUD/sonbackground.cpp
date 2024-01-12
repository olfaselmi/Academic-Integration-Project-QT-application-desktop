#include "sonbackground.h"

void  mettreMusique()
{
    QMediaPlayer * music=new QMediaPlayer();
    music->setMedia(QUrl("qrc:/Sound/2.mp3"));
    music->play();
}
