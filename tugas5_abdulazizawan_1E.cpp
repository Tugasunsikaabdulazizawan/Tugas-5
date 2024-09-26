#include <iostream>
using namespace std;

double gajiPokok(int jamKerja) {
    const double gajiPerJam = 7500.0;
    return gajiPerJam * jamKerja;
}

double gajiLembur(int jamKerja) {
    const double gajiPerJam = 7500.0;
    if (jamKerja > 8) {
        return (jamKerja - 8) * gajiPerJam * 1.5; 
    }
    return 0.0;
}

double uangMakan(int jamKerja) {
    if (jamKerja >= 9) {
        return 10000; 
    }
    return 0.0;
}

double uangTransport(int jamKerja) {
    if (jamKerja >= 10) {
        return 13000; 
    }
    return 0.0;
}

int main() {
    int jamKerja;

    cout << "Masukkan jumlah jam kerja karyawan: ";
    cin >> jamKerja;

    double gajiPokokKaryawan = gajiPokok(jamKerja);
    double gajiLemburKaryawan = gajiLembur(jamKerja);
    double uangMakanKaryawan = uangMakan(jamKerja);
    double uangTransportKaryawan = uangTransport(jamKerja);

    double totalGaji = gajiPokokKaryawan + gajiLemburKaryawan + uangMakanKaryawan + uangTransportKaryawan;

    cout << "Gaji Pokok: " << gajiPokokKaryawan << endl;
    cout << "Gaji Lembur: " << gajiLemburKaryawan << endl;
    cout << "Uang Makan: " << uangMakanKaryawan << endl;
    cout << "Uang Transport: " << uangTransportKaryawan << endl;
    cout << "Total Gaji: " << totalGaji << endl;

    return 0;
}
