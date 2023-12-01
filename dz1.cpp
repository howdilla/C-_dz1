#include <iostream> 
#define _USE_MATCH_DEFINES
#include <math.h> 

/*Task1*/
double area(double b1, double b2, double h)
{
    double area = 0.0;
    area = ((b1 + b2) / 2) * h;
    return area;
    /*Для начала мы создаём функцию,
    которая будет расчитывать площадь трапеции, считая, что стороны b1, b2 и высоту h
    пользователь введет с клавиатуры*/
}

/*Task2*/
double lenght(int r)
{
    double lenght = 0.0;
    double pi = 0;
    pi = 3.14;
    lenght = 2 * pi * r;
    return lenght;
    /*Для начала мы создаём функцию,
    которая будет расчитывать длину окружности, считая что радиус r
    пользователь введет с клавиатуры, а число пи явялется константой*/
}

double areaCircle(int r)
{
    double areaCircle = 0.0;
    double pi = 0;
    pi = 3.14;
    areaCircle = pi * (r ^ 2);
    return areaCircle;
    /*Для начала мы создаём функцию,
    которая будет расчитывать площадь круга, считая что радиус r
    пользователь введет с клавиатуры, а число пи явялется константой*/
}

/*Task3*/
int areaRigTriangle(int a, int b)
{
    int areaRigTriangle = 0;
    areaRigTriangle = (a * b) / 2;
    return areaRigTriangle;
    /*Для начала мы создаём функцию,
    которая будет расчитывать площадь прямоугольного треугольника, считая что значения катетов a и b
    пользователь введет с клавиатуры*/
}
double Hypotenuse(int a, int b)
{
    double hypotenuse = 0;
    hypotenuse = sqrt((a * a) + (b * b));
    return hypotenuse;
    /*Для начала мы создаём функцию,
    которая будет расчитывать площадь прямоугольного треугольника
    используя библиотеку <math.h> для извлечения квадратного корня,
    считая что значения катетов a и b
    пользователь введет с клавиатуры*/
}

/*Task4*/
int Sumnumbers(int number)
{
    int sumnumber = 0;
    int count = 0;
    while (number > 0 && number <= 9999 && number >= 1000)
    {
        count = number % 10;
        sumnumber += count;
        number /= 10;
    }
    return sumnumber;
    /*Для начала мы создаём функцию,
     которая будет расчитывать сумму чисел четырёхзначного числа
     считая что число пользователь введет с клавиатуры.
     Для начала мы создаём цикл While с условием, что число больше нуля и
     является именно четырёхзначным(не более 9999 и не менее 1000). Далее число делется на 10 с остатком,
     что позволяет нам узнать последнюю цифру данного числа и сохранить её в переменную sumnumber,
     далее число целочисленно делится на 10 и оставляет в своей записи уже 3 числа,
     с которыми совершаются теже действия. Программа продолжается до тех пор,
     пока цифры в числе не закончаться. */
}


/*Task5*/
struct CartesianCoord
{
    double x = 0.0;
    double y = 0.0;
};
/*Для начала мы создаём структуру, которая будет содержать компоненты x и y,
которые соответствуют координатам в декартовом пространстве*/

struct PolarCoord
{
    double r = 0.0;
    double f = 0.0;
    /*Далее мы также создаём структуру для хранения компонентов r и f,
    которые будут соответствовать координатам в полярной системе координат*/
};
CartesianCoord Translation(const PolarCoord& coord)
{
    CartesianCoord trans;
    trans.x = coord.r * cos(coord.f);
    trans.y = coord.r * sin(coord.f);
    return trans;
    /*Теперь мы создаём функцию Translation,которая принимает структуру PolarCoord в качестве аргумента.
    И внутри функции создаём локальную переменную trans. Функция будет преобразовывать полярные
    координаты в декартовы с помощью библиотеки <math.h*/
}

/*Task6*/
struct CoordfromCartesian
{
    int z = 0;
    int d = 0;
    /*Для начала мы создаём структуру, которая будет содержать компоненты z и d,
             которые соответствуют координатам в декартовом пространстве*/
};
struct CoordfromPolar
{
    int rad = 0;
    int q = 0;
    /*Далее мы также создаём структуру для хранения компонентов R и F,
         которые будут соответствовать координатам в полярной системе координат*/
};

