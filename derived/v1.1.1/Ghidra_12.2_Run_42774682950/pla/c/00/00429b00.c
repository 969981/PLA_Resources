/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00429b00; name: FUN_00429b00
 */


bool FUN_00429b00(undefined8 param_1)

{
  uint local_4;
  
  local_4 = 0;
  FUN_00429c50(param_1,&local_4);
  if ((local_4 >> 3 & 1) != 0) {
    FUN_004014b0(5,0x79,0x78,"external/openssl/crypto/dh/dh_check.c",0x54);
  }
  if ((local_4 >> 4 & 1) != 0) {
    FUN_004014b0(5,0x79,0x77,"external/openssl/crypto/dh/dh_check.c",0x56);
  }
  if ((local_4 >> 5 & 1) != 0) {
    FUN_004014b0(5,0x79,0x74,"external/openssl/crypto/dh/dh_check.c",0x58);
  }
  if ((local_4 >> 6 & 1) != 0) {
    FUN_004014b0(5,0x79,0x73,"external/openssl/crypto/dh/dh_check.c",0x5a);
  }
  if ((local_4 >> 2 & 1) != 0) {
    FUN_004014b0(5,0x79,0x79,"external/openssl/crypto/dh/dh_check.c",0x5c);
  }
  if ((local_4 & 1) != 0) {
    FUN_004014b0(5,0x79,0x75,"external/openssl/crypto/dh/dh_check.c",0x5e);
  }
  if ((local_4 >> 1 & 1) == 0) {
    return local_4 == 0;
  }
  FUN_004014b0(5,0x79,0x76,"external/openssl/crypto/dh/dh_check.c",0x60);
  return local_4 == 0;
}


