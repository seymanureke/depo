# depo
Sharpe Oranı Hesaplama (C Programı)

Bu proje, C programlama dili kullanılarak finansal analizde önemli bir metrik olan Sharpe Oranı'nı hesaplayan basit bir uygulamadır. Kullanıcıdan yatırımın beklenen getirisi, risksiz faiz oranı ve yatırımın riskini temsil eden standart sapma değerleri alınarak, yatırımın risk başına sağladığı ek getiri hesaplanır.

Program, finansal piyasalarda kantitatif analiz uygulamalarına bir giriş niteliği taşır.

Sharpe Oranı Nedir?

Sharpe Oranı, riskli bir yatırımın her birim risk için ne kadar fazla getiri sağladığını gösterir. Bu oran, yatırımların yalnızca getirilerine değil, bu getirilerin hangi riskle elde edildiğine de odaklanır.

Formül:

Sharpe Oranı = (Yatırım Getirisi - Risksiz Faiz Oranı) / Standart Sapma

Yorumlama:

1'in altındaki değerler zayıf olarak değerlendirilir.

1 ile 2 arasındaki değerler iyi kabul edilir.

2 ile 3 arasındaki değerler çok iyi kabul edilir.

3 ve üzerindeki değerler mükemmel olarak yorumlanır.

Programın Derlenmesi ve Çalıştırılması

Terminali açın ve kaynak dosyanın bulunduğu klasöre gidin.

Aşağıdaki komutu kullanarak programı derleyin:

gcc sharpe.c -o sharpe

Daha sonra şu komutla çalıştırın:

./sharpe

Not: Eğer Windows kullanıyorsanız, derleme sonrası "sharpe.exe" dosyası oluşur ve onu çalıştırabilirsiniz.

Örnek Kullanım:

Yatırımın beklenen getirisini girin (örn: 0.15): 0.15
Risksiz faiz oranını girin (örn: 0.05): 0.05
Yatırımın standart sapmasını girin (örn: 0.12): 0.12

--- Sharpe Oranı Hesaplama Sonucu ---
Sharpe Oranı: 0.83
Yorum: Sharpe oranı düşük. Yatırımın riskine göre getirisi zayıf.

Kantitatif Analiz Hakkında

Bu uygulama, kantitatif (nicel) analiz kavramına temel düzeyde bir giriş yapmayı amaçlar. Kantitatif analiz, yatırım kararlarında veri, matematiksel modeller ve istatistiksel yöntemlerin kullanıldığı bir yaklaşımdır. Finans sektöründe sıkça başvurulan bu yöntem, objektif ve ölçülebilir kararlar almayı kolaylaştırır.