CoordfromPolar Translation2(const CoordfromCartesian& cord)
{
    CoordfromPolar trans2;
    trans2.rad = sqrt((cord.z * cord.z) + (cord.d * cord.d));
    trans2.q = tan(cord.d / cord.z);
    return trans2;
    /*Теперь мы создаём функцию Translation2 ,которая принимает структуру CoordfromCartesian в качестве аргумента.
    И внутри функции создаём локальную переменную trans2. Функция будет преобразовывать декартовы
    координаты в полярные с помощью библиотеки <math.h*/
}

/*Task7*/
struct RootsofQuadrEquat
{
    double firstroot = 0.0;
    double secondroot = 0.0;
    /*Для начала мы создаём структуру, которая будет содержать компоненты firstroot и secondroot,
        которые соответствуют корням квадратного уравнения*/
};

struct Equation
{
    double numberwithx = 0.0;
    double numberwithx2 = 0.0;
    double freemember = 0.0;
    double D = ((numberwithx * numberwithx) - (4 * numberwithx2 * freemember));
    /*Далее мы создаём структуру, которая будет содержать компоненты
    numberwithx, numberwithx2, freemember и D , где numberwithx это константа с x,
    numberwithx2 это константа с x в квадрате, freenumber это константа без x
    и D это дискриминант квадратного уравнения, который находится при помощи формулы*/
};

RootsofQuadrEquat Culculation(const Equation& l)
{
    RootsofQuadrEquat culc;
    culc.firstroot = (((-l.numberwithx) + sqrt(l.D)) / (2 * l.numberwithx2));
    culc.secondroot = (((-l.numberwithx) - sqrt(l.D)) / (2 * l.numberwithx2));
    return culc;
    /*Теперь мы создаём функцию Culculation ,которая принимает структуру Equation в качестве аргумента.
    И внутри функции создаём локальную переменную culc.
    Функция будет расчитывать корни квадратного уравнения по заданным формулам*/
}

/*Task8*/
float Med(float firstside, float secondside, float thirdside)
{
    return sqrt(2 * secondside * secondside + 2 * thirdside * thirdside - firstside * firstside) / 2;
    /*Для начала мы создаем функцию, которая будет находить медианы треугольника,
    используя общеизвестную формулу*/
}

/*Task10*/
bool EquilateralTriangle(double sideA, double sideB, double sideC)
{
    if (sideA == sideB)
    {
        return true;
    }
    return false;

    /*Создаём булеву функцию, которая будет проверять является ли треугольник со сторонами sideA, sideB и sideC.*/
}

/*Task11*/
bool Discount(double amount)
{
    if (amount > 1000)
    {
        return true;
    }
    return false;
    /*Создаём булеву функцию, которая будет проверять является ли сумма покупки выше 1000*/
}

/*Task12*/
double CreateIdealWeight(double h, double w)
{
    double IdealWeight = h - 100; //функция для расчёта идеального веса
    return IdealWeight;
}

/*Task15*/
void Months(int month)
{
    if (month == 1)
    {
        std::cout << "\n" << "For task 15 result is " << "January, Winter";
    }
    else if (month == 2)
    {
        std::cout << "\n" << "For task 15 result is " << "February, Winter";
    }
    else if (month == 3)
    {
        std::cout << "\n" << "For task 15 result is " << "March, Spring";
    }
    else if (month == 4)
    {
        std::cout << "\n" << "For task 15 result is " << "April, Spring";
    }
    else if (month == 5)
    {
        std::cout << "\n" << "For task 15 result is " << "May, Spring";
    }
    else if (month == 6)
    {
        std::cout << "\n" << "For task 15 result is " << "June, Summer";
    }
    else if (month == 7)
    {
        std::cout << "\n" << "For task 15 result is " << "July, Summer";
    }
    else if (month == 8)
    {
        std::cout << "\n" << "For task 15 result is " << "August, Summer";
    }
    else if (month == 9)
    {
        std::cout << "\n" << "For task 15 result is " << "September, Autumn";
    }
    else if (month == 10)
    {
        std::cout << "\n" << "For task 15 result is " << "October, Autumn";
    }
    else if (month == 11)
    {
        std::cout << "\n" << "For task 15 result is " << "November, Autumn";
    }
    else if (month == 12)
    {
        std::cout << "\n" << "For task 15 result is " << "December, Winter";
    }
    else
    {
        std::cout << "\n" << "Invalid month number!";
    }
    /*создаём функцию Months, которая принимает номер месяца и выводит название месяца
    и времени года. Благодаря условным операторам if-else,
    мы определяем соответствующие названия месяца и времени года в
    зависимости от введенного номера месяца.*/
}

