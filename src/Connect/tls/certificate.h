#pragma once

// openssl x509 -in x.pem -out x.der -outform der
// xxd -i x.der
// old certificate, expires around october 2024, should be removed after
constexpr const unsigned char ca_cert_der_old[] = {
    0x30, 0x82, 0x01, 0xc7, 0x30, 0x82, 0x01, 0x6d, 0x02, 0x14, 0x4a, 0x64,
    0xe9, 0x0c, 0x44, 0xd0, 0xf7, 0x2d, 0xa4, 0xea, 0x2d, 0x56, 0x2b, 0x0b,
    0x8e, 0xb7, 0xb0, 0x32, 0x8b, 0x2a, 0x30, 0x0a, 0x06, 0x08, 0x2a, 0x86,
    0x48, 0xce, 0x3d, 0x04, 0x03, 0x02, 0x30, 0x66, 0x31, 0x0b, 0x30, 0x09,
    0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x43, 0x5a, 0x31, 0x10, 0x30,
    0x0e, 0x06, 0x03, 0x55, 0x04, 0x08, 0x0c, 0x07, 0x43, 0x7a, 0x65, 0x63,
    0x68, 0x69, 0x61, 0x31, 0x0f, 0x30, 0x0d, 0x06, 0x03, 0x55, 0x04, 0x07,
    0x0c, 0x06, 0x50, 0x72, 0x61, 0x67, 0x75, 0x65, 0x31, 0x1c, 0x30, 0x1a,
    0x06, 0x03, 0x55, 0x04, 0x0a, 0x0c, 0x13, 0x50, 0x72, 0x75, 0x73, 0x61,
    0x20, 0x52, 0x65, 0x73, 0x65, 0x61, 0x72, 0x63, 0x68, 0x20, 0x61, 0x2e,
    0x73, 0x2e, 0x31, 0x16, 0x30, 0x14, 0x06, 0x03, 0x55, 0x04, 0x0b, 0x0c,
    0x0d, 0x50, 0x72, 0x75, 0x73, 0x61, 0x20, 0x43, 0x6f, 0x6e, 0x6e, 0x65,
    0x63, 0x74, 0x30, 0x1e, 0x17, 0x0d, 0x32, 0x32, 0x31, 0x30, 0x31, 0x30,
    0x31, 0x31, 0x30, 0x36, 0x32, 0x33, 0x5a, 0x17, 0x0d, 0x32, 0x34, 0x31,
    0x30, 0x30, 0x39, 0x31, 0x31, 0x30, 0x36, 0x32, 0x33, 0x5a, 0x30, 0x66,
    0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x43,
    0x5a, 0x31, 0x10, 0x30, 0x0e, 0x06, 0x03, 0x55, 0x04, 0x08, 0x0c, 0x07,
    0x43, 0x7a, 0x65, 0x63, 0x68, 0x69, 0x61, 0x31, 0x0f, 0x30, 0x0d, 0x06,
    0x03, 0x55, 0x04, 0x07, 0x0c, 0x06, 0x50, 0x72, 0x61, 0x67, 0x75, 0x65,
    0x31, 0x1c, 0x30, 0x1a, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x0c, 0x13, 0x50,
    0x72, 0x75, 0x73, 0x61, 0x20, 0x52, 0x65, 0x73, 0x65, 0x61, 0x72, 0x63,
    0x68, 0x20, 0x61, 0x2e, 0x73, 0x2e, 0x31, 0x16, 0x30, 0x14, 0x06, 0x03,
    0x55, 0x04, 0x0b, 0x0c, 0x0d, 0x50, 0x72, 0x75, 0x73, 0x61, 0x20, 0x43,
    0x6f, 0x6e, 0x6e, 0x65, 0x63, 0x74, 0x30, 0x59, 0x30, 0x13, 0x06, 0x07,
    0x2a, 0x86, 0x48, 0xce, 0x3d, 0x02, 0x01, 0x06, 0x08, 0x2a, 0x86, 0x48,
    0xce, 0x3d, 0x03, 0x01, 0x07, 0x03, 0x42, 0x00, 0x04, 0x9d, 0x85, 0x4c,
    0x34, 0x54, 0x69, 0x76, 0x6b, 0x05, 0x04, 0x20, 0xa4, 0x2a, 0xc1, 0x68,
    0xcd, 0xe2, 0x14, 0x98, 0x19, 0x25, 0xaf, 0xa6, 0x08, 0x9d, 0x70, 0xc1,
    0xfd, 0x0f, 0xab, 0x3b, 0x39, 0x0f, 0x4e, 0x9a, 0xa7, 0x7d, 0xc2, 0xda,
    0x3b, 0xf6, 0x24, 0x47, 0xd8, 0x7b, 0x37, 0x69, 0x9e, 0x0d, 0xfd, 0x44,
    0xab, 0x6f, 0x9e, 0x9c, 0xee, 0x19, 0x04, 0x1c, 0x74, 0xd9, 0xdc, 0x83,
    0x65, 0x30, 0x0a, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x04, 0x03,
    0x02, 0x03, 0x48, 0x00, 0x30, 0x45, 0x02, 0x20, 0x73, 0x82, 0x80, 0x55,
    0xec, 0x30, 0x2d, 0x17, 0x92, 0x07, 0x27, 0xf3, 0x0f, 0x06, 0x2a, 0x2b,
    0xb2, 0x74, 0x72, 0xd4, 0x7d, 0xbb, 0x58, 0x4d, 0xa1, 0xf2, 0x5e, 0x7c,
    0x5c, 0xd6, 0xf4, 0x5e, 0x02, 0x21, 0x00, 0x8c, 0xbd, 0xb2, 0x01, 0x31,
    0x43, 0xbb, 0xfe, 0xaf, 0x66, 0x2d, 0xfd, 0x8e, 0x20, 0xa2, 0xfd, 0xb2,
    0xf9, 0xf9, 0xbb, 0xfd, 0x44, 0x5e, 0x39, 0xde, 0x53, 0xd5, 0x9a, 0x3b,
    0xbf, 0x73, 0xc5

};

