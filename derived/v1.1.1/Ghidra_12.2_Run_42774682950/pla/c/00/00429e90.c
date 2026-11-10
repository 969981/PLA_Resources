/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00429e90; name: FUN_00429e90
 */


bool FUN_00429e90(undefined8 param_1)

{
  uint local_4;
  
  local_4 = 0;
  FUN_00429c50(param_1,&local_4);
  if ((local_4 & 1) != 0) {
    FUN_004014b0(5,0x7b,0x7c,"external/openssl/crypto/dh/dh_check.c",0xba);
  }
  if ((local_4 >> 1 & 1) != 0) {
    FUN_004014b0(5,0x7b,0x7b,"external/openssl/crypto/dh/dh_check.c",0xbc);
  }
  if ((local_4 >> 2 & 1) == 0) {
    return local_4 == 0;
  }
  FUN_004014b0(5,0x7b,0x7a,"external/openssl/crypto/dh/dh_check.c",0xbe);
  return local_4 == 0;
}


