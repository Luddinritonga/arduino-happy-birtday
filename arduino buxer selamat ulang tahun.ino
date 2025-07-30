int buzzer = 8;

// Frekuensi nada
int melody[] = {
  392,392,440,392,523,494,      // Selamat ulang tahun kami ucapkan
  392,392,440,392,587,523,      // Selamat panjang umur kita akan doakan
  392,392,784,659,523,494,440,  // Selamat sejahtera, sehat sentosa
  698,698,659,523,587,523,      // Selamat panjang umur dan bahagia

  // Ulang bait terakhir biar lebih panjang
  392,392,784,659,523,494,440,  
  698,698,659,523,587,523,

  // Penutup lembut (ulang nada akhir)
  523,523,523
};

// Durasi nada: 4=quarter note, 2=half note, 1=whole note
int noteDurations[] = {
  4,4,4,4,4,2,
  4,4,4,4,4,2,
  4,4,4,4,4,4,2,
  4,4,4,4,4,2,

  // ulang bait terakhir
  4,4,4,4,4,4,2,
  4,4,4,4,4,2,

  // penutup lembut
  2,2,4
};

void setup() {
  // tidak ada setup
}

void loop() {
  int notes = sizeof(melody) / sizeof(melody[0]);

  for (int thisNote = 0; thisNote < notes; thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(buzzer, melody[thisNote], noteDuration);

    // jeda antar nada agar terdengar lebih natural
    int pauseBetweenNotes = noteDuration * 1.4;
    delay(pauseBetweenNotes);

    noTone(buzzer);
  }

  delay(4000); // jeda 4 detik sebelum mengulang lagi
}
