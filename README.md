# Labor 10

## Rajzolás QT-ben

A [```QPainter```](https://doc.qt.io/qt-5/qpainter.html) erősen optimalizált funkciókat biztosít a legtöbb grafikus részlet megalkotásához. Mindent meg tud rajzolni az egyszerű grafikus primitívektől (amelyeket a [```QPoint```](https://doc.qt.io/qt-5/qpoint.html), [```QLine```](https://doc.qt.io/qt-5/qline.html), [```QRect```](https://doc.qt.io/qt-5/qrect.html), [```QRegion```](https://doc.qt.io/qt-5/qregion.html) és [```QPolygon```](https://doc.qt.io/qt-5/qpolygon.html) osztályok képviselnek) a bonyolult alakzatokig, például a vektor útvonalakig ([```QPainterPath```](https://doc.qt.io/qt-5/qpainterpath.html) osztály - lehetővé teszi a grafikus alakzatok elkészítését és újrafelhasználását).

A vonalakat és körvonalakat a [```QPen```](https://doc.qt.io/qt-5/qpen.html) osztály segítségével rajzoljuk meg. A tollat stílusa (azaz vonaltípusa, _line_), szélessége (_width_), ecsetje/feje (_brush_), a végpontok rajzolása (_cap_) és két vonal közötti összekapcsolódás (_joint_) határozza meg. A toll ecsetje egy [```QBrush```](https://doc.qt.io/qt-5/qbrush.html) objektum, amelyet a tollal generált vonások kitöltésére használnak, vagyis a [```QBrush```](https://doc.qt.io/qt-5/qbrush.html) osztály határozza meg a kitöltési mintát.

A [```QPainter```](https://doc.qt.io/qt-5/qpainter.html)-rel szöveget is rajzolhatunk ki. Szöveg rajzolásakor a betűtípust a [```QFont```](https://doc.qt.io/qt-5/qfont.html) osztály segítségével adjuk meg. A ténylegesen használt betűtípus attribútumait a [```QFontInfo```](https://doc.qt.io/qt-5/qfontinfo.html) osztály segítségével lehet lekérni. Ezenkívül a [```QFontMetrics```](https://doc.qt.io/qt-5/qfontmetrics.html) osztály biztosítja a betűméretet.

Normális esetben a [```QPainter```](https://doc.qt.io/qt-5/qpainter.html) "természetes" koordinátarendszerbe rajzol, de képes transzformációkat végrehajtani [```QTransform```](https://doc.qt.io/qt-5/qtransform.html) osztály használatával. 

A színeket a [```QColor```](https://doc.qt.io/qt-5/qcolor.html) osztály képviseli, amely támogatja az RGB, HSV és CMYK színmodelleket. Támogatja az alfa-kevert körvonalazást és kitöltést is (áttetszőség elérése érdekében).

Az elérhető kitöltési mintákat a [```Qt::BrushStyle```](https://doc.qt.io/qt-5/qt.html#BrushStyle-enum) enum írja le. Ide tartoznak az egyenletes színtől a nagyon ritka mintázatig terjedő alapminták, különféle vonalkombinációk, színátmenet kitöltések és textúrák. A Qt biztosítja a [```QGradient```](https://doc.qt.io/qt-5/qgradient.html) osztályt az egyéni színátmenet kitöltések meghatározásához, míg a textúramintákat a [```QPixmap```](https://doc.qt.io/qt-5/qpixmap.html) osztály segítségével határozzuk meg.

## Feladatok

1. [```QPainter```](https://doc.qt.io/qt-5/qpainter.html) és [```QPen```](https://doc.qt.io/qt-5/qpen.html) segítségével, egy ablakra:
  
  a. rajzoljuk ki az olimpiai játékok logóját: 
  <p align="center"> <img src="https://i.ibb.co/Gp77SWZ/house.png" width=200px> </p>
  b. rajzoljunk egy házat: 
  <p align="center"> <img src="https://i.ibb.co/G3WJKV6/ahouse.png" width=200px> </p>

A pontok megtalálásához használhatjuk a repositoryban található **CursorTracker** projektet, amely futtatásakor az egerünk jelenlegi relatív pozícióját írja ki az alkalmazás ablakához viszonyítva. Bővebb információk, implementálási kérdések megtalálhatóak a projekt forráskódjában.

2. Implementáljunk:
  
  a. egy digitális órát: 
  <p align="center"> <img src="https://i.ibb.co/yd7n2bq/digitalclock.png" width=300px> </p>
  b. egy analóg órát:       
 <p align="center"> <img src="https://i.ibb.co/5RWkG1z/clock.png" width=300px> </p>

3. Készítsünk egy mini Paint/Scribble alkalmazást, amelyben szabadon rajzolhatunk. Az alkalmazás adjon esélyt képeket betöltésére, a ceruzánk/ecsetünk méretének és színének megváltoztatására, vászonunk törlésére, majd pedig az elkészült képet lehessen elmenteni különböző formátumokba, illetve kinyomtatni. Ezen opciókat helyezzük menürendszerbe. 
Egy lehetséges megoldás megtalálható [itt](https://doc.qt.io/qt-5/qtwidgets-widgets-scribble-example.html).
 <p align="center">
 <img src="https://i.ibb.co/VLX9BJT/scribble.png" width=400px> 
 </p>
