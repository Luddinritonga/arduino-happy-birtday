# 🎂 Arduino Project: Lagu "Selamat Ulang Tahun" (Versi Full & Lama) dengan Buzzer

Proyek Arduino sederhana yang memainkan lagu *"Selamat Ulang Tahun"* menggunakan **buzzer pasif**.  
Versi ini dibuat lebih **panjang & natural** dengan pengulangan bait terakhir agar terdengar seperti lagu aslinya. [Jalankan langsung di Wokwi](https://wokwi.com/projects/437873273589212161)

Cocok untuk: [Tonton tutorial di YouTube](https://youtu.be/abcdefghijk) <br>
✅ Tugas sekolah / kuliah  
✅ Belajar Arduino dasar  
✅ Hadiah unik ulang tahun 🎉

---

## 📦 Komponen yang Dibutuhkan
- Arduino Uno (atau Nano / Mega)
- Buzzer pasif
- Kabel jumper
- Breadboard (opsional)

---

## ⚡ Rangkaian
Sambungkan seperti ini:
- Pin **D8** Arduino → kaki (+) buzzer
- Pin **GND** Arduino → kaki (–) buzzer

---

## 🎵 Melodi & Durasi
Bagian lagu:
- Selamat ulang tahun kami ucapkan
- Selamat panjang umur kita akan doakan
- Selamat sejahtera, sehat sentosa
- Selamat panjang umur dan bahagia

Versi ini menambahkan pengulangan bait terakhir + nada penutup agar lagu terdengar lebih lama dan natural.

---

## 💻 Kode Lengkap Arduino
Salin dan upload ke **Arduino IDE**:

```cpp
int buzzer = 8;

// Nada (Hz)
int melody[] = {
  392,392,440,392,523,494,      // Selamat ulang tahun kami ucapkan
  392,392,440,392,587,523,      // Selamat panjang umur kita akan doakan
  392,392,784,659,523,494,440,  // Selamat sejahtera, sehat sentosa
  698,698,659,523,587,523,      // Selamat panjang umur dan bahagia

  // Ulang bait terakhir
  392,392,784,659,523,494,440,
  698,698,659,523,587,523,

  // Penutup lembut
  523,523,523
};

// Durasi nada (4=quarter note, 2=half note)
int noteDurations[] = {
  4,4,4,4,4,2,
  4,4,4,4,4,2,
  4,4,4,4,4,4,2,
  4,4,4,4,4,2,

  // Ulang bait terakhir
  4,4,4,4,4,4,2,
  4,4,4,4,4,2,

  // Penutup lembut
  2,2,4
};

void setup() {
  // Tidak ada setup khusus
}

void loop() {
  int notes = sizeof(melody) / sizeof(melody[0]);

  for (int thisNote = 0; thisNote < notes; thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(buzzer, melody[thisNote], noteDuration);

    int pauseBetweenNotes = noteDuration * 1.4;
    delay(pauseBetweenNotes);

    noTone(buzzer);
  }

  delay(4000); // jeda sebelum mengulang lagi
}
```

## 📷 **skema / rangkaian**

![buzer happy birtday](https://github.com/Luddinritonga/arduino-happy-birtday/blob/main/skema.png)


## 🔧 **Cara Upload**
1. Sambungkan Arduino ke PC via kabel USB
2. Buka file `.ino` di Arduino IDE
3. Pilih board dan port yang sesuai
4. Upload kode ke Arduino




## 📫 Contact Me
[![Website](https://img.shields.io/badge/Website-000000?style=for-the-badge&logo=about-dot-me&logoColor=white)](https://luddinritonga.github.io/fortopolio/)
[![GitHub](https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github&logoColor=white)](https://github.com/luddinritonga)
[![Email](https://img.shields.io/badge/Email-D14836?style=for-the-badge&logo=gmail&logoColor=white)](mailto:luddinritonga03@gmail.com)
[![YouTube](https://img.shields.io/badge/YouTube-FF0000?style=for-the-badge&logo=youtube&logoColor=white)](https://youtube.com/@sekedarcandu)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/luddin-ritonga-727920307?)
