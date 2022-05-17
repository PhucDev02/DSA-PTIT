#include <iostream>
#include <iomanip>
#include <vector>    //su dung cau truc du lieu vector
#include <algorithm> //su dung ham sort
#include <math.h> //su dung ham sort
using namespace std;
struct DichVu
{
    int theLoai; // Lau thai(1) Lau tu xuyen(2) lau kimchi(3) nuong(4)
    int soNgan;
    float donGia;
    int soLuong;
};
struct KhachHang
{
    string ten;
    vector<DichVu> dichVu;
    int loaiNoi; // 1 ,2,3
    int soLuongNoiLau;
    float donGia;
    float thanhTien;
    float khuyenMai;
    float tongTien;
};

void inThongTinDichVu()
{
    cout << "Chon dich vu ban muon (nhap theo so trong ngoac):"
         << "\n(1) Lau thai.\n(2) Lau Tu Xuyen\n(3) Lau Kimchi.\n(4) Nuong Han Quoc.\n(0) Thoat.\n";
}

void inThongTinMenu()
{
    cout << "MENU\n(1) Nhap thong tin n khach hang.\n(2) Tinh tien.\n(3) Xuat thong tin n khach hang.\n"
         << "(4) Xuat thong tin 2 khach hang co tong tien lon nhat.\n"
         << "(0) Thoat (ket thuc chuong trinh).\n";
}

void nhapNKhachHang(vector<KhachHang> &khachHang)
{
    int n, tmp_loaiDichVu;
    float donGia;
    int soNganLau;
    int tmp_soLuong;
    cout << "Nhap so luong khach hang: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        KhachHang tmp_khachHang;
        cout << "Nhap ten khach hang: ";
        getline(cin, tmp_khachHang.ten);
        while (1)
        {
            inThongTinDichVu();
            cin >> tmp_loaiDichVu;
            if (tmp_loaiDichVu == 0)
                break;
            else
            {
                cout << "Nhap so luong :";
                cin >> tmp_soLuong;

                if (tmp_loaiDichVu != 4)
                {
                    cout << "Nhap so ngan su dung: ";
                    cin >> soNganLau;
                }
                else
                    soNganLau = 0;

                int tmp_soNganLau = soNganLau;
                soNganLau--;
                
                if (tmp_loaiDichVu == 1)
                {

                    donGia = 250;
                    while (soNganLau--)
                        donGia += 150;
                }
                else if (tmp_loaiDichVu == 2)
                {
                    donGia = 280;
                    while (soNganLau--)
                        donGia += 180;
                }
                else if (tmp_loaiDichVu == 3)
                {
                    donGia = 160;
                    while (soNganLau--)
                        donGia += 120;
                }
                else if (tmp_loaiDichVu == 4)
                {
                    donGia = 150;
                }
                tmp_khachHang.dichVu.push_back({tmp_loaiDichVu, tmp_soNganLau, donGia, tmp_soLuong});
            }
        }
        // tinh tong tien
        for (int j = 0; j < tmp_khachHang.dichVu.size(); j++)
        {
            tmp_khachHang.tongTien += tmp_khachHang.dichVu[j].soLuong * tmp_khachHang.dichVu[j].donGia;
        }

        // tinh thanh tien : vi khong co thong tin khuyen mai nen thanh tien = tong tien
        tmp_khachHang.thanhTien = tmp_khachHang.tongTien;
        khachHang.push_back(tmp_khachHang);
    }
}

void inThongTinKhachHang(KhachHang tmp)
{
    cout << "Ten khach hang: " << tmp.ten << endl;
    cout << "Dich vu yeu cau:\n";
    for (int i = 0; i < tmp.dichVu.size(); i++)
    {
        if (tmp.dichVu[i].theLoai == 1)
        {
            cout << "Lau Thai | " << tmp.dichVu[i].soNgan << " ngan | " << tmp.dichVu[i].soLuong << " suat.\n";
        }
        else if (tmp.dichVu[i].theLoai == 2)
        {
            cout << "Lau Tu Xuyen | " << tmp.dichVu[i].soNgan << " ngan | " << tmp.dichVu[i].soLuong << " suat.\n";
        }
        else if (tmp.dichVu[i].theLoai == 3)
        {
            cout << "Lau Kimchi | " << tmp.dichVu[i].soNgan << " ngan | " << tmp.dichVu[i].soLuong << " phan.\n";
        }
        else if (tmp.dichVu[i].theLoai == 4)
        {
            cout << "Nuong Han Quoc | " << tmp.dichVu[i].soLuong << " phan.\n";
        }
    }
    cout << "Tong tien su dung dich vu: " <<roundf(tmp.tongTien*100)/100 << endl;
    cout << "Thanh tien: " << roundf(tmp.thanhTien*100)/100 << endl;
}

bool byTongTienGiamDan(KhachHang a, KhachHang b)
{
    // neu tong tien bang nhau thi uu tien ai co ten be hon theo thu tu tu dien se dung truoc
    if (a.tongTien == b.tongTien)
        return a.ten < b.ten;
    return a.tongTien > b.tongTien;
}

void inThongTinKhachHangCoTongTienLonNhat(vector<KhachHang> khachHang)
{
    sort(khachHang.begin(), khachHang.end(), byTongTienGiamDan);
    // sau khi sap xep theo thu tu tong tien giam dan thi 2 khach hang co tong tien lon nhat se duoc dua len dau vector
    for (int i = 0; i < khachHang.size() && i < 2; i++)
    {
        cout << "Khach hang co tong tien lon thu " << i + 1 << " :\n";
        inThongTinKhachHang(khachHang[i]);
    }
}
void inThongTinToanBoKhachHang(vector<KhachHang> khachHang)
{
    for (int i = 0; i < khachHang.size(); i++)
    {
        inThongTinKhachHang(khachHang[i]);
    }
}
int main()
{
    vector<KhachHang> khachHang;

    int luaChon;
    while (1)
    {
        inThongTinMenu();
        cin >> luaChon;
        if (luaChon == 0)
            return 0;
        else if (luaChon == 1)
            nhapNKhachHang(khachHang);
        else if (luaChon == 2 || luaChon == 3)
            inThongTinToanBoKhachHang(khachHang);
        else if (luaChon == 4)
        {
            if (khachHang.size() < 2)
                cout << "Luong khach hang nhap vao < 2!\n";
            else
                inThongTinKhachHangCoTongTienLonNhat(khachHang);
        }
    }
}