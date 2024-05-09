#include "Functions.hpp"

int main()
{
//    Створіть клас Passport (паспорт), який міститиме  паспортну інформацію про громадянина України.
//    За допомогою механізму успадкування, реалізуйте клас  ForeignPassport (закордонний паспорт) похідний від Passport.  Нагадаємо, що закордонний паспорт містить крім паспортних спортивних даних, також дані про візи, номер закордонного паспорта.
    ForeignPassport ivanRul("Ivan", "Rulevskyi", 30, "Ukraine", "USA", 458834);
    ivanRul.printDataForeignPassport();
    ivanRul.setVisa("England");
    ivanRul.setNuber(238844);
    ivanRul.printDataForeignPassport();
    
    
//    Створіть клас Student, який міститиме інформацію про студента.
//    За допомогою механізму успадкування, реалізуйте клас  Aspirant (аспірант - студент, який готується до захисту кандидатської роботи) похідний від Student.
    
    Aspirant ivanRulStud("Ivan", "Rulevskyi", 30, "aircraft engine development", "reduction in fuel consumption");
    ivanRulStud.printAspirant();
    ivanRulStud.setWorkTheme("improvement of air compression performance in the compressor");
    ivanRulStud.printAspirant();
    
    
}