// 16
void LuckyNumber(int Number6Digit)
{
    int firsthalf = 0, secondhalf = 0;

    // число 6-ти значное, делим его на две части: первая половина и вторая

    firsthalf = Number6Digit / 100000 % 10 + Number6Digit / 10000 % 10 + Number6Digit / 1000 % 10;
    secondhalf = Number6Digit / 100 % 10 + Number6Digit / 10 % 10 + Number6Digit % 10;

    // дальше условие на равенстов двух частей соответственный вывод

    if (firsthalf == secondhalf)
        std::cout << "Number is lucky!" << std::endl;
    else
        std::cout << "Number is not lucky." << std::endl;
}

// 17
void Penny(int penny)
{
    int lastpenny = 0;

    lastpenny = penny % 10; // это последняя цифра от введенного значения

    // от 5 до 20 используется "копеек"
    if (penny >= 5 && penny <= 20)
        std::cout << penny << " копеек" << std::endl;

    // в остальном зависит от последней цифры
    else
        std::cout << penny << (lastpenny == 1 ? " копейка" : lastpenny > 1 && lastpenny < 5 ? " копейки" : " копеек") << std::endl;
}

// 18
int Reverse(int o)
{
    int u = 0;

    // цикл, в котором мы находим обратное число
    while (o)
    {
        u = 10 * u + o % 10;
        o /= 10;
    }

    return u;
}

// 19
int SumOfNumber3Digit(int Number3Digit)
{
    int sum = 0;

    // цикл, в котором мы находим сумму цифр 3-ёх значного числа
    while (Number3Digit != 0)
    {
        sum += Number3Digit % 10;
        Number3Digit /= 10;
    }

    return sum;
}

int MultOfNumber3Digit(int Number3Digit)
{
    int mult = 1;

    // цикл, в котором мы находим произведение цифр 3-ёх значного числа
    while (Number3Digit > 0)
    {

        mult *= Number3Digit % 10;
        Number3Digit /= 10;
    }

    return mult;
}

// 20
void Task20(float m, float n, float k, float p)
{
    if (m < k && n < p || m < p && n < k)
        std::cout << "It is possible." << std::endl;
    else
        std::cout << "It is not posibble." << std::endl;
}


