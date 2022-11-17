/*
        --------------------------------------
        | Engineer : Karim Mohammed Aboelazm |
        --------------------------------------
        | C++ full cource in Obour Institute |
        --------------------------------------

*/


// To use input and output functions you should call this library 
#include <iostream>
// To use mathematical function you should call this Library 
#include <cmath>
// To use random integer numbers you should call this Library 
#include <cstdlib>
// To use complex numbers you should call this Library 
#include <complex>
// To use input and output functions in standard you should call this namespace
using namespace std;
// main function
int main(){
    /*
    ------------------------------------------------------------
        Trigonometric functions
        * 1.  sin(x)              -> (جا س) دالة جيب الزاوية 
        * 2.  cos(x)              -> (جتا س) دالة جيب تمام الزاوية 
        * 3.  tan(x)              -> (ظا س) دالة ظل الزاوية 
        * 4.  1/sin(x) = csc(x)   -> (قتا س) دالة قاطع تمام الزاوية 
        * 5.  1/cos(x) = sec(x)   -> (قا س) دالة قاطع الزاوية 
        * 6.  1/tan(x) = cot(x)   -> (ظتا س) دالة ظل تمام الزاوية 
        * 7.  asin(x)             -> الدالة العكسية جيب الزاوية 
        * 8.  acos(x)             -> الدالة العكسية جيب تمام الزاوية 
        * 9.  atan(x)             -> الدالة العكسية ظل الزاوية 
        * 10. 1/sin(x) = acsc(x)  -> الدالة العكسية قاتع تمام الزاوية 
        * 11. 1/cos(x) = asec(x)  -> الدالة العكسية قاطع الزاوية 
        * 12. 1/tan(x) = acot(x)  -> الدالة العكسية ظل تمام الزاوية 
    --------------------------------------------------------------
    */
   
    /*
    -----------------------------------------------------------------
        Hyperbolic functions
        * 1.  sinh(x)              -> دالة جيب الزاوية الزائدية
        * 2.  cosh(x)              -> دالة جيب تمام الزاوية الزائدية 
        * 3.  tanh(x)              -> دالة ظل الزاوية الزائدية 
        * 4.  1/sinh(x) = csch(x)  -> دالة قاطع تمام الزاوية الزائدية 
        * 5.  1/cosh(x) = sech(x)  -> دالة قاطع الزاوية الزائدية 
        * 6.  1/tanh(x) = coth(x)  ->  دالة ظل تمام الزاوية الزائدية 
        * 7.  asinh(x)             -> الدالة العكسية لدالة جيب الزاوية الزائدية 
        * 8.  acosh(x)             -> الدالة العكسية لدالة جيب تمام الزاوية الزائدية 
        * 9.  atanh(x)             -> الدالة العكسية لدالة ظل الزاوية الزائدية 
        * 10. 1/asinh(x) = acsch(x)-> الدالة العكسية لدالة قاطع تمام الزاوية الزائدية
        * 11. 1/acosh(x) = asech(x)-> الدالة العكسية لدالة قاطع الزاوية الزائدية 
        * 12. 1/atanh(x) = acoth(x)-> الدالة العكسية لدالة ظل تمام الزاوية الزائدية
    -----------------------------------------------------------------
   */

    /*
    -------------------------------------------------
        round functions 
        * 1. ceil(3.2)  -> 4 > تقريب الرقم الي اعلي بغض النظر عن الرقم بعد العلامة العشرية
        * 2. floor(3.9) -> 3 > تقريب الرقم الي اسفل بغض النظر عن الرقم بعد العلامة العشرية 
        * 3. round(4.5) -> 5 > تقريب الرقم الي اعلي لأن الرقم بعد العلامة العشرية 5 او اكبر
        * 4. round(4.4) -> 4 > تقريب الرقم الي اسفل لأن الرقم بعد العلامة اصغر من 5
        * 5. trunc(3.14)-> 3 > ايجاد الرقم الصحيح و عدم ايجاد الكسور 
    --------------------------------------------------
    */
   
    /*
    ---------------------------------------------
        root functions 
        * 1. sqrt(25)     -> 5 ايجاد الجزر التربيعي 
        * 2. cbrt(27)     -> 3 ايجاد الجزر التكعيبي 
        * 3. pow(16,0.25) -> 2 ايجاد الجزر الرابع 
        * 4. pow(32,0.2) -> 2 ايجاد الجزر الخامس 
    ----------------------------------------------
    */
    
    /*
    ------------------------------------------------
        abslute functions 
        * 1. abs(-100)  -> 100 (القيمة الموجبة) ايجاد القيمة المطلقة للرقم
        * 2. fabs(-300) -> 300 (القيمة الموجبة) ايجاد القيمة المطلقة للرقم
    -------------------------------------------------
    */
    
    /*
    ------------------------------------------------
        comparision functions
        * 1. min (3,4) -> 3 ايجاد القيمة الصغري بين قيمتين
        * 2. fmin(3,4) -> 3 ايجاد القيمة الصغري بين قيمتين
        * 3. max (3,4) -> 4 ايجاد القيمة العظمي بين قيمتين
        * 4. fmax(3,4) -> 4 ايجاد القيمة العظمي بين قيمتين
    ----------------------------------------------------
    */
    
    /*
    --------------------------------------------------
        exponential function
        * 1. exp(2)  -> e*e ايجاد قيمة العدد النيبيري مرفوع لأس 
        * 2. exp2(2) -> 2*2 ايجاد قيمة العدد 2 مرفوع لأس 
        * 3. pow(5,2)-> 5*5 ايجاد قيمة اي رقم مرفوع لأي اس 
    ---------------------------------------------------
    */
    
    /*
    -------------------------------------------------
        Logarithms functions
        * 1. log(M_E)   -> 1 ايجاد اللوغاريتم الطبيعي الذي اساسه هـ  لأي عدد 
        * 2. log10(100) -> 2 ايجاد اللوغاريتم المعتاد الذي اساسه 10 لأي قيمه
        * 3. log2(16)   -> 4  ايجاد اللوغاريتم المعتاد الذي اساسه 2 لأي قيمه
        * 4. log(val)/log(base) -> ايجاد اي لوغاريتم لأي قيمة و لأي اساس
    ----------------------------------------------------
    */
    
    /*
    -------------------------------------------------
        hypot function            ______________
        * 1. hypot(3,4) -> 5 >  \/ (x*x) + (y*y)
    -------------------------------------------------
    */
    
    /*
    ------------------------------------------------
        modulas functions
        * 1. fmod(30,16) -> 14 > ايجاد باقي قسمة 30 علي 16
    ------------------------------------------------
    */
    
    /*
    --------------------------------------------
        is functions answer will be (true -> 1 , false -> 0)
        * 1. isgreater(4,5) -> 0 > دالة تفحص هل الرقم الاول اكبر من الثاني ام لا
        * 2. isgreaterequal(4,5) -> 0 > دالة تفحص هل الرقم الاول اكبر من او تساوي الثاني ام لا
        * 3. isless(3,5) -> 1 > دالة تفحص هل الرقم الاول اصغر من الثاني ام لا
        * 4. islessequal(3,5) -> 1 > دالة تفحص هل الرقم الاول اصغر من او تساوي الثاني ام لا
        * 5. isinf(4.0/0) -> 1 > دالة تفحص هل الرقم له نهاية ام لا
        * 6. isnan(0.0/0) -> 1 > دالة تفحص هل الرقم غير معين ام  لا
    ---------------------------------------------------
    */  
    
    /*
    --------------------------------------------------
        complex numbers 
        * 1. first step you should call the complex library like this >> 
            #include <complex>
        * 2. second step you should take an object from complex class and 
            pass datatype then var name and (real,imag); like this >>
            complex <double> c1 (3,4); 
        * 3. real(c1) -> 3 > ايجاد العدد الحقيقي من العدد المركب
        * 4. imag(c1) -> 4 > ايجاد العدد التخيلي من العدد المركب 
    ------------------------------------------------------
    */
    
    /*
    --------------------------------------------------------------------
        random integer numbers 
        * 1. first step you should call the cstdlib library like this >> 
            #include <cstdlib>
        * 2. second step you should take an object from cstdlib srand class >>
            srand(time(NULL));
        * 3. third step you should determine start number and range you
            int rnum = start + (rand() % range)
            int rnum = 5 + (rand() % 10) -> it will get any number between (5:15)
    ----------------------------------------------------------------   
    */
    
    return 0;
}
