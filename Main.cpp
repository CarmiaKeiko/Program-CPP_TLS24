#include <iostream>
#include <string>

using namespace std;

void recommendBook(const string& feeling) {
    if (feeling == "bahagia") {
        cout << "Rekomendasi buku: 'Laskar Pelangi' oleh Andrea Hirata, 'Pulang' oleh Tere Liye, 'Rindu' oleh Tere Liye, 'Keluarga Cemara' oleh Arswendo Atmowiloto, 'Dilan 1990' oleh Pidi Baiq, 'Cinta Brontosaurus' oleh Raditya Dika" << endl;
    } else if (feeling == "sedih") {
        cout << "Rekomendasi buku: 'Hujan Bulan Juni' oleh Sapardi Djoko Damono, 'Berjuta Rasanya' oleh Djenar Maesa Ayu, 'Lelaki Harimau' oleh A.A. Navis, 'Kisah Sedih di Hari Jumat' oleh Eka Kurniawan, 'Tenggelamnya Kapal Van Der Wijck' oleh Hamka" << endl;
    } else if (feeling == "marah") {
        cout << "Rekomendasi buku: 'Saman' oleh Ayu Utami, 'Bumi Manusia' oleh Pramoedya Ananta Toer, 'Tarian Bumi' oleh Oka Rusmini, 'Ronggeng Dukuh Paruk' oleh Ahmad Tohari, 'Perempuan di Titik Nol' oleh Nawal El Saadawi, 'Gerbang' oleh Fira Basuki, 'Bitter Sweet' oleh Andrea Hinata" << endl;
    } else if (feeling == "romantis") {
        cout << "Rekomendasi buku: 'The Star and I' oleh Ilana Tan, 'Dikta & Hukum' oleh Dhia'an Farah, 'Heartbreak Motel' oleh Ika Natassa, '1 Kos, 3 Cinta, 7 Keberuntungan' oleh Astrid Tito, 'Winter in Tokyo' oleh Ilana Tan, 'Ancika: Dia Yang Bersamaku Tahun 1995' oleh Pidi Baiq, 'Saat-Saat Jatuh' oleh Lia Seplia" << endl;
    } else if (feeling == "misteri") {
        cout << "Rekomendasi buku: 'Sherlock Holmes' oleh Arthur Conan Doyle, 'The Girl on the Train' oleh Paula Hawkins, 'Keajaiban Toko Kelontong Namiya' oleh Keigo Higashino, 'Teka-Teki Rumah Aneh' oleh Uketsu, 'Reset' oleh L. Zeth, 'A Slow Fire Burning' oleh Paula Hawkin, 'Vermilion Rain' oleh Kai Elian, 'The Silent patient' oleh Alex Michaelides" << endl;
    } else if (feeling == "sejarah") {
        cout << "Rekomendasi buku: 'Laut Bercerita' oleh Leila S. Chudori, 'Ronggeng Dukuh Paruk' oleh Ahmad Tohari, 'Gadis Kretek' oleh Ratih Kumala, 'Yang Telah Lama Pergi' oleh Tere Liye, 'Tetralogi Buru' oleh Pramoedya Ananta Toer, 'Sapiens' oleh Yuval Noah Harari" << endl;
    } else if (feeling == "fantasi") {
        cout << "Rekomendasi buku: 'Nyanyian Achilles' oleh Madeline Miller, 'The Chronicles of Narnia #7: The Last Battle' oleh C. S. Lewis, 'Bungo Stray Dogs 1' oleh Kafka Asagiri, 'Teh dan Pengkhianat' oleh Iksaka Banu, 'The Chronicles of Narnia #2: The Lion, the Witch and the Wardrobe' oleh C. S. Lewis, 'Mata di Tanah Melus' oleh Okky Madasari" << endl;
    } else if (feeling == "nonfiksi") {
        cout << "Rekomendasi buku: 'The Power of Habit' oleh Charles Duhigg, 'Koala Kumal' oleh Raditya Dika, 'Educated' oleh Tara Westover, 'Mindset' oleh Carol S. Dweck, 'Kamu Gak Sendiri' oleh Syahid Muhammad, 'Atomic Habits' oleh James Clear" << endl;
    } else {
        cout << "Maaf, kami tidak memiliki rekomendasi untuk perasaan tersebut." << endl;
    }
}

int main() {
    string feeling;

    cout << "Berikut: ";
    getline(cin, feeling);

    recommendBook(feeling);

    return 0;
}