constexpr unsigned int ca_cert_der_len_old = sizeof(ca_cert_der_old);

// new certificate, should remain, valid another 20 years or so
constexpr const unsigned char ca_cert_der_new[] = {
    0x30, 0x82, 0x02, 0x18, 0x30, 0x82, 0x01, 0xbf, 0xa0, 0x03, 0x02, 0x01,
    0x02, 0x02, 0x14, 0x03, 0x58, 0xca, 0x77, 0xfa, 0xe0, 0x4c, 0x2f, 0x60,
    0x55, 0x69, 0xeb, 0x6b, 0xd0, 0x9a, 0x29, 0xe4, 0x97, 0x3b, 0xc3, 0x30,
    0x0a, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x04, 0x03, 0x02, 0x30,
    0x5a, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02,
    0x43, 0x5a, 0x31, 0x0f, 0x30, 0x0d, 0x06, 0x03, 0x55, 0x04, 0x07, 0x13,
    0x06, 0x50, 0x72, 0x61, 0x67, 0x75, 0x65, 0x31, 0x1c, 0x30, 0x1a, 0x06,
    0x03, 0x55, 0x04, 0x0a, 0x13, 0x13, 0x50, 0x72, 0x75, 0x73, 0x61, 0x20,
    0x52, 0x65, 0x73, 0x65, 0x61, 0x72, 0x63, 0x68, 0x20, 0x61, 0x2e, 0x73,
    0x2e, 0x31, 0x1c, 0x30, 0x1a, 0x06, 0x03, 0x55, 0x04, 0x03, 0x13, 0x13,
    0x50, 0x72, 0x75, 0x73, 0x61, 0x20, 0x52, 0x65, 0x73, 0x65, 0x61, 0x72,
    0x63, 0x68, 0x20, 0x61, 0x2e, 0x73, 0x2e, 0x30, 0x1e, 0x17, 0x0d, 0x32,
    0x34, 0x30, 0x34, 0x31, 0x36, 0x30, 0x38, 0x31, 0x36, 0x30, 0x33, 0x5a,
    0x17, 0x0d, 0x34, 0x34, 0x30, 0x34, 0x31, 0x31, 0x30, 0x38, 0x31, 0x36,
    0x33, 0x33, 0x5a, 0x30, 0x5a, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55,
    0x04, 0x06, 0x13, 0x02, 0x43, 0x5a, 0x31, 0x0f, 0x30, 0x0d, 0x06, 0x03,
    0x55, 0x04, 0x07, 0x13, 0x06, 0x50, 0x72, 0x61, 0x67, 0x75, 0x65, 0x31,
    0x1c, 0x30, 0x1a, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x13, 0x13, 0x50, 0x72,
    0x75, 0x73, 0x61, 0x20, 0x52, 0x65, 0x73, 0x65, 0x61, 0x72, 0x63, 0x68,
    0x20, 0x61, 0x2e, 0x73, 0x2e, 0x31, 0x1c, 0x30, 0x1a, 0x06, 0x03, 0x55,
    0x04, 0x03, 0x13, 0x13, 0x50, 0x72, 0x75, 0x73, 0x61, 0x20, 0x52, 0x65,
    0x73, 0x65, 0x61, 0x72, 0x63, 0x68, 0x20, 0x61, 0x2e, 0x73, 0x2e, 0x30,
    0x59, 0x30, 0x13, 0x06, 0x07, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x02, 0x01,
    0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x03, 0x01, 0x07, 0x03, 0x42,
    0x00, 0x04, 0x69, 0x47, 0x80, 0x84, 0x6b, 0x52, 0x9c, 0xd0, 0x8a, 0x0a,
    0x51, 0x11, 0x66, 0xe6, 0x58, 0xfd, 0xa9, 0xa2, 0x03, 0x39, 0x39, 0x54,
    0x75, 0x29, 0xe0, 0xd4, 0x38, 0x19, 0x4b, 0xdd, 0xe3, 0x93, 0xdd, 0x4d,
    0x47, 0xcd, 0x43, 0xf3, 0xcb, 0x46, 0x40, 0x5b, 0x38, 0x2c, 0x5b, 0xc5,
    0x73, 0x49, 0xd0, 0x6e, 0x79, 0x3b, 0xa5, 0x15, 0x68, 0x0c, 0xec, 0x6e,
    0x7f, 0x47, 0x7d, 0xae, 0xdd, 0xaa, 0xa3, 0x63, 0x30, 0x61, 0x30, 0x0e,
    0x06, 0x03, 0x55, 0x1d, 0x0f, 0x01, 0x01, 0xff, 0x04, 0x04, 0x03, 0x02,
    0x01, 0x06, 0x30, 0x0f, 0x06, 0x03, 0x55, 0x1d, 0x13, 0x01, 0x01, 0xff,
    0x04, 0x05, 0x30, 0x03, 0x01, 0x01, 0xff, 0x30, 0x1d, 0x06, 0x03, 0x55,
    0x1d, 0x0e, 0x04, 0x16, 0x04, 0x14, 0xd4, 0x44, 0x76, 0xa0, 0xb1, 0xd5,
    0x54, 0x18, 0x5f, 0x8c, 0xb0, 0xfc, 0x04, 0xbd, 0xe5, 0xee, 0xf0, 0x28,
    0x4b, 0xa4, 0x30, 0x1f, 0x06, 0x03, 0x55, 0x1d, 0x23, 0x04, 0x18, 0x30,
    0x16, 0x80, 0x14, 0xd4, 0x44, 0x76, 0xa0, 0xb1, 0xd5, 0x54, 0x18, 0x5f,
    0x8c, 0xb0, 0xfc, 0x04, 0xbd, 0xe5, 0xee, 0xf0, 0x28, 0x4b, 0xa4, 0x30,
    0x0a, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x04, 0x03, 0x02, 0x03,
    0x47, 0x00, 0x30, 0x44, 0x02, 0x20, 0x16, 0x91, 0x59, 0x99, 0xb2, 0x1c,
    0xe0, 0xc5, 0xe8, 0xf7, 0x32, 0x87, 0x22, 0x21, 0x05, 0x3b, 0x29, 0x54,
    0x0b, 0x56, 0x3b, 0xdc, 0x96, 0xd2, 0x6d, 0x9d, 0xcd, 0x99, 0xb6, 0xad,
    0xcc, 0x36, 0x02, 0x20, 0x22, 0x85, 0x12, 0xbd, 0x7e, 0xf8, 0xf4, 0x21,
    0x21, 0xcc, 0x52, 0xfd, 0xbd, 0x85, 0xf9, 0x0c, 0x52, 0x34, 0x73, 0x2f,
    0xb9, 0x68, 0xa8, 0xfa, 0xd8, 0x2a, 0x36, 0x27, 0xff, 0x68, 0x32, 0xa3
};

constexpr unsigned int ca_cert_der_len_new = sizeof(ca_cert_der_new);

constexpr std::array<std::span<const unsigned char>, 2> certificates = {
    std::span { ca_cert_der_old, ca_cert_der_len_old },
    std::span { ca_cert_der_new, ca_cert_der_len_new }
};