int main()
{
    {
        /*task1*/
        double b1 = 0.0;
        double b2 = 0.0;
        double h = 0.0;
        std::cout << "For task 1 enter b1: ";
        std::cin >> b1;

        std::cout << "For task 1 enter b2: ";
        std::cin >> b2;

        std::cout << "For task 1 enter h: ";
        std::cin >> h;
        std::cout << "\n" << "1.Your area of trapezoid is : " << area(b1, b2, h);
        ;
        /*Мы создаем переменные b1, b2 и h с типом данных double, далее пользователь вводит
        с клавиатуры значения для каждой переменной.
        В конце программа выдаёт результат,основываясь на функции area();
        */
    }
    {
        /*Task2*/
        int r = 0.0;
        std::cout << "\n" << "For task 2 enter r: ";
        std::cin >> r;
        std::cout << "\n" << "2. Your circumference lenght is: " << lenght(r);
        std::cout << ", Your area of circle is : " << areaCircle(r);

        /*Мы создаем переменную r с типом данных int, далее пользователь вводит
        с клавиатуры значения для этой переменной.
        В конце программа выдаёт результат(длину окружности и площадь круга),
        основываясь на функции lenght() и функции areaCircle() соотвественно;
        */
    }
    {
        /*Task3*/
        int a = 0;
        int b = 0;
        std::cout << "\n" << " For task 3 enter a: ";
        std::cin >> a;
        std::cout << "For task 3 enter b: ";
        std::cin >> b;
        std::cout << "\n" << "3.Your area of a right triangle is " << areaRigTriangle(a, b);
        std::cout << ", Your hupotenuse is " << Hypotenuse(a, b);

        /*Мы создаем переменные a и b(Катеты прямоугольного треугольника) с типом данных int,
        далее пользователь вводит с клавиатуры значения для этих переменных.
        В конце программа выдаёт результат(площадь прямоугольного треугольника и гипотенузу),
        основываясь на функции areaRigTriangle() и функции Hypotenuse() соотвественно;
        */
    }

    {
        /*Task4*/
        int number = 0;
        std::cout << "\n" << "For task 4 enter number:  ";
        std::cin >> number;
        std::cout << "\n" << "4.Your sum of the digits of the number " << number << " is " << Sumnumbers(number);

        /*Мы создаем переменную number (четырёхзначное число) с типом данных int,
        далее пользователь вводит с клавиатуры значение для этой переменной.
        В конце программа выдаёт результат(сумма чисел четырёхзначного числа),
        основываясь на функции Sumnumbers().
        */
    }

    {
        /*Task5*/
        PolarCoord coord;
        std::cout << "\n" << "For task 5 enter r: ";
        std::cin >> coord.r;
        std::cout << "For task 5 enter f: ";
        std::cin >> coord.f;
        CartesianCoord trans = Translation(coord);
        std::cout << "\n" << "5. Your result is (" << trans.x << " ; " << trans.y << ")";

        /*Пользователь вводит с клавиатуры два числа, это радиус r и угол f,
        соответствующие полярной системе координат. Далее мы вызываем функцию Translation
        и передаём ей структуру coord. То,что возвращает функция мы сохраняем в переменную trans.
        В конце программа выдаст координаты в декартовой системе координат в круглых скобках */
    }

    {
        /*Task6*/
        CoordfromCartesian cord;
        std::cout << "\n" << "For task 6 enter z: ";
        std::cin >> cord.z;
        std::cout << "For task 6 enter d: ";
        std::cin >> cord.d;
        CoordfromPolar trans2 = Translation2(cord);
        std::cout << "\n" << "6. Your result is (" << trans2.rad << " ; " << trans2.q << ")";


        /*Пользователь вводит с клавиатуры два числа, это координаты z и d,
        соответствующие дукартовой системе координат. Далее мы вызываем функцию Translation2
        и передаём ей структуру cord.То,что возвращает функция мы сохраняем в переменную trans2.
        В конце программа выдаст координаты в полярной системе координат в круглых скобках */
    }

    {
        /*Task7*/
        Equation l;
        std::cout << "\n" << "For task 7 enter the firts number (The constant with x sguared): ";
        std::cin >> l.numberwithx2;
        std::cout << "For task 7 enter the Second number (The constant with x): ";
        std::cin >> l.numberwithx;
        std::cout << "For task 7 enter the second number (The constant without x): ";
        std::cin >> l.freemember;
        RootsofQuadrEquat culc = Culculation(l);
        std::cout << "\n" << "7. Your roots of the quadratic equation are " << culc.firstroot << " and " << culc.secondroot;


        /*Пользователь вводит с клавиатуры три числа, это переменные numberwithx, numberwithx2 и freemember,
        соответствующие константам квадратного уравнения. Далее мы вызываем функцию Culculation
        и передаём ей структуру l.То,что возвращает функция мы сохраняем в переменную culc.
        В конце программа выдаст корни квадратного уравнения, константы которого были введены */
    }

    {
        /*Task8*/
        float firstside = 0.0, secondside = 0.0, thirdside = 0.0;

        std::cout << "\n\nFor Task 8.\nEnter a, b, c: ";
        std::cin >> firstside >> secondside >> thirdside;

        if (firstside > 0 && secondside > 0 && thirdside > 0 && firstside + secondside > thirdside && secondside + thirdside > firstside && thirdside + firstside > secondside)
            std::cout << "Answer = " << Med(firstside, secondside, thirdside) << std::endl;

        else
            std::cout << "Something is wrong!" << std::endl;

    }

    {
        /*Task #9*/
        /*создаем и инициализируем переменные для сохранения вводимых пользователем данных*/
        int second = 0;
        std::cout << "\n" << "For task 9 Enter seconds: " << std::endl;
        std::cin >> second;
        int hour = second / 3600; //формула для расчёта целого количества часов 
        int minute = second / 60; //формула для расчёта целого количества минут 
        std::cout << "9.Result : hour =" << hour << ", minute = " << minute << std::endl;

    }

    {
        /*Task10*/
        double sideA = 0.0;
        double sideB = 0.0;
        double sideC = 0.0;
        std::cout << "\n" << "For task 10 enter the first side(A) of triangle: ";
        std::cin >> sideA;
        std::cout << "For task 10 enter the second side(B) of triangle: ";
        std::cin >> sideB;
        std::cout << "For task 10 enter the third side(C) of triangle: ";
        std::cin >> sideC;
        if (EquilateralTriangle(sideA, sideB, sideC))
        {
            std::cout << "\n" << "10.The triangle is isosceles! ";
        }
        else
        {
            std::cout << "\n" << "10.The triangle is not isosceles!";
        }

        /*Пользователь вводит стороны треугольника с клавиатуры.
        Функция проверяет является ли треугольник равнобедренным.
        Если треугольник равнобедренный программа выведет "The triangle is isosceles",
        если треугольник не равнобедренный "The triangle is not isosceles"*/
    }

    {
        /*Task11*/
        double amount = 0.0;
        double finalAmount = 0.0;
        std::cout << "\n" << "For task 11 enter purchase amount: ";
        std::cin >> amount;
        if (Discount(amount))
        {
            finalAmount = (amount - (amount * 0.1));
            std::cout << "\n" << "The final amount of your purchase is " << finalAmount;
        }
        else
        {
            std::cout << "\n" << "The amount of your purchase is " << amount << " You do not have a discount!";
        }

        /*Пользователь вводит cумму покупки с клавиатуры.
       Функция проверяет является ли сумма покупки больше 1000.
       Если сумма больше 1000 программа выведет конечную сумму покупки с учётом скидки,
       если сумма меньше 1000, то конечная сумма останется прежней*/
    }

    {
        /*Task12*/
        //создаём и инициализируем переменные для сохранения вводимых пользователем данных
        double height = 0.;
        double weight = 0.;
        std::cout << "\n" << "For task 12 enter height and weight: " << std::endl;
        std::cin >> height >> weight; //считываем данные вводимые пользователем
        if (CreateIdealWeight(height, weight) != weight) //если иделальный вес и текущий НЕ равны
        {
            /*для упрощения создаём переменную и сохраняем в ней значение функции*/
            double IdealWeight = CreateIdealWeight(height, weight);
            if (IdealWeight > weight) //Если идеальной вес больше текущего
            {
                std::cout << "Result Task 12: we advise you to gain weight" << std::endl;
            }
            else //Если идеальной вес меньше текущего
            {
                std::cout << "Result Task 12: we advise you to lose weight" << std::endl;
            }
        }
        else // если иделальный вес и текущий равны
        {
            std::cout << "Result Task 12: Your weight is ideal weight!" << std::endl;
        }

    }

    {
        /*Task13*/
        std::srand(std::time(nullptr));
        std::cout << "\n" << "For task 13 enter two random numbers [0, 9]: " << std::endl;
        int comp = 1; /*переменная для расчёта результата(в ней фиксируется правильный ответ)*/
        for (int n = 0; n != 2; ++n) /*идём дважды, тк нам нужно два рандомных числа*/
        {
            int na = 10;
            while (na > 9) /*промежуток от 0 до 9 (дан в задании)*/
                na = 1 + std::rand() / ((9 + 1u) / 6); /*создаём рандомное число*/
            std::cout << na << ' ';
            comp *= na; /*считаем правильное решение (произведение)*/
        }
        std::cout << std::endl;
        std::cout << "Enter composition these numbers: " << std::endl;
        int comp_used = 0; //задём переменную для фиксации введённого пользователем значания
        std::cin >> comp_used;
        if (comp_used == comp)
        {
            std::cout << "Result Task 13: WOW! You don't make mistake" << std::endl;
        }
        else
        {
            std::cout << "Result Task 13: You make mistake, true answer = " << comp << std::endl;
        }
    }

    {
        /*Task #14*/
        //создадим и инциализируем переменные, необходимые для сохранения вводимых пользователем данных
        double Cost_Hour = 0.;
        double Long_Conversation = 0.;
        double Day_Week = 1;
        std::cout << "\n" << "For task 14 enter cost conversation, long conversation(in hour), day week[1-7]: " << std::endl;
        std::cin >> Cost_Hour >> Long_Conversation >> Day_Week;
        double Cost_Conversation = Cost_Hour * Long_Conversation; /*Создаём переменную для подсчёта стоимости переговоров*/
        if (Day_Week == 6 || Day_Week == 7) /*Создаём условие для субботы и воскресенья(6 и 7 дни недели)*/
        {
            Cost_Conversation -= Cost_Conversation * 0.2; /*вычисляем стоимость со скидкой*/
            std::cout << "Result Task 14: Cost conversation = " << Cost_Conversation << std::endl;
        }
        else
        {
            std::cout << "Result Task 14: Cost conversation = " << Cost_Conversation << std::endl;
        }
    }
    {
        /*Task15*/
        int month = 0;
        std::cout << "\n" << "For task 15 enter number of month: ";
        std::cin >> month;
        Months(month);
        
        /*Пользователь с клавиатуры вводит число, оно сохраняется в переменную month,
        далее вызывается функция Months и программа выдаёт результат*/
    }

    {
        /*
        16. Определить, является ли шестизначное число "счастливым"
        */

        int Number6Digit = 0;

        std::cout << "\nTask 16.\nEnter number: ";
        std::cin >> Number6Digit;

        // проверка на 6-ти значность
        if (Number6Digit >= 100000 && Number6Digit <= 999999)
            LuckyNumber(Number6Digit);
        else
            std::cout << "Something wrong." << std::endl;
    }

    {
        /*
        17. Написать программу, которая при вводе числа в диапазоне от 1 до 99
        добавляет к нему слово "копейка" в правильной форме.
        */

        // для корректной работы русского языка
        setlocale(LC_ALL, "Russian");

        int penny = 0, lastpenny = 0;

        std::cout << "\nTask 17.\nEnter number: ";
        std::cin >> penny;

        if (penny >= 1 && penny <= 99)
            Penny(penny);
    }

    {
        /*
        18. Дано натуральное четырехзначное число.
        Выяснить, является ли оно палиндромом.
        */

        int o = 0;

        std::cout << "\nTask 18.\nEnter number: ";
        std::cin >> o;

        if (o == Reverse(o))
            std::cout << "This is a palindrom." << std::endl;

        else
            std::cout << "This is not a palindrom" << std::endl;
    }

    {
        /*
        19. Дано трёхзначное число.
        Определить: 19.1 является ли произведение его цифр больше числа b
        19.2 кратна ли 7 сумма его цифр.
        */

        int Number3Digit = 0, multdigit = 0, sumdigit = 0;
        float e = 0.0;

        std::cout << "\nTask 19.\nEnter number and b: ";
        std::cin >> Number3Digit >> e;

        // проверка на 3-ёх значность
        if (Number3Digit > 0 && Number3Digit / 100 >= 1 && Number3Digit / 100 <= 9)
        {
            multdigit = MultOfNumber3Digit(Number3Digit);
            std::cout << "19.1 ";

            if (multdigit > e)
            {
                std::cout << "Yes: " << multdigit << " > " << e;
            }

            else
                std::cout << "No: " << multdigit << " <= " << e;
        }

        else
            std::cout << "Something is wrong.";

        std::cout << "\n19.2 ";

        if (SumOfNumber3Digit(Number3Digit) % 7 == 0)
        {
            std::cout << "Yes";
        }

        else
            std::cout << "No";
    }

    {
        /*
        20. Даны вещественные положительные числа m, n, o, p.
        Выяснить, можно ли прямоугольник со сторонами m, n
        поместить в прямоугольник со сторонами o, p так,
        чтобы стороны одного прямоугольника были параллельны сторонам другого.
        */

        float m = 0.0, n = 0.0, k = 0.0, p = 0.0;

        std::cout << "\nTask 20.\nEnter m, n, k, p: ";
        std::cin >> m >> n >> k >> p;

        Task20(m, n, k, p);
    }
}
















