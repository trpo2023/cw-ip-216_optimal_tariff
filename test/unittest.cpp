#include "../src/logic.cpp"
#include "gtest/gtest.h"
#include <limits.h>

RenderWindow window(VideoMode(1000, 600), "Optimal cost-based tariff v2.0");
radio button(0);
Vector2i points;
namespace {

TEST(draw, CorrectPoint1)

{
    points.x = 40;
    points.y = 180;
    Mouse::setPosition(points, window);
    ASSERT_EQ(1, button.draw(40, 180, 280, 380, window, true));
    button.menuNumSet(0);

    points.x = 86;
    points.y = 180;
    Mouse::setPosition(points, window);
    ASSERT_EQ(1, button.draw(40, 180, 280, 380, window, true));
    button.menuNumSet(0);

    points.x = 40;
    points.y = 226;
    Mouse::setPosition(points, window);
    ASSERT_EQ(1, button.draw(40, 180, 280, 380, window, true));
    button.menuNumSet(0);

    points.x = 86;
    points.y = 226;
    Mouse::setPosition(points, window);
    ASSERT_EQ(1, button.draw(40, 180, 280, 380, window, true));
    button.menuNumSet(0);
}

TEST(draw, CorrectPoint2)

{
    points.x = 40;
    points.y = 280;
    Mouse::setPosition(points, window);
    ASSERT_EQ(2, button.draw(40, 180, 280, 380, window, true));
    button.menuNumSet(0);

    points.x = 86;
    points.y = 280;
    Mouse::setPosition(points, window);
    ASSERT_EQ(2, button.draw(40, 180, 280, 380, window, true));
    button.menuNumSet(0);

    points.x = 40;
    points.y = 326;
    Mouse::setPosition(points, window);
    ASSERT_EQ(2, button.draw(40, 180, 280, 380, window, true));
    button.menuNumSet(0);

    points.x = 86;
    points.y = 326;
    Mouse::setPosition(points, window);
    ASSERT_EQ(2, button.draw(40, 180, 280, 380, window, true));
    button.menuNumSet(0);
}

TEST(draw, CorrectPoint3)

{
    points.x = 40;
    points.y = 380;
    Mouse::setPosition(points, window);
    ASSERT_EQ(3, button.draw(40, 180, 280, 380, window, true));
    button.menuNumSet(0);

    points.x = 86;
    points.y = 380;
    Mouse::setPosition(points, window);
    ASSERT_EQ(3, button.draw(40, 180, 280, 380, window, true));
    button.menuNumSet(0);

    points.x = 40;
    points.y = 426;
    Mouse::setPosition(points, window);
    ASSERT_EQ(3, button.draw(40, 180, 280, 380, window, true));
    button.menuNumSet(0);

    points.x = 86;
    points.y = 426;
    Mouse::setPosition(points, window);
    ASSERT_EQ(3, button.draw(40, 180, 280, 380, window, true));
    button.menuNumSet(0);
}

TEST(draw, UncorrectPoint1)
{
    points.x = 39;
    points.y = 180;
    Mouse::setPosition(points, window);
    ASSERT_NE(1, button.draw(40, 180, 280, 380, window, true));
    button.menuNumSet(0);

    points.x = 88;
    points.y = 180;
    Mouse::setPosition(points, window);
    ASSERT_NE(1, button.draw(40, 180, 280, 380, window, true));
    button.menuNumSet(0);

    points.x = 40;
    points.y = 228;
    Mouse::setPosition(points, window);
    ASSERT_NE(1, button.draw(40, 180, 280, 380, window, true));
    button.menuNumSet(0);

    points.x = 88;
    points.y = 228;
    Mouse::setPosition(points, window);
    ASSERT_NE(1, button.draw(40, 180, 280, 380, window, true));
    button.menuNumSet(0);
}

TEST(draw, UncorrectPoint2)
{
    points.x = 39;
    points.y = 280;
    Mouse::setPosition(points, window);
    ASSERT_NE(2, button.draw(40, 180, 280, 380, window, true));
    button.menuNumSet(0);

    points.x = 88;
    points.y = 280;
    Mouse::setPosition(points, window);
    ASSERT_NE(2, button.draw(40, 180, 280, 380, window, true));
    button.menuNumSet(0);

    points.x = 40;
    points.y = 328;
    Mouse::setPosition(points, window);
    ASSERT_NE(2, button.draw(40, 180, 280, 380, window, true));
    button.menuNumSet(0);

    points.x = 88;
    points.y = 328;
    Mouse::setPosition(points, window);
    ASSERT_NE(2, button.draw(40, 180, 280, 380, window, true));
    button.menuNumSet(0);
}

TEST(draw, UncorrectPoint3)
{
    points.x = 39;
    points.y = 380;
    Mouse::setPosition(points, window);
    ASSERT_NE(3, button.draw(40, 180, 280, 380, window, true));
    button.menuNumSet(0);

    points.x = 88;
    points.y = 380;
    Mouse::setPosition(points, window);
    ASSERT_NE(3, button.draw(40, 180, 280, 380, window, true));
    button.menuNumSet(0);

    points.x = 40;
    points.y = 428;
    Mouse::setPosition(points, window);
    ASSERT_NE(3, button.draw(40, 180, 280, 380, window, true));
    button.menuNumSet(0);

    points.x = 88;
    points.y = 428;
    Mouse::setPosition(points, window);
    ASSERT_NE(3, button.draw(40, 180, 280, 380, window, true));
    button.menuNumSet(0);
}

TEST(output_str, CorrectPars1)
{
    GiveRes tst1("Advantegeous", 349, 200, "NO");
    ASSERT_EQ(
            "Advantegeous      349           200           NO",
            tst1.output_str());

    GiveRes tst2("MySmart", 300, 10, 200);
    ASSERT_EQ(
            "MySmart           300           10            200",
            tst2.output_str());

    GiveRes tst3("Light", 890, 91, 16);
    ASSERT_EQ(
            "Light             890           91            16",
            tst3.output_str());
}

TEST(output_str, UnCorrectPars1)
{
    GiveRes tst1("Advantegeous", 349, 200, "NO");
    ASSERT_NE(
            "Advantegeous      349           200         NO",
            tst1.output_str());

    GiveRes tst2("MySmart", 300, 10, 200);
    ASSERT_NE(
            "MySmart           300           10           200",
            tst2.output_str());

    GiveRes tst3("Light", 890, 91, 16);
    ASSERT_NE(
            "Light             890           91           16",
            tst3.output_str());
}

}
