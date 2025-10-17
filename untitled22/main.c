#include <stdio.h>

int main() {
    float getiri, risksiz_getiri, standart_sapma;

    // Girdi alma
    printf("Yatirimin beklenen getirisini girin (orn: 0.15): ");
    scanf("%f", &getiri);

    printf("Risksiz faiz oranini girin (orn: 0.05): ");
    scanf("%f", &risksiz_getiri);

    printf("Yatirimin standart sapmasini girin (orn: 0.12): ");
    scanf("%f", &standart_sapma);

    // Sharpe oranı hesaplama
    float sharpe = (getiri - risksiz_getiri) / standart_sapma;

    // Sonuç gösterimi
    printf("\n--- Sharpe Orani Hesaplama Sonucu ---\n");
    printf("Sharpe Orani: %.2f\n", sharpe);

    // Yoruma göre değerlendirme
    if (sharpe < 1.0)
        printf("Yorum: Sharpe orani dusuk. Yatirimin riskine gore getirisi zayif.\n");
    else if (sharpe < 2.0)
        printf("Yorum: Sharpe orani iyi. Yatirim mantikli olabilir.\n");
    else if (sharpe < 3.0)
        printf("Yorum: Sharpe orani cok iyi. Risk basina yuksek getiri.\n");
    else
        printf("Yorum: Sharpe orani mukemmel! Risk basina olaganustu getiri.\n");

    return 0;
}
